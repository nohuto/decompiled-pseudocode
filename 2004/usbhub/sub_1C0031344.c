/*
 * XREFs of sub_1C0031344 @ 0x1C0031344
 * Callers:
 *     sub_1C0059A30 @ 0x1C0059A30 (sub_1C0059A30.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

LONG __fastcall sub_1C0031344(__int64 a1)
{
  volatile __int64 *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r10

  v2 = (volatile __int64 *)sub_1C000F050(a1);
  sub_1C000FD80(a1, 2048, 1114863917, 0LL, _InterlockedExchange64(v2 + 411, 0LL));
  return sub_1C0003610(a1, v3, v4);
}
