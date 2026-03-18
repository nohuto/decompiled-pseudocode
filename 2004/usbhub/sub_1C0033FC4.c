/*
 * XREFs of sub_1C0033FC4 @ 0x1C0033FC4
 * Callers:
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 *     sub_1C0035284 @ 0x1C0035284 (sub_1C0035284.c)
 * Callees:
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 */

void __fastcall sub_1C0033FC4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+28h] [rbp-20h]

  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x43u, (__int64)&unk_1C0062098, v8, a3);
  }
  sub_1C000FD80(a1, 512, 1346712114, 0LL, *(unsigned __int16 *)(a2 + 4));
  sub_1C0007840(a1, a2, 22, a3, 0LL, 0, 0LL, 0LL);
  sub_1C00029EC(a1, a2 + 24, *(_WORD *)(a2 + 4));
}
