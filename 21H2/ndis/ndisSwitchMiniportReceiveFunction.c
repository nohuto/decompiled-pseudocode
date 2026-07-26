/*
 * XREFs of ndisSwitchMiniportReceiveFunction @ 0x1C00A4090
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0021224 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 * Callees:
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019CDC (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C00A2C78 (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisReceiveQueueingOff @ 0x1C00A3E68 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C00A3ED4 (ndisReceiveQueueingOn.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C00A4200 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisSwitchMiniportReceiveFunction(int a1)
{
  struct _NDIS_MINIPORT_BLOCK *i; // rbx
  __int64 v2; // rdx
  bool v3; // zf
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  struct _NDIS_MINIPORT_BLOCK *NextMiniportBlock; // rdi

  if ( a1 == 6 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisMiniportListLock);
    for ( i = ndisMiniportList; i; i = i->NextGlobalMiniport )
    {
      if ( !MiniportSupportsReceiveThrottle(i) )
      {
        KeAcquireSpinLockAtDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
        v3 = i->MediaType == NdisMedium802_3;
        i->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        if ( v3 && i->PeriodicReceiveQueue.BoundToIP && i->PeriodicReceiveQueue.State == PeriodicReceivesOff )
          ndisReceiveQueueingOn((__int64)i, v2);
        i->PeriodicReceiveQueue.LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&i->PeriodicReceiveQueue.SpinLock);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&ndisMiniportListLock);
  }
  else
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)qword_1C00E40D8;
    qword_1C00E40D8 = 0LL;
    if ( v4 )
    {
      do
      {
        NextMiniportBlock = v4->PeriodicReceiveQueue.NextMiniportBlock;
        KeAcquireSpinLockAtDpcLevel(&v4->PeriodicReceiveQueue.SpinLock);
        v4->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
        ndisReceiveQueueingOff((__int64)v4);
        ndisEmptyPeriodicReceivesQueue(v4, 0);
        v4->PeriodicReceiveQueue.NextMiniportBlock = 0LL;
        v4->PeriodicReceiveQueue.LockThread = 0LL;
        KeReleaseSpinLockFromDpcLevel(&v4->PeriodicReceiveQueue.SpinLock);
        v4 = NextMiniportBlock;
      }
      while ( NextMiniportBlock );
    }
    if ( BYTE2(dword_1C00E6150) )
      ndisTracePeriodicRcvOnOff(0LL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
