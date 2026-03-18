/*
 * XREFs of PiEnumerateDependentListEntry @ 0x14089A7F8
 * Callers:
 *     PipAttemptDependentsStart @ 0x14072C0D0 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x140730F28 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x14073126C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407334D0 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407A1FA0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140507098 (PiListEntryToDependencyEdge.c)
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
