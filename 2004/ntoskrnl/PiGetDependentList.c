/*
 * XREFs of PiGetDependentList @ 0x14072C10C
 * Callers:
 *     PipAttemptDependentsStart @ 0x14072C0D0 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x14072C294 (PipNotifyDeviceDependencyList.c)
 *     PipVisitDeviceObjectListEntry @ 0x140730F28 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14073126C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407334D0 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407A1FA0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x14089A570 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x14089AFD4 (PnpGetDeviceDependencyList.c)
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
