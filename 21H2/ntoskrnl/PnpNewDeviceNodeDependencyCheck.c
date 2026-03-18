/*
 * XREFs of PnpNewDeviceNodeDependencyCheck @ 0x14076BB10
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PipNotifyDeviceDependencyList @ 0x14076BB84 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x14076BC20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x14076BD4C (PipAddtoRebuildPowerRelationsQueue.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1407756F4 (PnpAcquireDependencyRelationsLock.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 */

__int64 __fastcall PnpNewDeviceNodeDependencyCheck(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = a1;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  PipAddtoRebuildPowerRelationsQueue(*(_QWORD *)(v1 + 32));
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0LL);
  PipProcessRebuildPowerRelationsQueue();
  PiPnpRtlBeginOperation(&P);
  PipNotifyDeviceDependencyList(v1, 0LL);
  result = PipNotifyDeviceDependencyList(v1, 1LL);
  if ( P )
    return PiPnpRtlEndOperation(P);
  return result;
}
