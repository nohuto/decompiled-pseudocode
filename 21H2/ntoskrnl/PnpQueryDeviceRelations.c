/*
 * XREFs of PnpQueryDeviceRelations @ 0x140746F38
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x1406E6038 (PiDcHandleCustomDeviceEvent.c)
 *     PnpProcessRelation @ 0x1407374AC (PnpProcessRelation.c)
 *     PipEnumerateDevice @ 0x140746E28 (PipEnumerateDevice.c)
 *     PiQueryPowerRelations @ 0x14074C3A4 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x1408B407C (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x140361DC8 (PnpSendIrp.c)
 *     memset @ 0x140414200 (memset.c)
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
