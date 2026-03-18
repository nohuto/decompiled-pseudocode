/*
 * XREFs of KiIpiSendPacket @ 0x1402EA750
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140208B30 (KeQueryTotalCycleTimeThread.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     KeSynchronizeAddressPolicy @ 0x140320DA4 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14032E1A4 (KeSynchronizeSecurityDomain.c)
 *     KeUpdateThreadTag @ 0x14036BC30 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x1403A4260 (KeIpiGenericCall.c)
 *     KeFlushRsb @ 0x1405196D8 (KeFlushRsb.c)
 *     KiSynchronizeStibpPairing @ 0x140519CB8 (KiSynchronizeStibpPairing.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409B2490 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
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
