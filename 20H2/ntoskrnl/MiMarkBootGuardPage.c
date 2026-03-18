/*
 * XREFs of MiMarkBootGuardPage @ 0x14079549C
 * Callers:
 *     MmAllocateIsrStack @ 0x140795418 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140A4BE70 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiReturnResident @ 0x14026307C (MiReturnResident.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x14031EF60 (MiPartitionIdToPointer.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
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
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return;
  v2 = (__int64)(a1 << 25) >> 16;
  v11 = MI_READ_PTE_LOCK_FREE(a1);
  PteShadow = v11;
  if ( MiPteInShadowRange((unsigned __int64)&v11) )
    PteShadow = MiReadPteShadow((unsigned __int64)&v11, PteShadow);
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
      if ( HIBYTE(word_140C4DE88) )
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
    MiWritePteShadow(a1, v6, v9);
  KeFlushSingleTb(v2, 0, 1u);
  v10 = MiLockAndDecrementShareCount(v4, 1);
  MiLockAndDecrementShareCount(v5, 0);
  MiReturnResident((__int64)v7, 1uLL);
  if ( v10 != 3 )
    MiReturnCommit((__int64)v7, 1LL);
  if ( v7 == &MiSystemPartition )
  {
    if ( (unsigned int)MiGetSystemRegionType(v2) == 14 )
      _InterlockedExchangeAdd64(&qword_140C4EE48, 0xFFFFFFFFFFFFFFFFuLL);
    else
      --qword_140C4EE30;
  }
}
