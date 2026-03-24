/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x14069936C
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1406190C8 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x140619EA8 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14068F45C (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x14069905C (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerCleanup @ 0x1408F29B4 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140699444 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140699474 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx

  v5 = *a1;
  if ( v5 )
  {
    result = PopEtAppIdDereference(v5, a2, a3, a4);
    *a1 = 0LL;
  }
  v7 = a1[1];
  if ( v7 )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56, v7);
    a1[1] = 0LL;
  }
  return result;
}
