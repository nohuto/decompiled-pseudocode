/*
 * XREFs of ExAllocateHeapSpecialPool @ 0x1405B9FAC
 * Callers:
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     ExGetHeapFromType @ 0x14021720C (ExGetHeapFromType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeterminePoolType @ 0x140305AEC (MiDeterminePoolType.c)
 *     RtlpHpSegAlloc @ 0x1403145A0 (RtlpHpSegAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 */

unsigned __int64 __fastcall ExAllocateHeapSpecialPool(int a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // edi
  __int64 v4; // r15
  int v6; // ecx
  unsigned __int8 CurrentIrql; // dl
  __int64 HeapFromType; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  char v12; // bl
  size_t v13; // r14
  unsigned int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rax
  int v18; // edx
  int v19; // r9d
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned int v22; // edi
  unsigned int v23; // ecx
  __int64 v24; // rsi
  volatile signed __int32 *v25; // rbx
  int v26; // eax
  volatile signed __int32 v27; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  __int64 v34; // rax
  int v36; // [rsp+30h] [rbp-68h]
  __int64 v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+A0h] [rbp+8h]

  v3 = a1;
  v4 = a3;
  v6 = a1 & 1;
  if ( !v6 && (_bittest(&ExpPoolFlags, 0xAu) & ((v3 & 0x200) == 0)) != 0 )
    v3 |= 0x200u;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v6 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v3, a2, 0x30uLL);
  HeapFromType = ExGetHeapFromType(v3, 0x80000000, 1);
  v9 = RtlpHpSegAlloc(HeapFromType + 256, 0x1000uLL, 4096LL, 4096LL, 4u);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  v12 = MEMORY[0xFFFFF78000000320];
  memset((void *)(v9 + 16), MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  v13 = a2 - 8;
  if ( (v3 & 0x40) == 0 )
    v13 = a2;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_DWORD *)v10 = v13;
  *(_BYTE *)(v10 + 2) = v12 | 1;
  *(_DWORD *)(v10 + 4) = v4;
  if ( (v3 & 0x40) != 0 )
    *(_DWORD *)v10 |= 0x4000u;
  v11 = (v10 - v13 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v3 & 0x400) != 0 )
    memset((void *)((v10 - v13 + 4096) & 0xFFFFFFFFFFFFFFF0uLL), 0, v13);
  v14 = MiDeterminePoolType(v10);
  v15 = 0;
  LockHandle.LockQueue = 0LL;
  v16 = 8LL;
  if ( v14 != 32 )
    v15 = v14;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  if ( (_DWORD)v4 == PoolHitTag )
    __debugbreak();
  v17 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v15, v4, v10, v13);
  v18 = v15 & 0x20;
  if ( (v15 & 0x20) != 0 )
  {
    v21 = ExpSessionPoolTrackTable;
    v19 = ExpSessionPoolTrackTableMask;
    v20 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v17) = KeGetPcr()->Prcb.Number;
    v19 = PoolTrackTableMask;
    v20 = PoolTrackTableSize;
    v21 = (__int64)*(&ExPoolTagTables + v17);
  }
  v37 = v20;
  v36 = v19;
  v38 = v21;
  v22 = v19 & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
  v23 = v22;
  v40 = v22;
  while ( 1 )
  {
    v24 = 56LL * v22;
    v25 = (volatile signed __int32 *)(v24 + v21);
    v26 = *(_DWORD *)(v24 + v21);
    if ( v26 == (_DWORD)v4 )
      break;
    if ( v26 )
      goto LABEL_44;
    if ( !v18 )
    {
      v27 = *(_DWORD *)(v24 + PoolTrackTable);
      if ( v27 )
      {
        *v25 = v27;
        goto LABEL_29;
      }
      v23 = v40;
    }
    if ( v22 == v20 - 1 )
    {
LABEL_44:
      v22 = v19 & (v22 + 1);
      if ( v22 == v23 )
      {
        ExpInsertPoolTrackerExpansion(v4, v13, v15);
        return v11;
      }
    }
    else if ( v18 )
    {
      _InterlockedCompareExchange(v25, v4, 0);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      if ( !*(_DWORD *)(v24 + PoolTrackTable) )
      {
        *(_DWORD *)(v24 + PoolTrackTable) = v4;
        *v25 = v4;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v29 = KeGetCurrentIrql();
          if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v33 = (v32 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v32;
            if ( v33 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      v18 = v15 & 0x20;
      v19 = v36;
      v20 = v37;
      v21 = v38;
LABEL_29:
      v23 = v40;
    }
  }
  if ( (v15 & 1) != 0 )
  {
    v34 = 10LL;
  }
  else
  {
    v34 = 4LL;
    v16 = 2LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v25[v34]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v25[v16], v13);
  return v11;
}
