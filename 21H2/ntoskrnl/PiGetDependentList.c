/*
 * XREFs of PiGetDependentList @ 0x14074B534
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x140736788 (PnpRequestDeviceRemovalWorker.c)
 *     PipVisitDeviceObjectListEntry @ 0x14073758C (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x1407378D0 (PnpProcessDependencyRelations.c)
 *     PipAttemptDependentsStart @ 0x14074B4F8 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14074B6BC (PipNotifyDeviceDependencyList.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407B6460 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14089D7D0 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089E234 (PnpGetDeviceDependencyList.c)
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
