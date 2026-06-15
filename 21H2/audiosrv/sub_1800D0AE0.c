/*
 * XREFs of sub_1800D0AE0 @ 0x1800D0AE0
 * Callers:
 *     sub_180008D38 @ 0x180008D38 (sub_180008D38.c)
 * Callees:
 *     sub_1800027F4 @ 0x1800027F4 (sub_1800027F4.c)
 */

_QWORD *__fastcall sub_1800D0AE0(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  sub_1800027F4(a3, a3);
  return a3;
}
