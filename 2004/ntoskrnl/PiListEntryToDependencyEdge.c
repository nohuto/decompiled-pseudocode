/*
 * XREFs of PiListEntryToDependencyEdge @ 0x140507098
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14072C294 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x1407BAAB0 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089A570 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14089A7F8 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14089A82C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14089AA48 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14089AC70 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14089AFD4 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
