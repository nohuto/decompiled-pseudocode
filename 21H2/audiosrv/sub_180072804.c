/*
 * XREFs of sub_180072804 @ 0x180072804
 * Callers:
 *     sub_180072A70 @ 0x180072A70 (sub_180072A70.c)
 * Callees:
 *     sub_180036468 @ 0x180036468 (sub_180036468.c)
 */

_QWORD *__fastcall sub_180072804(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax

  sub_180036468((__int64)a1);
  v4 = *a2;
  *a2 = 0LL;
  a1[2] = v4;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[3] = a2[1];
  a1[4] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a1 = &off_18014B278;
  return a1;
}
