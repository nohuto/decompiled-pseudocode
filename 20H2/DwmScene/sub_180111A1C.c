/*
 * XREFs of sub_180111A1C @ 0x180111A1C
 * Callers:
 *     sub_18000BC90 @ 0x18000BC90 (sub_18000BC90.c)
 *     sub_180112870 @ 0x180112870 (sub_180112870.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180111A1C(_QWORD *a1)
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
