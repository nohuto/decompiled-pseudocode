/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14050A9C8
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14073AD24 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x1407C9340 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x1408A00A0 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x1408A0328 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x1408A035C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x1408A0578 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x1408A07A0 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x1408A0B04 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
