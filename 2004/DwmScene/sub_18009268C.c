/*
 * XREFs of sub_18009268C @ 0x18009268C
 * Callers:
 *     sub_1800921CC @ 0x1800921CC (sub_1800921CC.c)
 * Callees:
 *     sub_180090DE8 @ 0x180090DE8 (sub_180090DE8.c)
 */

_QWORD *__fastcall sub_18009268C(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    sub_180090DE8(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
