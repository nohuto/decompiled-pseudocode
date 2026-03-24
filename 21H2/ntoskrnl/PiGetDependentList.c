/*
 * XREFs of PiGetDependentList @ 0x14074B374
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x1407365C8 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407373CC (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140737710 (PnpProcessDependencyRelations.c)
 *     PipAttemptDependentsStart @ 0x14074B338 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14074B4FC (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407B4B40 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14089D670 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089E0D4 (PnpGetDeviceDependencyList.c)
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
