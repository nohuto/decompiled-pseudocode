/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406DA568
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x14065E9B8 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x140666648 (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtEnergyTrackerEnumSnapshotCallback(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  PopEtProcessSnapshotUpdate((unsigned int *)a2);
  *(_QWORD *)(a2 + 16) = 0LL;
  return 0LL;
}
