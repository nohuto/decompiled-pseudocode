/*
 * XREFs of KiIpiSendPacket @ 0x14027AE48
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14022EEF0 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x14027AD04 (KeFlushProcessWriteBuffers.c)
 *     KeSynchronizeSecurityDomain @ 0x1402BC338 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x1402C247C (KeSynchronizeAddressPolicy.c)
 *     KeUpdateThreadTag @ 0x14036BF50 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x1403A4B20 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x14051B218 (KeFlushRsb.c)
 *     KiSynchronizeStibpPairing @ 0x14051B6D8 (KiSynchronizeStibpPairing.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AF390 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x14027AED0 (KiIpiSendRequest.c)
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
