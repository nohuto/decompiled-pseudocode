/*
 * XREFs of MiLinkPoolCommitChain @ 0x140316290
 * Callers:
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 * Callees:
 *     MiInitializeLargeNonPagedPoolLeafFrames @ 0x14020DE70 (MiInitializeLargeNonPagedPoolLeafFrames.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLockAndIncrementShareCount @ 0x140296C70 (MiLockAndIncrementShareCount.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiIsPoolPteInUse @ 0x14031787C (MiIsPoolPteInUse.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiFlushTbAsNeeded @ 0x140340D60 (MiFlushTbAsNeeded.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiWriteTopLevelPxe @ 0x14039E05C (MiWriteTopLevelPxe.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall MiLinkPoolCommitChain(__int64 a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // rdi
  __int64 CurrentThread; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  int v10; // r8d
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  ULONG_PTR v14; // r9
  _QWORD *v15; // rcx
  __int64 v16; // rbp
  __int64 ValidPte; // rbx
  __int64 ContainingPageTable; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx

  v2 = a2;
  v3 = (a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
  if ( v3 > *(_QWORD *)(a1 + 56) )
    v3 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 78) & 4) != 0 )
  {
    v11 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    MI_READ_PTE_LOCK_FREE(v11);
    v12 = MiSwizzleInvalidPte(768LL);
    if ( v13 != v12 && (unsigned int)MiIsPoolPteInUse(v13) )
      KeBugCheckEx(0x1Au, 0x5304uLL, (__int64)(v2 << 25) >> 16, v14, 0LL);
    v15 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 24) += 512LL;
    *(_QWORD *)(a1 + 16) = *v15;
    v16 = (__int64)(v15 + 0xB000000000LL) / 48;
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v16, 0x200uLL, 1, 1);
    ValidPte = MiMakeValidPte(0LL, v16, (*(unsigned __int16 *)(a1 + 78) >> 3) & 0x1F | 0xA4000000);
    if ( (unsigned __int64)v11 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v11 > 0xFFFFF6FB7DBEDFFFuLL )
    {
      if ( (unsigned int)MiPteInShadowRange(v11) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (ValidPte & 1) != 0 )
            ValidPte |= 0x8000000000000000uLL;
          *v11 = ValidPte;
          MiWritePteShadow((__int64)v11, ValidPte);
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (ValidPte & 1) != 0 )
        {
          ValidPte |= 0x8000000000000000uLL;
        }
      }
      *v11 = ValidPte;
    }
    else
    {
      MiWriteTopLevelPxe(v11, ValidPte);
    }
LABEL_23:
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v11);
    MiLockAndIncrementShareCount(ContainingPageTable);
    LOBYTE(CurrentThread) = MiInitializeLargeNonPagedPoolLeafFrames(v2, v16);
    return CurrentThread;
  }
  MiFlushTbAsNeeded(a2);
  v5 = *(_QWORD *)(a1 + 32);
  for ( LOBYTE(CurrentThread) = 0; v2 <= v3; v2 += 8LL )
  {
    v7 = *(_QWORD *)v2;
    if ( (unsigned int)MiPteInShadowRange(v2)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v7 & 1) != 0
      && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v20 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
        v21 = v7 | 0x20;
        if ( (v20 & 0x20) == 0 )
          v21 = v7;
        v7 = v21;
        if ( (v20 & 0x42) != 0 )
          v7 = v21 | 0x42;
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
    v9 = CurrentThread | 0x3E0;
    if ( v10 )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v9 & 1) != 0 )
          v9 |= 0x8000000000000000uLL;
        *(_QWORD *)v2 = v9;
        LOBYTE(CurrentThread) = MiWritePteShadow(v2, v9);
        goto LABEL_14;
      }
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) != 0 && (v9 & 1) != 0 )
        v9 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)v2 = v9;
LABEL_14:
    v5 = v2;
  }
  *(_QWORD *)(a1 + 32) = v5;
  return CurrentThread;
}
