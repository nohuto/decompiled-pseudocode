/*
 * XREFs of KiIpiSendPacket @ 0x1402F38C4
 * Callers:
 *     KeSynchronizeAddressPolicy @ 0x14024AC78 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x140255E2C (KeSynchronizeSecurityDomain.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     KiSynchronizeStibpPairing @ 0x14045A748 (KiSynchronizeStibpPairing.c)
 *     KeFlushRsb @ 0x140570F88 (KeFlushRsb.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A69470 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
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
