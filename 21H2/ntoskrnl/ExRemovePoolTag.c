/*
 * XREFs of ExRemovePoolTag @ 0x1402187A8
 * Callers:
 *     MmFreeContiguousMemory @ 0x140217BE0 (MmFreeContiguousMemory.c)
 * Callees:
 *     ExpFreePoolChecks @ 0x14021898C (ExpFreePoolChecks.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1402361C0 (ExpRemovePoolTrackerExpansion.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 */

__int64 __fastcall ExRemovePoolTag(ULONG_PTR BugCheckParameter2, _DWORD *a2, __int64 *a3, int a4)
{
  ULONG_PTR v4; // r12
  KIRQL v8; // al
  int v9; // r9d
  unsigned __int64 v10; // r13
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  unsigned __int8 v16; // r14
  int v17; // r15d
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // r10d
  __int64 v22; // r13
  unsigned int v23; // edx
  __int64 v24; // r11
  _DWORD *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v31; // eax
  _DWORD *SchedulerAssist; // r8
  bool v33; // zf
  int v34; // r11d
  _BYTE *v35; // r9
  int v37; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v37 = a4 & 1;
  v8 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
  v9 = 1;
  v10 = v8;
  v11 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                       * (BugCheckParameter2 >> 12))) & (PoolBigPageTableSize - 1);
  v12 = 0;
  while ( *(_QWORD *)(PoolBigPageTable + 24LL * v11) != BugCheckParameter2 )
  {
    if ( ++v11 >= (unsigned __int64)PoolBigPageTableSize )
    {
      if ( !v9 )
        goto LABEL_23;
      v11 = 0;
      v9 = 0;
    }
  }
  v13 = PoolBigPageTable + 24LL * v11;
  if ( !v13 )
LABEL_23:
    KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v4, 0LL);
  v14 = *(_DWORD *)(v13 + 8);
  *a2 = v14;
  v15 = *(_QWORD *)(v13 + 16);
  *a3 = v15;
  if ( v14 == 1819242320 )
  {
    v16 = 0;
    LOWORD(v17) = 0;
  }
  else
  {
    v16 = *(_BYTE *)(v13 + 12);
    v17 = *(_DWORD *)(v13 + 12) >> 20;
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
  v18 = (unsigned int)*a2;
  if ( (_DWORD)v18 == PoolHitTag )
    __debugbreak();
  v19 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v19 = EtwTracePool(3618, v4, v18, BugCheckParameter2, v15);
  v20 = 8LL;
  if ( (v4 & 0x20) != 0 )
  {
    v22 = ExpSessionPoolTrackTable;
    v21 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    LODWORD(v19) = KeGetPcr()->Prcb.Number;
    v21 = PoolTrackTableMask;
    v22 = (__int64)*(&ExPoolTagTables + v19);
  }
  v23 = v21 & ((40543 * v18) ^ ((unsigned __int64)(40543 * v18) >> 32));
  while ( 1 )
  {
    v24 = 56LL * v23;
    v25 = (_DWORD *)(v24 + v22);
    v26 = *(_DWORD *)(v24 + v22);
    if ( v26 == (_DWORD)v18 )
      break;
    if ( v26 || (v4 & 0x20) != 0 || (v34 = *(_DWORD *)(v24 + PoolTrackTable)) == 0 )
    {
      v23 = v21 & (v23 + 1);
      if ( v23 == (v21 & ((40543 * (int)v18) ^ ((unsigned __int64)(40543 * v18) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion((unsigned int)v18, v15, (unsigned int)v4);
        goto LABEL_18;
      }
    }
    else
    {
      *v25 = v34;
    }
  }
  if ( v37 )
  {
    v27 = 12LL;
  }
  else
  {
    v27 = 6LL;
    v20 = 2LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v25[v27]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v25[v20], -v15);
LABEL_18:
  if ( v16 )
  {
    v35 = (_BYTE *)(BugCheckParameter2 + v15 - (unsigned __int16)v17);
    if ( (_WORD)v17 )
    {
      do
      {
        if ( *v35 != v16 )
          KeBugCheckEx(0xC2u, 0x62uLL, BugCheckParameter2, (ULONG_PTR)v35, v16);
        ++v35;
        ++v12;
      }
      while ( v12 < (unsigned __int16)v17 );
    }
  }
  return ExpFreePoolChecks(BugCheckParameter2);
}
