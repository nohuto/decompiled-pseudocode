/*
 * XREFs of MiMarkBootGuardPage @ 0x140781E08
 * Callers:
 *     MmAllocateIsrStack @ 0x140781D84 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x140A40374 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiReturnResident @ 0x1402D4EFC (MiReturnResident.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x140323828 (MiPartitionIdToPointer.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
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
  _DWORD *v10; // r9
  int v11; // ebx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return;
  v2 = (__int64)(a1 << 25) >> 16;
  v14 = MI_READ_PTE_LOCK_FREE(a1);
  PteShadow = v14;
  if ( MiPteInShadowRange((unsigned __int64)&v14) )
    PteShadow = MiReadPteShadow((unsigned __int64)&v14, PteShadow);
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
      if ( HIBYTE(word_140C4DF48) )
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
  v11 = MiLockAndDecrementShareCount(v4, 1LL, v9, v10);
  MiLockAndDecrementShareCount(v5, 0LL, v12, v13);
  MiReturnResident((__int64)v7, 1uLL);
  if ( v11 != 3 )
    MiReturnCommit((__int64)v7, 1LL);
  if ( v7 == &MiSystemPartition )
  {
    if ( (unsigned int)MiGetSystemRegionType(v2) == 14 )
      _InterlockedExchangeAdd64(&qword_140C4EF08, 0xFFFFFFFFFFFFFFFFuLL);
    else
      --qword_140C4EEF0;
  }
}
