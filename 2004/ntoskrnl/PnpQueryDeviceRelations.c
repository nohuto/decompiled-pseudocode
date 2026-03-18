/*
 * XREFs of PnpQueryDeviceRelations @ 0x140729248
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140647510 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x140729138 (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x140731008 (PnpProcessRelation.c)
 *     PiQueryPowerRelations @ 0x140737F04 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x1408B0F7C (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x1402715F0 (PnpSendIrp.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall PnpQueryDeviceRelations(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r8
  _DWORD v10[20]; // [rsp+30h] [rbp-58h] BYREF

  memset(v10, 0, 0x48uLL);
  LOWORD(v10[0]) = 1819;
  v10[2] = a2;
  return PnpSendIrp(a1, (__int64)v10, v8, a3, a4);
}
