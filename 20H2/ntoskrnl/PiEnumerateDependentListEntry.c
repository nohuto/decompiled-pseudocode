/*
 * XREFs of PiEnumerateDependentListEntry @ 0x1408A0328
 * Callers:
 *     PipAttemptDependentsStart @ 0x14073AB60 (PipAttemptDependentsStart.c)
 *     PipVisitDeviceObjectListEntry @ 0x1407402CC (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessDependencyRelations @ 0x140740610 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140742960 (PnpRequestDeviceRemovalWorker.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1407B12D0 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14050A9C8 (PiListEntryToDependencyEdge.c)
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
