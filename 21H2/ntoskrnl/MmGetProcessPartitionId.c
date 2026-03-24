/*
 * XREFs of MmGetProcessPartitionId @ 0x14027B5E0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140646800 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x14077A930 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094AD0C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
