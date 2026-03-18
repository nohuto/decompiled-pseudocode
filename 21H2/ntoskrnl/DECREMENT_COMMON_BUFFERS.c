/*
 * XREFs of DECREMENT_COMMON_BUFFERS @ 0x140A83924
 * Callers:
 *     VfFreeCommonBuffer @ 0x140A85840 (VfFreeCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x140A895A4 (ViSpecialFreeCommonBuffer.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140A88948 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_COMMON_BUFFERS(__int64 a1)
{
  signed __int32 v2; // ebx
  unsigned int v3; // ecx
  unsigned __int32 v4; // ebx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v3 = *(_DWORD *)(a1 + 172);
  v4 = v2 + 1;
  if ( v4 > v3 )
  {
    ViHalPreprocessOptions(byte_140C0D914, "Freed too many common buffers.", 3LL, v4 - v3, 0LL, 0LL);
    VfReportIssueWithOptions(0xE6u, 3uLL, v4 - *(_DWORD *)(a1 + 172), 0LL, 0LL, byte_140C0D914);
  }
}
