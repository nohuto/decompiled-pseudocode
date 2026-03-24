/*
 * XREFs of PopEtEnergyTrackerSnapshotProcesses @ 0x1408F2B98
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x14068E738 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PsEnumProcesses @ 0x1406CE06C (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerSnapshotProcesses(__int64 a1)
{
  return PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, a1);
}
