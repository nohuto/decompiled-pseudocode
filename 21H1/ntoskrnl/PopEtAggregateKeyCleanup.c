/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1405F2088
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1405F0DC8 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1405F1BA8 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406BEB38 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D456C (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerCleanup @ 0x1408EE2D4 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x1405F2160 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1405F2190 (RtlInternEntryDereference.c)
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
