/*
 * XREFs of sub_1C00342BC @ 0x1C00342BC
 * Callers:
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

void __fastcall sub_1C00342BC(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // [rsp+28h] [rbp-20h]

  v4 = a2;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v9 = v4;
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x44u, (__int64)&unk_1C0062098, v9, a3);
  }
  sub_1C000FD80(a1, 512, 1346711863, 0LL, v4);
  v8 = sub_1C0016CA0(a1, v4);
  if ( v8 )
    sub_1C0007840(a1, v8, 17, a3, 0LL, 0, 0LL, 0LL);
  sub_1C00029EC(a1, a3, v4);
}
