/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x1409C7050
 * Callers:
 *     VfBuildScatterGatherList @ 0x1409C7FF0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1409C8350 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x1409C90E0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1409C94A0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1409C9860 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409C9A20 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x1409C2CC0 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x1409CBC50 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked((_DWORD *)a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_140C12CA4, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140C12CA4);
  }
}
