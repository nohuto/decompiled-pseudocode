/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x1409C9CD0
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409CA5C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409CA810 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1409CB590 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409CB950 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409CBA00 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x1409CD1A0 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A1DF4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CEC60 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_140C12E98, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 180), 0LL, 0LL, byte_140C12E98);
  }
}
