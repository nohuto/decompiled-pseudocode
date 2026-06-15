/*
 * XREFs of sub_18000CD64 @ 0x18000CD64
 * Callers:
 *     sub_18000ACE4 @ 0x18000ACE4 (sub_18000ACE4.c)
 *     sub_18000DC80 @ 0x18000DC80 (sub_18000DC80.c)
 *     sub_18000DF10 @ 0x18000DF10 (sub_18000DF10.c)
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_180014CF0 @ 0x180014CF0 (sub_180014CF0.c)
 *     sub_18002E8D0 @ 0x18002E8D0 (sub_18002E8D0.c)
 *     sub_18002E9C0 @ 0x18002E9C0 (sub_18002E9C0.c)
 *     sub_18002EC60 @ 0x18002EC60 (sub_18002EC60.c)
 *     sub_180031784 @ 0x180031784 (sub_180031784.c)
 * Callees:
 *     sub_18000ED88 @ 0x18000ED88 (sub_18000ED88.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 */

_QWORD *__fastcall sub_18000CD64(_QWORD *a1, _WORD *a2)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rbx

  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 > 7 )
  {
    sub_18000ED88();
  }
  else
  {
    v5 = 2 * v3;
    a1[2] = v3;
    memmove(a1, a2, 2 * v3);
    *(_WORD *)((char *)a1 + v5) = 0;
  }
  return a1;
}
