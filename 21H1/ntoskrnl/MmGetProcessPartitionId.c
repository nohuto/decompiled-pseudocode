/*
 * XREFs of MmGetProcessPartitionId @ 0x140203F14
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1405DA2D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x140765F88 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1409464DC (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
