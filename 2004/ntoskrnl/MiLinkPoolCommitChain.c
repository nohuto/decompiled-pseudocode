/*
 * XREFs of MiLinkPoolCommitChain @ 0x1402B4FA0
 * Callers:
 *     MiCommitPoolMemory @ 0x1402586AC (MiCommitPoolMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLockAndIncrementShareCount @ 0x140261128 (MiLockAndIncrementShareCount.c)
 *     MiFlushTbAsNeeded @ 0x1402B2D00 (MiFlushTbAsNeeded.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x140324060 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiIsPoolPteInUse @ 0x14032EC94 (MiIsPoolPteInUse.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiWriteTopLevelPxe @ 0x14039B17C (MiWriteTopLevelPxe.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rdi
  __int64 CurrentThread; // rax
  ULONG_PTR v7; // rbx
  BOOL v8; // eax
  __int64 Process; // rdx
  __int64 v10; // r9
  _BOOL8 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  ULONG_PTR v23; // r9
  _QWORD *v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // r9
  unsigned __int64 ValidPte; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 ContainingPageTable; // rax
  __int64 v33; // rax

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
  {
    v17 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v18 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v17);
    v21 = MiSwizzleInvalidPte(768LL, v19, v20, v18);
    if ( v22 != v21 && (unsigned int)MiIsPoolPteInUse(v22) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v23, 0LL);
    v24 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 24) += 512LL;
    *(_QWORD *)(a1 + 16) = *v24;
    v25 = (__int64)(v24 + 0xB000000000LL) / 48;
    MiUpdateLargePageBitMap((unsigned int)&MiSystemPartition, (int)v24 / 48, 512, 1, 1);
    ValidPte = MiMakeValidPte(0LL, v25, (*(unsigned __int16 *)(a1 + 78) >> 3) & 0x1F | 0xA4000000, v26);
    if ( (unsigned __int64)v17 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v17 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( MiPteInShadowRange((unsigned __int64)v17) )
      {
        if ( (unsigned int)MiPteHasShadow(v29, v28, v30, v31) )
        {
          if ( !HIBYTE(word_140C4DE08) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *v17 = ValidPte;
          MiWritePteShadow(v17, ValidPte);
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *v17 = ValidPte;
    }
    else
    {
      MiWriteTopLevelPxe(v17, ValidPte);
    }
LABEL_23:
    ContainingPageTable = MiGetContainingPageTable(v17);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(CurrentThread) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v25);
    return CurrentThread;
  }
  MiFlushTbAsNeeded(a2, ((__int64)(v3 - a2) >> 3) + 1, *(_DWORD *)(a1 + 44), 1);
  v5 = *(_QWORD *)(a1 + 32);
  for ( LOBYTE(CurrentThread) = 0; v2 <= v3; v2 += 8LL )
  {
    v7 = *(_QWORD *)v2;
    v8 = MiPteInShadowRange(v2);
    v11 = v8;
    if ( v8 )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 912) != 1 && (v7 & 1) != 0 && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Process )
          {
            v33 = *(_QWORD *)(Process + 8 * ((v2 >> 3) & 0x1FF));
            Process = v7 | 0x20;
            if ( (v33 & 0x20) == 0 )
              Process = v7;
            v7 = Process;
            if ( (v33 & 0x42) != 0 )
              v7 = Process | 0x42;
          }
        }
      }
    }
    CurrentThread = v7 & 0x3E0;
    LOBYTE(Process) = (v7 & 0xC01) == 0;
    if ( ((unsigned __int8)Process & (CurrentThread == 0)) == 0 )
    {
      if ( (v7 & 1) == 0 )
      {
        LOBYTE(CurrentThread) = CurrentThread == 992;
        if ( (((v7 & 0xC00) == 0) & (unsigned __int8)CurrentThread) != 0 )
          KeBugCheckEx(0x1Au, 0x5308uLL, v2, v7, 0LL);
      }
      continue;
    }
    if ( v5 )
      v12 = (__int64)(v5 + 0x94000000000LL) >> 3;
    else
      v12 = 0xFFFFFFFFFLL;
    CurrentThread = MiSwizzleInvalidPte(v12 << 28, Process, v11, v10);
    v16 = CurrentThread | 0x3E0;
    if ( (_DWORD)v14 )
    {
      if ( (unsigned int)MiPteHasShadow(v13, v16, v14, v15) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v16 & 1) != 0 )
          v16 |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = v16;
        LOBYTE(CurrentThread) = MiWritePteShadow(v2, v16);
        goto LABEL_14;
      }
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) != 0 && (v16 & 1) != 0 )
        v16 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = v16;
LABEL_14:
    v5 = v2;
  }
  *(_QWORD *)(a1 + 32) = v5;
  return CurrentThread;
}
