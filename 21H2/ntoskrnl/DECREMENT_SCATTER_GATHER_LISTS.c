/*
 * XREFs of DECREMENT_SCATTER_GATHER_LISTS @ 0x140A839B8
 * Callers:
 *     VfBuildScatterGatherList @ 0x140A84BC0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140A84F20 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140A85DA0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140A86160 (VfGetScatterGatherListEx.c)
 *     VfPutScatterGatherList @ 0x140A86C30 (VfPutScatterGatherList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_SCATTER_GATHER_LISTS(__int64 a1)
{
  int v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 168));
  if ( v2 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140C0D8F8,
      "Driver has freed too many scatter gather lists %x allocated, %x freed.",
      6,
      *(_DWORD *)(a1 + 164));
    VfReportIssueWithOptions(
      0xE6u,
      6uLL,
      *(unsigned int *)(a1 + 164),
      (unsigned int)(*(_DWORD *)(a1 + 164) - v2),
      0LL,
      byte_140C0D8F8);
  }
}
