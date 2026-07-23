/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x1409CAE00
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409CC000 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409CC360 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1409CD0F0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409CD4B0 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x1409CDF30 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CFC60 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140C12E90,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 164),
      (unsigned int)(*(_DWORD *)(a1 + 164) - v2),
      0LL,
      byte_140C12E90);
  }
}
