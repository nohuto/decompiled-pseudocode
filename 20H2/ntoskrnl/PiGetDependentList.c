/*
 * XREFs of PiGetDependentList @ 0x14073AB9C
 * Callers:
 *     PipAttemptDependentsStart @ 0x14073AB60 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14073AD24 (PipNotifyDeviceDependencyList.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407402CC (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140740610 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140742960 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407B12D0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x1408A00A0 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1408A0B04 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PiGetDependentList(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
  else
    v1 = 0LL;
  if ( v1 )
    return (__int64 *)(v1 + 32);
  else
    return &PiDependencyNodeEmptyList;
}
