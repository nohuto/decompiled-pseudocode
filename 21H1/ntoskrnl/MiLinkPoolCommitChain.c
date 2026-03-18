/*
 * XREFs of MiLinkPoolCommitChain @ 0x140222320
 * Callers:
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 * Callees:
 *     MiFlushTbAsNeeded @ 0x140220080 (MiFlushTbAsNeeded.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLockAndIncrementShareCount @ 0x1402BA158 (MiLockAndIncrementShareCount.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E91E0 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiIsPoolPteInUse @ 0x1402F2EF4 (MiIsPoolPteInUse.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUpdateLargePageBitMap @ 0x140346C18 (MiUpdateLargePageBitMap.c)
 *     MiWriteTopLevelPxe @ 0x14039A9EC (MiWriteTopLevelPxe.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 Process; // rdx
  ULONG_PTR v6; // rdi
  __int64 CurrentThread; // rax
  ULONG_PTR v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // r8d
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r9
  ULONG_PTR v15; // r9
  _QWORD *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 ValidPte; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 ContainingPageTable; // rax
  __int64 v23; // rax

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
  {
    v12 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MI_READ_PTE_LOCK_FREE(v12);
    v13 = MiSwizzleInvalidPte(768LL);
    if ( v14 != v13 && (unsigned int)MiIsPoolPteInUse(v14) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v15, 0LL);
    v16 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 24) += 512LL;
    *(_QWORD *)(a1 + 16) = *v16;
    v17 = (__int64)(v16 + 0xB000000000LL) / 48;
    MiUpdateLargePageBitMap((unsigned int)&MiSystemPartition, (int)v16 / 48, 512, 1, 1);
    ValidPte = MiMakeValidPte(0LL, v17, (*(unsigned __int16 *)(a1 + 78) >> 3) & 0x1F | 0xA4000000);
    if ( (unsigned __int64)v12 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v12 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( (unsigned int)MiPteInShadowRange(v12, v18) )
      {
        if ( (unsigned int)MiPteHasShadow(v21, v20) )
        {
          if ( !HIBYTE(word_140C4DF48) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *v12 = ValidPte;
          MiWritePteShadow(v12, ValidPte);
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *v12 = ValidPte;
    }
    else
    {
      MiWriteTopLevelPxe(v12, ValidPte);
    }
LABEL_23:
    ContainingPageTable = MiGetContainingPageTable(v12, v20);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(CurrentThread) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v17);
    return CurrentThread;
  }
  MiFlushTbAsNeeded(a2, ((__int64)(v3 - a2) >> 3) + 1, *(_DWORD *)(a1 + 44), 1);
  v6 = *(_QWORD *)(a1 + 32);
  for ( LOBYTE(CurrentThread) = 0; v2 <= v3; v2 += 8LL )
  {
    v8 = *(_QWORD *)v2;
    if ( (unsigned int)MiPteInShadowRange(v2, Process) )
    {
      if ( (MiFlags & 0xC00000) != 0 )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 912) != 1 && (v8 & 1) != 0 && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
        {
          Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Process )
          {
            v23 = *(_QWORD *)(Process + 8 * ((v2 >> 3) & 0x1FF));
            Process = v8 | 0x20;
            if ( (v23 & 0x20) == 0 )
              Process = v8;
            v8 = Process;
            if ( (v23 & 0x42) != 0 )
              v8 = Process | 0x42;
          }
        }
      }
    }
    CurrentThread = v8 & 0x3E0;
    LOBYTE(Process) = (v8 & 0xC01) == 0;
    if ( ((unsigned __int8)Process & (CurrentThread == 0)) == 0 )
    {
      if ( (v8 & 1) == 0 )
      {
        LOBYTE(CurrentThread) = CurrentThread == 992;
        if ( (((v8 & 0xC00) == 0) & (unsigned __int8)CurrentThread) != 0 )
          KeBugCheckEx(0x1Au, 0x5308uLL, v2, v8, 0LL);
      }
      continue;
    }
    if ( v6 )
      v9 = (__int64)(v6 + 0x94000000000LL) >> 3;
    else
      v9 = 0xFFFFFFFFFLL;
    CurrentThread = MiSwizzleInvalidPte(v9 << 28);
    Process = CurrentThread | 0x3E0;
    if ( v11 )
    {
      if ( (unsigned int)MiPteHasShadow(v10, Process) )
      {
        if ( !HIBYTE(word_140C4DF48) && (Process & 1) != 0 )
          Process |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = Process;
        LOBYTE(CurrentThread) = MiWritePteShadow(v2, Process);
        goto LABEL_14;
      }
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) != 0 && (Process & 1) != 0 )
        Process |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = Process;
LABEL_14:
    v6 = v2;
  }
  *(_QWORD *)(a1 + 32) = v6;
  return CurrentThread;
}
