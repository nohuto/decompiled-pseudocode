/*
 * XREFs of PiGetDependentList @ 0x140730C60
 * Callers:
 *     PipAttemptDependentsStart @ 0x140730C24 (PipAttemptDependentsStart.c)
 *     PipNotifyDeviceDependencyList @ 0x140730DE8 (PipNotifyDeviceDependencyList.c)
 *     PipVisitDeviceObjectListEntry @ 0x140731F04 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140732248 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14075D0F8 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14079DFC0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     IoDuplicateDependency @ 0x140899250 (IoDuplicateDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140899CB4 (PnpGetDeviceDependencyList.c)
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
