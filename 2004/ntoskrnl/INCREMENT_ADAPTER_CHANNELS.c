/*
 * XREFs of INCREMENT_ADAPTER_CHANNELS @ 0x1409C6F1C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409C75B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C7800 (VfAllocateAdapterChannelEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CBC50 (ViHalPreprocessOptions.c)
 */

void __fastcall INCREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx
  int v3; // ecx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 180));
  if ( *(_DWORD *)(a1 + 192) < 3u )
  {
    v3 = *(_DWORD *)(a1 + 184);
    if ( v2 != v3 + 1 )
    {
      ViHalPreprocessOptions(
        byte_140C12CB0,
        "Driver has allocated too many simultaneous adapter channels.",
        11LL,
        (unsigned int)(v2 - v3),
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0xBuLL, (unsigned int)(v2 - *(_DWORD *)(a1 + 184)), 0LL, 0LL, byte_140C12CB0);
    }
  }
}
