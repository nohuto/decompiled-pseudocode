/*
 * XREFs of KiIpiSendPacket @ 0x140268DE8
 * Callers:
 *     KeSynchronizeSecurityDomain @ 0x14023A8C4 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x14024091C (KeSynchronizeAddressPolicy.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402D3740 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x14036C100 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x1403A4C70 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x14051B458 (KeFlushRsb.c)
 *     KiSynchronizeStibpPairing @ 0x14051B918 (KiSynchronizeStibpPairing.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409B02C0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
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
