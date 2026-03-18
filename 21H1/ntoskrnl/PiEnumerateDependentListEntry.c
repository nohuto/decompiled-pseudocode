/*
 * XREFs of PiEnumerateDependentListEntry @ 0x1408994D8
 * Callers:
 *     PipAttemptDependentsStart @ 0x140730C24 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x140731F04 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140732248 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14075D0F8 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x14079DFC0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x140506A48 (PiListEntryToDependencyEdge.c)
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
