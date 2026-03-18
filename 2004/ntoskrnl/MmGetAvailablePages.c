/*
 * XREFs of MmGetAvailablePages @ 0x14027D234
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406605D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x14094777C (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * a1) + 7104LL);
}
