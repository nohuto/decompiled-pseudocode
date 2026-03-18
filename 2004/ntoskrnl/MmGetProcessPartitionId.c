/*
 * XREFs of MmGetProcessPartitionId @ 0x14027D224
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406605D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x140768370 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094777C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
