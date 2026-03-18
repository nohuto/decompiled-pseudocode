/*
 * XREFs of sub_1C00021C0 @ 0x1C00021C0
 * Callers:
 *     sub_1C000200C @ 0x1C000200C (sub_1C000200C.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 */

LONG __fastcall sub_1C00021C0(__int64 a1, int a2)
{
  __int64 v4; // rsi
  signed __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // r10d
  __int64 v9; // rdx

  v4 = sub_1C000F050(a1);
  v5 = sub_1C0004060(a1, a2, a1, 2018734963, 1);
  KeWaitForSingleObject((PVOID)(v4 + 3160), Executive, 0, 0, 0LL);
  sub_1C000FD80(
    a1,
    0x10000,
    1213429803,
    _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 3304), v5, 0LL),
    v5);
  if ( v6 )
  {
    sub_1C000FD80(a1, v7, 1213429810, v6, v5);
    sub_1C0003610(a1, v9, v5);
  }
  sub_1C0011260(a1, v4 + 3200);
  return KeReleaseSemaphore((PRKSEMAPHORE)(v4 + 3160), 16, 1, 0);
}
