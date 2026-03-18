/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406E408C
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x14065E740 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x1405F0DC8 (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtEnergyTrackerEnumSnapshotCallback(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  PopEtProcessSnapshotUpdate((unsigned int *)a2);
  *(_QWORD *)(a2 + 16) = 0LL;
  return 0LL;
}
