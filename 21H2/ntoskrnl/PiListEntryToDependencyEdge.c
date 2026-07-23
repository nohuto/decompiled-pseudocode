/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14050C738
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14074B6BC (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x1407CD770 (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x14089D7D0 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x14089DA58 (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x14089DA8C (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x14089DCA8 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x14089DED0 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x14089E234 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
