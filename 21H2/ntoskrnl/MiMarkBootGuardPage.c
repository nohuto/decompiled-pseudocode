/*
 * XREFs of MiMarkBootGuardPage @ 0x14079FBBC
 * Callers:
 *     MmAllocateIsrStack @ 0x14079FB38 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140A4E410 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x14024A6C4 (MiPartitionIdToPointer.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiReturnResident @ 0x140273F7C (MiReturnResident.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 */

void __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 PteShadow; // rbx
  __int64 v4; // r15
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  ULONG_PTR *v7; // rbp
  int v8; // r14d
  int v9; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return;
  v2 = (__int64)(a1 << 25) >> 16;
  v10 = MI_READ_PTE_LOCK_FREE(a1);
  PteShadow = v10;
  if ( MiPteInShadowRange((unsigned __int64)&v10) )
    PteShadow = MiReadPteShadow((unsigned __int64)&v10, PteShadow);
  v4 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v5 = 48 * (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v6 = ZeroPte;
  v7 = (ULONG_PTR *)MiPartitionIdToPointer((*(_QWORD *)(v4 + 40) >> 39) & 0x3FF);
  v8 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_5;
    }
    if ( (ZeroPte & 1) != 0 )
      v6 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_5:
  *(_QWORD *)a1 = v6;
  if ( v8 )
    MiWritePteShadow(a1, v6);
  KeFlushSingleTb(v2, 0, 1u);
  v9 = MiLockAndDecrementShareCount(v4, 1);
  MiLockAndDecrementShareCount(v5, 0);
  MiReturnResident((__int64)v7, 1uLL);
  if ( v9 != 3 )
    MiReturnCommit((__int64)v7, 1LL);
  if ( v7 == &MiSystemPartition )
  {
    if ( (unsigned int)MiGetSystemRegionType(v2) == 14 )
      _InterlockedExchangeAdd64(&qword_140C4F008, 0xFFFFFFFFFFFFFFFFuLL);
    else
      --qword_140C4EFF0;
  }
}
