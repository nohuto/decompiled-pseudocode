/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14050C4F8
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14074B4FC (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x1407CD600 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089D670 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14089D8F8 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14089D92C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14089DB48 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14089DD70 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14089E0D4 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
