/*
 * XREFs of MiMarkBootGuardPage @ 0x14079F9BC
 * Callers:
 *     MmAllocateIsrStack @ 0x14079F938 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140A4D410 (MiInitializeKernelStacks.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x1402CBF58 (MiPartitionIdToPointer.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x140305A30 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
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
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return;
  v2 = (__int64)(a1 << 25) >> 16;
  v13 = MI_READ_PTE_LOCK_FREE(a1);
  PteShadow = v13;
  if ( MiPteInShadowRange((unsigned __int64)&v13) )
    PteShadow = MiReadPteShadow((unsigned __int64)&v13, PteShadow);
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
      if ( HIBYTE(word_140C4E008) )
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
  v11 = MiLockAndDecrementShareCount(v4, 1LL, v10);
  MiLockAndDecrementShareCount(v5, 0LL, v12);
  MiReturnResident((__int64)v7, 1uLL);
  if ( v11 != 3 )
    MiReturnCommit((__int64)v7, 1LL);
  if ( v7 == &MiSystemPartition )
  {
    if ( (unsigned int)MiGetSystemRegionType(v2) == 14 )
      _InterlockedExchangeAdd64(&qword_140C4EFC8, 0xFFFFFFFFFFFFFFFFuLL);
    else
      --qword_140C4EFB0;
  }
}
