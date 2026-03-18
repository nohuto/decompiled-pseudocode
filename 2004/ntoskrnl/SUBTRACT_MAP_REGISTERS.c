/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x1409C6FBC
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14059BBF8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1409C75B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C7800 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1409C8580 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409C8940 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409C89F0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409C8CE0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x1409C9F20 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CA190 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CBC50 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C12CB8, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C12CB8);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
