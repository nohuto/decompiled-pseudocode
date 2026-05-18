/*
 * XREFs of sub_1801172EC @ 0x1801172EC
 * Callers:
 *     sub_18000BD50 @ 0x18000BD50 (sub_18000BD50.c)
 *     sub_180118140 @ 0x180118140 (sub_180118140.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1801172EC(_QWORD *a1)
{
  _OWORD *v2; // rax

  v2 = operator new(0x38uLL);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
  }
  *a1 = v2;
  return a1;
}
