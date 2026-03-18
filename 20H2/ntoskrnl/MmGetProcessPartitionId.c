/*
 * XREFs of MmGetProcessPartitionId @ 0x14023EAA4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406358D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQueryChannelInformation @ 0x140776978 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094D53C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
