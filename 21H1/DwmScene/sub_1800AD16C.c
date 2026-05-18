/*
 * XREFs of sub_1800AD16C @ 0x1800AD16C
 * Callers:
 *     sub_1800AA10C @ 0x1800AA10C (sub_1800AA10C.c)
 * Callees:
 *     sub_1800ACEA0 @ 0x1800ACEA0 (sub_1800ACEA0.c)
 *     sub_1800AD1E0 @ 0x1800AD1E0 (sub_1800AD1E0.c)
 *     sub_1800AD434 @ 0x1800AD434 (sub_1800AD434.c)
 *     sub_1800AD630 @ 0x1800AD630 (sub_1800AD630.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 */

_OWORD *__fastcall sub_1800AD16C(__int64 a1)
{
  char v2; // bp
  char v3; // si
  _OWORD *result; // rax
  char v5; // di

  v2 = sub_1800AD708();
  v3 = sub_1800AD434(a1);
  result = (_OWORD *)sub_1800AD1E0(a1);
  v5 = (char)result;
  if ( v3 || (_BYTE)result )
    result = (_OWORD *)sub_1800AD630(a1);
  if ( v2 || v3 || v5 )
    return sub_1800ACEA0(a1);
  return result;
}
