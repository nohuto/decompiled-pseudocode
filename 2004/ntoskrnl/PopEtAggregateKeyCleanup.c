/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x14069BBEC
 * Callers:
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14064CCDC (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotUpdate @ 0x14069A2D8 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x14069B0B8 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406F735C (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerCleanup @ 0x1408EF5C4 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x14069BCC4 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x14069BCF4 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax

  v5 = *a1;
  if ( v5 )
  {
    result = PopEtAppIdDereference(v5, a2, a3, a4);
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    a1[1] = 0LL;
  }
  return result;
}
