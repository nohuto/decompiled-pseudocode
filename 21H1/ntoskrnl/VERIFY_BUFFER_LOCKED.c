/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x1409C7040
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409C7FE0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409C8340 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1409C90D0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409C9490 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409C9850 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409C9A10 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x1409C2CB0 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x1409CBC40 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked((_DWORD *)a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_140C12C88, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140C12C88);
  }
}
