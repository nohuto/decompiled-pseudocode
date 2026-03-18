/*
 * XREFs of sub_1C00023E0 @ 0x1C00023E0
 * Callers:
 *     sub_1C0006460 @ 0x1C0006460 (sub_1C0006460.c)
 *     sub_1C001C7A8 @ 0x1C001C7A8 (sub_1C001C7A8.c)
 *     sub_1C00340A0 @ 0x1C00340A0 (sub_1C00340A0.c)
 *     sub_1C004C428 @ 0x1C004C428 (sub_1C004C428.c)
 *     sub_1C004C954 @ 0x1C004C954 (sub_1C004C954.c)
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0013AE0 @ 0x1C0013AE0 (sub_1C0013AE0.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C00361E8 @ 0x1C00361E8 (sub_1C00361E8.c)
 *     sub_1C003A2BC @ 0x1C003A2BC (sub_1C003A2BC.c)
 *     sub_1C004C6A0 @ 0x1C004C6A0 (sub_1C004C6A0.c)
 */

__int64 __fastcall sub_1C00023E0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v9; // r9d

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 42, (__int64)&unk_1C0062100, *(_WORD *)(a3 + 4));
  sub_1C000FD80(a1, 1024, 1668826446, a3, 0LL);
  if ( a2 - 1 > 1 )
    return a2;
  sub_1C000F050(a1);
  sub_1C0013AE0(a1, a3, 1LL);
  sub_1C00361E8(a1);
  sub_1C00029EC(a1, *(_QWORD *)(a3 + 376), *(unsigned __int16 *)(a3 + 4));
  sub_1C004C6A0(a1, a4, a3, v9, 0LL);
  sub_1C003A2BC(a1, a4, a3, *(_QWORD *)(a3 + 376));
  return 4LL;
}
