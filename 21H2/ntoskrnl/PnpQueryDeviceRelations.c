/*
 * XREFs of PnpQueryDeviceRelations @ 0x1407470F8
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x1406FD420 (PiDcHandleCustomDeviceEvent.c)
 *     PnpProcessRelation @ 0x14073766C (PnpProcessRelation.c)
 *     PipEnumerateDevice @ 0x140746FE8 (PipEnumerateDevice.c)
 *     PiQueryPowerRelations @ 0x14074C564 (PiQueryPowerRelations.c)
 *     PiQueryDeviceRelations @ 0x1408B41DC (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x1402F7490 (PnpSendIrp.c)
 *     memset @ 0x140414300 (memset.c)
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
