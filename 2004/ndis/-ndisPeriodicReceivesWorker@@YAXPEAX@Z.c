/*
 * XREFs of ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A3AB0
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005910 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C00059D0 (NdisReleaseRWLock.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A2644 (ndisDoPeriodicReceivesIndication.c)
 *     ndisGetMiniportIndicateList @ 0x1C00A2CDC (ndisGetMiniportIndicateList.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00A3BA8 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ndisQueuePeriodicReceivesWorkItem @ 0x1C00A3C24 (ndisQueuePeriodicReceivesWorkItem.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C00A4140 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C00A4228 (ndisTracePeriodicReceivesStart.c)
 */

void __fastcall ndisPeriodicReceivesWorker(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // si
  __int64 v3; // r8
  __int64 Clock; // rdi
  struct _NET_BUFFER_LIST *MiniportIndicateList; // rax
  unsigned int v6; // ebp
  __int64 v7; // r8
  __int64 v8; // rax
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( BYTE1(dword_1C00E6180) )
  {
    v2 = 1;
    ndisTracePeriodicReceivesStart(a1);
    Clock = WmiGetClock(0LL, 0LL, v3);
  }
  else
  {
    Clock = 0LL;
    v2 = 0;
  }
  NdisAcquireRWLockRead(Lock, &LockState, 1u);
  MiniportIndicateList = ndisGetMiniportIndicateList(a1);
  v6 = ndisDoPeriodicReceivesIndication(a1, MiniportIndicateList);
  NdisReleaseRWLock(Lock, &LockState);
  if ( v2 )
  {
    v8 = WmiGetClock(0LL, 0LL, v7);
    ndisTracePeriodicReceivesEnd(a1, v8 - Clock, v6);
  }
  a1->PeriodicReceiveQueue.WorkItemQueued = 0;
  _InterlockedOr(v9, 0);
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    ndisQueuePeriodicReceivesWorkItem(a1);
    ndisQueuePeriodicReceivesTimer();
  }
  ndisDereferenceMiniport(a1, 0x4Cu);
}
