/*
 * XREFs of MmGetProcessPartitionId @ 0x140269580
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x14063B5F0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x14077AAF0 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094AEDC (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
