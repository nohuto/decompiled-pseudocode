/*
 * XREFs of KiIpiSendPacket @ 0x1402FD120
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140296BE0 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1402FCFDC (KeFlushProcessWriteBuffers.c)
 *     KeSynchronizeAddressPolicy @ 0x1402FDE9C (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x140349FA8 (KeSynchronizeSecurityDomain.c)
 *     KeUpdateThreadTag @ 0x140369C50 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x1403A1D90 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x140515DA8 (KeFlushRsb.c)
 *     KiSynchronizeStibpPairing @ 0x140516338 (KiSynchronizeStibpPairing.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AC520 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1402FD180 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  v7[1] = a5;
  v7[3] = a3;
  v7[0] = a4;
  v7[2] = a6;
  return KiIpiSendRequest((unsigned int)KeGetCurrentPrcb(), a1, a2, (unsigned int)v7, 5LL);
}
