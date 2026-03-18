/*
 * XREFs of PiEnumerateDependentListEntry @ 0x1409426FC
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x140765370 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x140767CF8 (PnpProcessDependencyRelations.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407682A8 (PipVisitDeviceObjectListEntry.c)
 *     PipAttemptDependentsStart @ 0x14076ACA8 (PipAttemptDependentsStart.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1408442B0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14055F84C (PiListEntryToDependencyEdge.c)
 */

__int64 __fastcall PiEnumerateDependentListEntry(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // r8
  _QWORD *v3; // r10

  result = PiListEntryToDependencyEdge(a1, 1);
  *v3 = *(_QWORD *)(*(_QWORD *)(result + 40) + 48LL);
  if ( v2 )
  {
    result = *(unsigned int *)(result + 48);
    *v2 = result;
  }
  return result;
}
