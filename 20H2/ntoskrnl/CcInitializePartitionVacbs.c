/*
 * XREFs of CcInitializePartitionVacbs @ 0x1403C2AD8
 * Callers:
 *     CcInitializePartition @ 0x1403C2114 (CcInitializePartition.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     CcGetVacbFromFreeList @ 0x14029A2D0 (CcGetVacbFromFreeList.c)
 *     CcSetVacbInFreeList @ 0x14029CA88 (CcSetVacbInFreeList.c)
 *     CcInsertVacbArray @ 0x140379994 (CcInsertVacbArray.c)
 *     CcAllocateInitializeVacbArray @ 0x14037ABF4 (CcAllocateInitializeVacbArray.c)
 *     MmReserveViewInSystemCache @ 0x1407B7CE4 (MmReserveViewInSystemCache.c)
 */

char __fastcall CcInitializePartitionVacbs(__int64 a1)
{
  char v1; // di
  KIRQL v3; // bl
  __int64 *VacbFromFreeList; // r14
  __int64 v5; // rax
  KIRQL v6; // bl
  KIRQL v7; // dl
  char *InitializeVacbArray; // rbx
  KIRQL v9; // bp
  KIRQL v11; // bl

  v1 = 1;
  while ( *(_DWORD *)(a1 + 920) < (unsigned int)CcMinimumFreeHighPriorityVacbs )
  {
    v3 = KeAcquireQueuedSpinLock(4uLL);
    VacbFromFreeList = CcGetVacbFromFreeList(a1, 0);
    KeReleaseQueuedSpinLock(4uLL, v3);
    if ( VacbFromFreeList )
    {
      v5 = MmReserveViewInSystemCache(*(_QWORD *)(a1 + 8));
      *VacbFromFreeList = v5;
      if ( !v5 )
      {
        v1 = 0;
        v11 = KeAcquireQueuedSpinLock(4uLL);
        CcSetVacbInFreeList(a1, VacbFromFreeList, 0);
        KeReleaseQueuedSpinLock(4uLL, v11);
        return v1;
      }
      v6 = KeAcquireQueuedSpinLock(4uLL);
      CcSetVacbInFreeList(a1, VacbFromFreeList, 1);
      v7 = v6;
    }
    else
    {
      InitializeVacbArray = CcAllocateInitializeVacbArray();
      if ( !InitializeVacbArray )
        return 0;
      v9 = KeAcquireQueuedSpinLock(4uLL);
      CcInsertVacbArray(a1, InitializeVacbArray);
      if ( CcVacbArraysAllocated == 1 )
        *((_DWORD *)InitializeVacbArray + 1) = 1;
      v7 = v9;
    }
    KeReleaseQueuedSpinLock(4uLL, v7);
  }
  return v1;
}
