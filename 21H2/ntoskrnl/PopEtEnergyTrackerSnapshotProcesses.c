/*
 * XREFs of PopEtEnergyTrackerSnapshotProcesses @ 0x1408F2CF8
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x1405EE5A8 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PsEnumProcesses @ 0x1406A5350 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerSnapshotProcesses(__int64 a1)
{
  return PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, a1);
}
