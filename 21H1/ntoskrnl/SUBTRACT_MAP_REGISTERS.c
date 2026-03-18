/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x1409C6FAC
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14059B508 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x1409C75A0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C77F0 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1409C8570 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1409C8930 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1409C89E0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409C8CD0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x1409C9F10 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1409CA180 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CBC40 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140C12C9C, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140C12C9C);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
