/*
 * XREFs of ADD_MAP_REGISTERS @ 0x1409C6BB0
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1409C75B0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1409C7800 (VfAllocateAdapterChannelEx.c)
 *     VfAllocateCrashDumpRegisters @ 0x1409C7D80 (VfAllocateCrashDumpRegisters.c)
 *     VfHalAllocateMapRegisters @ 0x1409C9630 (VfHalAllocateMapRegisters.c)
 *     ViScatterGatherCallback @ 0x1409CC680 (ViScatterGatherCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x1409CBC50 (ViHalPreprocessOptions.c)
 */

void __fastcall ADD_MAP_REGISTERS(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int32 v5; // esi

  v5 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), a2);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 156), a2);
  if ( a2 > *(_DWORD *)(a1 + 152) )
  {
    ViHalPreprocessOptions(byte_140C12CC4, "Allocating too many map registers at a time: %x (max %x).", 12, a2);
    VfReportIssueWithOptions(0xE6u, 0xCuLL, a2, *(unsigned int *)(a1 + 152), 0LL, byte_140C12CC4);
  }
  if ( !a3 && v5 > *(_DWORD *)(a1 + 152) )
  {
    ViHalPreprocessOptions(byte_140C12CC8, "Allocated too many map registers : %x (max %x).", 21, v5);
    VfReportIssueWithOptions(0xE6u, 0x15uLL, v5, *(unsigned int *)(a1 + 152), 0LL, byte_140C12CC8);
  }
}
