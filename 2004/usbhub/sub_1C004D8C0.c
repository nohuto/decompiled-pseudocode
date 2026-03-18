/*
 * XREFs of sub_1C004D8C0 @ 0x1C004D8C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C00169C4 @ 0x1C00169C4 (sub_1C00169C4.c)
 *     sub_1C0017FEC @ 0x1C0017FEC (sub_1C0017FEC.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C004D340 @ 0x1C004D340 (sub_1C004D340.c)
 */

__int64 __fastcall sub_1C004D8C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // [rsp+28h] [rbp-30h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(
      (__int64)DeviceObject->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&unk_1C0062100,
      *(unsigned __int16 *)(a2 + 4));
  sub_1C000FD80(a1, 1024, 1883393603, a2, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    LODWORD(v7) = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x13u, (__int64)&unk_1C0062100, v7);
  }
  sub_1C00361E8(a1);
  if ( (*(_DWORD *)(a2 + 2408) & 1) == 0 )
    return 1LL;
  sub_1C000FD80(a1, 1024, 1852785730, a2, *(unsigned __int16 *)(a2 + 4));
  sub_1C0013AE0(a1, a2, 1);
  sub_1C001518C(a1, a3, -1073741823);
  sub_1C0017FEC(a1, a2);
  sub_1C00029EC(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  sub_1C004D340(a1, a2, a3);
  sub_1C00169C4(a1, *(_WORD *)(a2 + 4), 1LL, *(_QWORD *)(a2 + 376));
  return 0LL;
}
