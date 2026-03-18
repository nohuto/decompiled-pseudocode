/*
 * XREFs of KiIpiSendPacket @ 0x140359100
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14025A360 (KeQueryTotalCycleTimeThread.c)
 *     KeSynchronizeAddressPolicy @ 0x1402C13BC (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14030CD8C (KeSynchronizeSecurityDomain.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     KeUpdateThreadTag @ 0x140369290 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x1403A1600 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x140515758 (KeFlushRsb.c)
 *     KiSynchronizeStibpPairing @ 0x140515CE8 (KiSynchronizeStibpPairing.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AB6C0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140359160 (KiIpiSendRequest.c)
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
