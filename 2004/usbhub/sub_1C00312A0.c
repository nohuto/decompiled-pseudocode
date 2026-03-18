/*
 * XREFs of sub_1C00312A0 @ 0x1C00312A0
 * Callers:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C0003180 @ 0x1C0003180 (sub_1C0003180.c)
 *     sub_1C0059910 @ 0x1C0059910 (sub_1C0059910.c)
 *     sub_1C0059A30 @ 0x1C0059A30 (sub_1C0059A30.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

void __fastcall sub_1C00312A0(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rdx
  _QWORD *v10; // r10

  v4 = (volatile signed __int64 *)sub_1C000F050(a1);
  v5 = sub_1C0004060(a1, a2, a1, 1430418291, 1);
  sub_1C000FD80(a1, 2048, 1114863915, _InterlockedCompareExchange64(v4 + 411, v5, 0LL), v5);
  if ( v6 )
  {
    sub_1C000FD80(a1, v8, 1114845741, v6, v7);
    sub_1C0003610(a1, v9, v10);
  }
}
