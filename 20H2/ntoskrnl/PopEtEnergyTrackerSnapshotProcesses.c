/*
 * XREFs of PopEtEnergyTrackerSnapshotProcesses @ 0x1408F53B8
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1406B5E14 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PsEnumProcesses @ 0x140659378 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerSnapshotProcesses(__int64 a1)
{
  return PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, a1);
}
