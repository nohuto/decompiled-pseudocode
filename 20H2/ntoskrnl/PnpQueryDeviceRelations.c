/*
 * XREFs of PnpQueryDeviceRelations @ 0x140737CD8
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140648B00 (PiDcHandleCustomDeviceEvent.c)
 *     PipEnumerateDevice @ 0x140737BC8 (PipEnumerateDevice.c)
 *     PiQueryPowerRelations @ 0x14073CAE4 (PiQueryPowerRelations.c)
 *     PnpProcessRelation @ 0x1407403AC (PnpProcessRelation.c)
 *     PiQueryDeviceRelations @ 0x1408B6AAC (PiQueryDeviceRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x140204550 (PnpSendIrp.c)
 *     memset @ 0x140411300 (memset.c)
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
