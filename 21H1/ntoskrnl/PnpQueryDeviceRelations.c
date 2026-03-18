/*
 * XREFs of PnpQueryDeviceRelations @ 0x14072C5C8
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140684F18 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x14072C4B8 (PipEnumerateDevice.c)
 *     PiQueryPowerRelations @ 0x140731720 (PiQueryPowerRelations.c)
 *     PnpProcessRelation @ 0x140731FE4 (PnpProcessRelation.c)
 *     PiQueryDeviceRelations @ 0x1408AFC5C (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x1402E0C80 (PnpSendIrp.c)
 *     memset @ 0x140408F80 (memset.c)
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
