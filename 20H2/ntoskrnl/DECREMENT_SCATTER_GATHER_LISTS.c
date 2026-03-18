/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x1409CCE10
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409CE010 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CE370 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1409CF100 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CF4C0 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x1409CFF40 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A03C4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409D1C70 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140C12CA8,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 164),
      (unsigned int)(*(_DWORD *)(a1 + 164) - v2),
      0LL,
      byte_140C12CA8);
  }
}
