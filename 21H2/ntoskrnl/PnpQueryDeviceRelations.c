/*
 * XREFs of PnpQueryDeviceRelations @ 0x14074C534
 * Callers:
 *     PiQueryDeviceRelations @ 0x1406E397C (PiQueryDeviceRelations.c)
 *     PipEnumerateDevice @ 0x14074B420 (PipEnumerateDevice.c)
 *     PnpProcessRelation @ 0x140767AEC (PnpProcessRelation.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14078C2F8 (PiDcHandleCustomDeviceEvent.c)
 *     PiQueryPowerRelations @ 0x14080DBCC (PiQueryPowerRelations.c)
 * Callees:
 *     PnpSendIrp @ 0x1402D2F74 (PnpSendIrp.c)
 *     memset @ 0x140435E00 (memset.c)
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
