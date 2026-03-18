/*
 * XREFs of MmGetTotalCommittedPages @ 0x14026A07C
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406F2420 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommittedPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * a1) + 17256LL);
}
