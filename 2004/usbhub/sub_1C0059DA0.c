/*
 * XREFs of sub_1C0059DA0 @ 0x1C0059DA0
 * Callers:
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C0042BA0 @ 0x1C0042BA0 (sub_1C0042BA0.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 *     sub_1C0059E9C @ 0x1C0059E9C (sub_1C0059E9C.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 */

LONG __fastcall sub_1C0059DA0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // rdx

  v4 = sub_1C000F050(a1);
  v5 = (_QWORD *)sub_1C0004060(a1, a2, a1, 1766093683, 1);
  KeWaitForSingleObject(v4 + 790, Executive, 0, 0, 0LL);
  sub_1C000FD80(
    a1,
    0x10000,
    1397244971,
    _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 412, (signed __int64)v5, 0LL),
    (__int64)v5);
  if ( v6 )
  {
    sub_1C000FD80(a1, v7, 1396978221, v6, (__int64)v5);
    sub_1C0003610(a1, v8, v5);
  }
  sub_1C0011260(a1, (__int64)(v4 + 800));
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 790), 16, 1, 0);
}
