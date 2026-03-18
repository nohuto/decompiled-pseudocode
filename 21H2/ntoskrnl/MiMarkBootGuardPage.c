/*
 * XREFs of MiMarkBootGuardPage @ 0x140829B50
 * Callers:
 *     MmAllocateIsrStack @ 0x140829ACC (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140B04910 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiPartitionIdToPointer @ 0x1402182F8 (MiPartitionIdToPointer.c)
 *     MiLockAndDecrementShareCount @ 0x140228660 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

void __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r12
  unsigned __int64 v5; // rbx
  ULONG_PTR *v6; // rsi
  int v7; // r14d
  int v8; // ebx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return;
  v2 = (__int64)(a1 << 25) >> 16;
  v9 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v4 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v5 = ZeroPte;
  v6 = (ULONG_PTR *)MiPartitionIdToPointer((*(_QWORD *)(v3 + 40) >> 43) & 0x3FF);
  v7 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v7 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_3;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_3;
    }
    if ( (ZeroPte & 1) != 0 )
      v5 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_3:
  *(_QWORD *)a1 = v5;
  if ( v7 )
    MiWritePteShadow(a1, v5);
  KeFlushSingleTb(v2, 0, 1u);
  v8 = MiLockAndDecrementShareCount(v3, 1);
  MiLockAndDecrementShareCount(v4, 0);
  MiReturnResident((__int64)v6, 1uLL);
  if ( v8 != 3 )
    MiReturnCommit((__int64)v6, 1LL);
  if ( v6 == &MiSystemPartition )
  {
    if ( (unsigned int)MiGetSystemRegionType(v2) == 14 )
      _InterlockedExchangeAdd64(&qword_140C53548, 0xFFFFFFFFFFFFFFFFuLL);
    else
      --qword_140C53528;
  }
}
