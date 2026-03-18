/*
 * XREFs of PopEtEnergyTrackerSnapshotProcesses @ 0x1408EF7A8
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x14064BCCC (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     PsEnumProcesses @ 0x140698064 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerSnapshotProcesses(__int64 a1)
{
  return PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, a1);
}
