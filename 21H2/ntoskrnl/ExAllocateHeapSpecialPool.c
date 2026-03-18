/*
 * XREFs of ExAllocateHeapSpecialPool @ 0x140641F58
 * Callers:
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 * Callees:
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExGetHeapFromType @ 0x14021491C (ExGetHeapFromType.c)
 *     ExpPlFindLimitEntry @ 0x1402501E8 (ExpPlFindLimitEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlpHpSegAlloc @ 0x14034FED0 (RtlpHpSegAlloc.c)
 *     MiDeterminePoolType @ 0x140366FB0 (MiDeterminePoolType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 *     ExpTrackTableGetMoreLimit @ 0x14063BDD0 (ExpTrackTableGetMoreLimit.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 */

unsigned __int64 __fastcall ExAllocateHeapSpecialPool(int a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // edi
  __int64 v4; // r15
  int v6; // ecx
  unsigned __int8 CurrentIrql; // dl
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  char v10; // bl
  size_t v11; // rbp
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edi
  unsigned int v20; // r10d
  __int64 v21; // rbx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 LimitEntry; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int64 v35; // r9
  signed __int64 v36; // r14
  signed __int64 v37; // rdi
  unsigned __int64 MoreLimit; // rax
  unsigned __int64 v40; // [rsp+30h] [rbp-78h]
  __int64 v41; // [rsp+38h] [rbp-70h]
  __int64 v42; // [rsp+40h] [rbp-68h]
  __int64 HeapFromType; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+8h]
  int v46; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v4 = a3;
  v6 = a1 & 1;
  if ( !v6 && (_bittest(&ExpPoolFlags, 0xAu) & ((v3 & 0x200) == 0)) != 0 )
    v3 |= 0x200u;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v6 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v3, a2, 0x30uLL);
  HeapFromType = ExGetHeapFromType(v3, 0x80000000, 1);
  v8 = RtlpHpSegAlloc(HeapFromType + 320, 4096LL, 4096LL, 4096LL, 4u);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = MEMORY[0xFFFFF78000000320];
  memset((void *)(v8 + 16), MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  v11 = a2 - 8;
  if ( (v3 & 0x40) == 0 )
    v11 = a2;
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_DWORD *)v9 = v11;
  *(_BYTE *)(v9 + 2) = v10 | 1;
  *(_DWORD *)(v9 + 4) = v4;
  if ( (v3 & 0x40) != 0 )
    *(_DWORD *)v9 |= 0x4000u;
  v12 = (v9 - v11 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v3 & 0x400) != 0 )
    memset((void *)((v9 - v11 + 4096) & 0xFFFFFFFFFFFFFFF0uLL), 0, v11);
  v13 = MiDeterminePoolType(v9);
  v14 = 0;
  LockHandle.LockQueue = 0LL;
  if ( v13 != 32 )
    v14 = v13;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v40 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (_DWORD)v4 == PoolHitTag )
    __debugbreak();
  v15 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v14, v4, v9, (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v14 & 0x20) != 0 )
  {
    v16 = ExpSessionPoolTrackTableMask;
    v17 = ExpSessionPoolTrackTableSize;
    v18 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 896);
  }
  else
  {
    LODWORD(v15) = KeGetPcr()->Prcb.Number;
    v16 = PoolTrackTableMask;
    v17 = PoolTrackTableSize;
    v18 = (__int64)*(&ExPoolTagTables + v15);
  }
  v41 = v17;
  v46 = v16;
  v42 = v18;
  v19 = v16 & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
  v20 = v19;
  v45 = v19;
  while ( 1 )
  {
    v21 = v18 + 80LL * v19;
    if ( *(_DWORD *)v21 == (_DWORD)v4 )
      break;
    if ( *(_DWORD *)v21 )
    {
LABEL_43:
      v19 = v16 & (v19 + 1);
      if ( v19 == v20 )
      {
        ExpInsertPoolTrackerExpansion(v4, v40, v14);
        return v12;
      }
    }
    else
    {
      if ( (v14 & 0x20) != 0 )
        goto LABEL_30;
      v22 = *(_DWORD *)(PoolTrackTable + 80LL * v19);
      if ( v22 )
      {
        *(_DWORD *)v21 = v22;
        v16 = v46;
        v23 = *(_QWORD *)(PoolTrackTable + 80LL * v19 + 72);
        if ( v23 )
          *(_QWORD *)(v21 + 72) = v23;
      }
      else
      {
        v16 = v46;
LABEL_30:
        if ( v19 == v17 - 1 )
          goto LABEL_43;
        if ( (v14 & 0x20) != 0 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)v21, v4, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          v24 = PoolTrackTable;
          if ( !*(_DWORD *)(PoolTrackTable + 80LL * v19) )
          {
            LimitEntry = ExpPlFindLimitEntry(v4);
            *(_QWORD *)(v24 + 80LL * v19 + 72) = LimitEntry;
            *(_QWORD *)(v21 + 72) = LimitEntry;
            *(_DWORD *)(PoolTrackTable + 80LL * v19) = v4;
            *(_DWORD *)v21 = v4;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v27 = KeGetCurrentIrql();
              if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v31 = (v30 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v30;
                if ( v31 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          v16 = v46;
          v17 = v41;
          v18 = v42;
          v20 = v45;
        }
      }
    }
  }
  if ( (v14 & 1) != 0 )
  {
    v32 = 0;
    v33 = 40LL;
    v34 = 32LL;
  }
  else
  {
    v32 = 1;
    v33 = 16LL;
    v34 = 8LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)(v21 + v33), 1uLL);
  v35 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + v34), v40);
  if ( *(_QWORD *)(v21 + 72) )
  {
    v37 = *(_QWORD *)(v21 + 8LL * v32 + 56);
    while ( (v37 & 1) == 0 && v37 < v36 )
    {
      MoreLimit = ExpTrackTableGetMoreLimit(*(_QWORD *)(v21 + 72), v35, v32);
      if ( !MoreLimit )
      {
        ExpFreeHeapSpecialPool(HeapFromType, v12);
        return 0LL;
      }
      if ( MoreLimit == 1 )
      {
        if ( v37 == _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8LL * v32 + 56), 1LL, v37) )
          return v12;
        v37 = *(_QWORD *)(v21 + 8LL * v32 + 56);
      }
      else
      {
        v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8LL * v32 + 56), MoreLimit);
        v36 = *(_QWORD *)(v21 + v34);
      }
      v35 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
  }
  return v12;
}
