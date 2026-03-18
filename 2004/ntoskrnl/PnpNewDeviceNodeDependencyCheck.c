/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x14072C22C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1406A5DF4 (PnpAcquireDependencyRelationsLock.c)
 *     PipNotifyDeviceDependencyList @ 0x14072C294 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14072C304 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14072C44C (PnpReleaseDependencyRelationsLock.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14072C470 (PipAddtoRebuildPowerRelationsQueue.c)
 */

void __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  PnpAcquireDependencyRelationsLock(1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(a1 + 32));
  PnpReleaseDependencyRelationsLock();
  PipProcessRebuildPowerRelationsQueue();
  PiPnpRtlBeginOperation(&P);
  PipNotifyDeviceDependencyList(a1, 0LL);
  PipNotifyDeviceDependencyList(a1, 1LL);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
}
