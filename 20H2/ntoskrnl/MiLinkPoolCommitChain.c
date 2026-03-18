/*
 * XREFs of MiLinkPoolCommitChain @ 0x1402CB030
 * Callers:
 *     MiCommitPoolMemory @ 0x1402CAD1C (MiCommitPoolMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiFlushTbAsNeeded @ 0x1402B9260 (MiFlushTbAsNeeded.c)
 *     MiIsPoolPteInUse @ 0x1402CEA08 (MiIsPoolPteInUse.c)
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402F1050 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLockAndIncrementShareCount @ 0x140336800 (MiLockAndIncrementShareCount.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiWriteTopLevelPxe @ 0x14039E2CC (MiWriteTopLevelPxe.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rdi
  __int64 CurrentThread; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  ULONG_PTR v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rbp
  __int64 v19; // r9
  unsigned __int64 ValidPte; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 ContainingPageTable; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
  {
    v13 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MI_READ_PTE_LOCK_FREE((unsigned __int64)v13);
    v14 = MiSwizzleInvalidPte(768LL);
    if ( v15 != v14 && (unsigned int)MiIsPoolPteInUse(v15) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v16, 0LL);
    v17 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 24) += 512LL;
    *(_QWORD *)(a1 + 16) = *v17;
    v18 = (__int64)(v17 + 0xB000000000LL) / 48;
    MiUpdateLargePageBitMap((unsigned int)&MiSystemPartition, (int)v17 / 48, 512, 1, 1);
    ValidPte = MiMakeValidPte(0LL, v18, (*(unsigned __int16 *)(a1 + 78) >> 3) & 0x1F | 0xA4000000, v19);
    if ( (unsigned __int64)v13 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v13 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( MiPteInShadowRange((unsigned __int64)v13) )
      {
        if ( (unsigned int)MiPteHasShadow(v22, v21, v23, v24) )
        {
          if ( !HIBYTE(word_140C4DE88) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *v13 = ValidPte;
          MiWritePteShadow(v13, ValidPte);
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *v13 = ValidPte;
    }
    else
    {
      MiWriteTopLevelPxe(v13, ValidPte);
    }
LABEL_23:
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v13);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(CurrentThread) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v18);
    return CurrentThread;
  }
  MiFlushTbAsNeeded(a2, ((__int64)(v3 - a2) >> 3) + 1, *(_DWORD *)(a1 + 44), 1);
  v5 = *(_QWORD *)(a1 + 32);
  for ( LOBYTE(CurrentThread) = 0; v2 <= v3; v2 += 8LL )
  {
    v7 = *(_QWORD *)v2;
    if ( MiPteInShadowRange(v2)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v27 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
        v28 = v7 | 0x20;
        if ( (v27 & 0x20) == 0 )
          v28 = v7;
        v7 = v28;
        if ( (v27 & 0x42) != 0 )
          v7 = v28 | 0x42;
      }
    }
    CurrentThread = v7 & 0x3E0;
    if ( (v7 & 0xC01) != 0 || CurrentThread != 0 )
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
      v8 = (__int64)(v5 + 0x94000000000LL) >> 3;
    else
      v8 = 0xFFFFFFFFFLL;
    CurrentThread = MiSwizzleInvalidPte(v8 << 28);
    v12 = CurrentThread | 0x3E0;
    if ( (_DWORD)v10 )
    {
      if ( (unsigned int)MiPteHasShadow(v9, v12, v10, v11) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v12 & 1) != 0 )
          v12 |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = v12;
        LOBYTE(CurrentThread) = MiWritePteShadow(v2, v12);
        goto LABEL_14;
      }
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) != 0 && (v12 & 1) != 0 )
        v12 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = v12;
LABEL_14:
    v5 = v2;
  }
  *(_QWORD *)(a1 + 32) = v5;
  return CurrentThread;
}
