/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1405F805C
 * Callers:
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1405EF2CC (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x1405F7D4C (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdate @ 0x140682D28 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x140683B08 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanup @ 0x1408F2B14 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x1405F8134 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1405F8164 (RtlInternEntryDereference.c)
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
