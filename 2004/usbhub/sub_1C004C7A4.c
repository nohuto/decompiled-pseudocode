/*
 * XREFs of sub_1C004C7A4 @ 0x1C004C7A4
 * Callers:
 *     sub_1C0008BD0 @ 0x1C0008BD0 (sub_1C0008BD0.c)
 *     sub_1C004DB30 @ 0x1C004DB30 (sub_1C004DB30.c)
 *     sub_1C004DC20 @ 0x1C004DC20 (sub_1C004DC20.c)
 *     sub_1C004E120 @ 0x1C004E120 (sub_1C004E120.c)
 *     sub_1C004E210 @ 0x1C004E210 (sub_1C004E210.c)
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C003AA2C @ 0x1C003AA2C (sub_1C003AA2C.c)
 *     sub_1C004C6A0 @ 0x1C004C6A0 (sub_1C004C6A0.c)
 */

void __fastcall sub_1C004C7A4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  int v7; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0062100, v7);
  }
  sub_1C000FD80(a1, 1024, 1883525712, a2, *(unsigned __int16 *)(a2 + 4));
  sub_1C00361E8(a1);
  sub_1C0017FEC(a1, a2);
  sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  sub_1C004C6A0(a1, a3, a2, v6, 0LL);
  sub_1C003AA2C(a1, a3, 3, *(_QWORD *)(a2 + 376));
}
