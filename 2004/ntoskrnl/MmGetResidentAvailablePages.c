/*
 * XREFs of MmGetResidentAvailablePages @ 0x14027D374
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406605D0 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetResidentAvailablePages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * a1) + 7168LL);
}
