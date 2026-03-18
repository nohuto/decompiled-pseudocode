/*
 * XREFs of PiListEntryToDependencyEdge @ 0x140506A48
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x140730DE8 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x1407B7940 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140899250 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x1408994D8 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14089950C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140899728 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x140899950 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x140899CB4 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
