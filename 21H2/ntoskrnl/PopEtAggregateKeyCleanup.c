/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x140674F0C
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140674BE4 (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406A894C (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtAggregateGet @ 0x1407A50BC (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotUpdate @ 0x1407A5C98 (PopEtProcessSnapshotUpdate.c)
 *     PopEtEnergyTrackerCleanup @ 0x14099A23C (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140674FE4 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140675014 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = PopEtAppIdDereference();
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    a1[1] = 0LL;
  }
  return result;
}
