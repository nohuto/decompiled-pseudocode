/*
 * XREFs of ExRemovePoolTag @ 0x1402166FC
 * Callers:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 * Callees:
 *     ExpPoolTrackerReturnLimit @ 0x140216928 (ExpPoolTrackerReturnLimit.c)
 *     ExpFreePoolChecks @ 0x140216974 (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140221790 (ExpRemovePoolTrackerExpansion.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 */

__int64 __fastcall ExRemovePoolTag(ULONG_PTR BugCheckParameter2, _DWORD *a2, __int64 *a3, int *a4)
{
  KIRQL v8; // al
  int v9; // r10d
  unsigned __int64 v10; // r13
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rbp
  unsigned int v16; // r15d
  unsigned __int8 v17; // r12
  unsigned int v18; // r15d
  unsigned int v19; // edi
  __int64 v20; // r14
  __int64 v21; // rax
  int v22; // r10d
  __int64 v23; // r13
  unsigned int v24; // edx
  __int64 v25; // r8
  int v27; // r11d
  __int64 v28; // r11
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v31; // eax
  _DWORD *SchedulerAssist; // r8
  bool v33; // zf
  _BYTE *v34; // r9

  v8 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v9 = 1;
  v10 = v8;
  v11 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter2 >> 12))) & (PoolBigPageTableSize - 1);
  v12 = 0;
  while ( *(_QWORD *)(PoolBigPageTable + 32LL * v11) != BugCheckParameter2 )
  {
    if ( ++v11 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v9 )
        goto LABEL_27;
      v11 = 0;
      v9 = 0;
    }
  }
  v13 = PoolBigPageTable + 32LL * v11;
  if ( !v13 )
LABEL_27:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, *a4, 0LL);
  v14 = *(_DWORD *)(v13 + 8);
  v15 = *(_QWORD *)(v13 + 16);
  *a2 = v14;
  v16 = *(_DWORD *)(v13 + 12);
  *a3 = v15;
  *a4 = (v16 >> 8) & 0xFFF;
  if ( v14 == 1819242320 )
  {
    v17 = 0;
    LOWORD(v18) = 0;
  }
  else
  {
    v17 = v16;
    v18 = v16 >> 20;
  }
  _InterlockedAdd(&ExpPoolBigEntriesInUse, 0xFFFFFFFF);
  _InterlockedIncrement64((volatile signed __int64 *)v13);
  ExReleaseSpinLockSharedFromDpcLevel(&ExpLargePoolTableLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v33 = (v31 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v31;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  v19 = *a4;
  v20 = (unsigned int)*a2;
  if ( (_DWORD)v20 == PoolHitTag )
    __debugbreak();
  v21 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v21 = EtwTracePool(3618, v19, v20, BugCheckParameter2, v15);
  if ( (v19 & 0x20) != 0 )
  {
    v22 = ExpSessionPoolTrackTableMask;
    v23 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 896);
  }
  else
  {
    LODWORD(v21) = KeGetPcr()->Prcb.Number;
    v22 = PoolTrackTableMask;
    v23 = (__int64)*(&ExPoolTagTables + v21);
  }
  v24 = v22 & ((40543 * v20) ^ ((unsigned __int64)(40543 * v20) >> 32));
  do
  {
    while ( 1 )
    {
      v25 = v23 + 80LL * v24;
      if ( *(_DWORD *)v25 == (_DWORD)v20 )
      {
        ExpPoolTrackerReturnLimit((v19 & 1) == 0, v15);
        goto LABEL_16;
      }
      if ( *(_DWORD *)v25 )
        break;
      if ( (v19 & 0x20) != 0 )
        break;
      v27 = *(_DWORD *)(PoolTrackTable + 80LL * v24);
      if ( !v27 )
        break;
      *(_DWORD *)v25 = v27;
      v28 = *(_QWORD *)(PoolTrackTable + 80LL * v24 + 72);
      if ( v28 )
        *(_QWORD *)(v25 + 72) = v28;
    }
    v24 = v22 & (v24 + 1);
  }
  while ( v24 != (v22 & ((40543 * (int)v20) ^ ((unsigned __int64)(40543 * v20) >> 32))) );
  ExpRemovePoolTrackerExpansion((unsigned int)v20, v15, v19);
LABEL_16:
  if ( v17 )
  {
    v34 = (_BYTE *)(BugCheckParameter2 + v15 - (unsigned __int16)v18);
    if ( (_WORD)v18 )
    {
      do
      {
        if ( *v34 != v17 )
          KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, (ULONG_PTR)v34, v17);
        ++v34;
        ++v12;
      }
      while ( v12 < (unsigned __int16)v18 );
    }
  }
  return ExpFreePoolChecks(BugCheckParameter2, BugCheckParameter2);
}
