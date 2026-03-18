/*
 * XREFs of MmGetProcessPartitionId @ 0x14026A0BC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406F2420 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x1409F68DC (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1409F7090 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
