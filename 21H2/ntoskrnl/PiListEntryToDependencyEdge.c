/*
 * XREFs of PiListEntryToDependencyEdge @ 0x14055F84C
 * Callers:
 *     PipNotifyDeviceDependencyList @ 0x14076BB84 (PipNotifyDeviceDependencyList.c)
 *     PipDeleteAllDependencyRelations @ 0x14085C97C (PipDeleteAllDependencyRelations.c)
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 *     PiEnumerateDependentListEntry @ 0x1409426FC (PiEnumerateDependentListEntry.c)
 *     PiEnumerateProviderListEntry @ 0x140942730 (PiEnumerateProviderListEntry.c)
 *     PipCheckValidNewDependencyEdge @ 0x140942948 (PipCheckValidNewDependencyEdge.c)
 *     PipMergeDependencyEdgeList @ 0x140942B68 (PipMergeDependencyEdgeList.c)
 *     PnpGetDeviceDependencyList @ 0x140942E94 (PnpGetDeviceDependencyList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiListEntryToDependencyEdge(__int64 a1, int a2)
{
  if ( a2 )
    a1 -= 16LL;
  return a1;
}
