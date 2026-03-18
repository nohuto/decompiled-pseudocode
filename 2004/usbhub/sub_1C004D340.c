/*
 * XREFs of sub_1C004D340 @ 0x1C004D340
 * Callers:
 *     sub_1C001BDDC @ 0x1C001BDDC (sub_1C001BDDC.c)
 *     sub_1C004D180 @ 0x1C004D180 (sub_1C004D180.c)
 *     sub_1C004D8C0 @ 0x1C004D8C0 (sub_1C004D8C0.c)
 * Callees:
 *     sub_1C00015A0 @ 0x1C00015A0 (sub_1C00015A0.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0018990 @ 0x1C0018990 (sub_1C0018990.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0034E5C @ 0x1C0034E5C (sub_1C0034E5C.c)
 *     sub_1C003AA2C @ 0x1C003AA2C (sub_1C003AA2C.c)
 *     sub_1C004C6A0 @ 0x1C004C6A0 (sub_1C004C6A0.c)
 *     sub_1C005A710 @ 0x1C005A710 (sub_1C005A710.c)
 */

__int64 __fastcall sub_1C004D340(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // r9
  int v9; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xDu, (__int64)&unk_1C0062100, v9);
  }
  sub_1C000FD80(a1, 1024, 1883523411, a2, *(unsigned __int16 *)(a2 + 4));
  v6 = sub_1C0011220(a3);
  sub_1C0018990(a1, a3, 2017740853, 1);
  sub_1C000FD80(a1, 1024, 1682457651, a3, 0LL);
  sub_1C00015A0(a1, a2);
  sub_1C0034E5C(a1, a2);
  if ( (v6[355] & 0x20000) == 0 )
    sub_1C005A710(a1, a3, 2LL);
  sub_1C004C6A0(a1, a3, a2, v7, 0LL);
  sub_1C003AA2C(a1, a3, 3, *(_QWORD *)(a2 + 376));
  return 0LL;
}
