/*
 * XREFs of sub_1800B2A3C @ 0x1800B2A3C
 * Callers:
 *     sub_1800AF9DC @ 0x1800AF9DC (sub_1800AF9DC.c)
 * Callees:
 *     sub_1800B2770 @ 0x1800B2770 (sub_1800B2770.c)
 *     sub_1800B2AB0 @ 0x1800B2AB0 (sub_1800B2AB0.c)
 *     sub_1800B2D04 @ 0x1800B2D04 (sub_1800B2D04.c)
 *     sub_1800B2F00 @ 0x1800B2F00 (sub_1800B2F00.c)
 *     sub_1800B2FD8 @ 0x1800B2FD8 (sub_1800B2FD8.c)
 */

_OWORD *__fastcall sub_1800B2A3C(__int64 a1)
{
  char v2; // bp
  char v3; // si
  _OWORD *result; // rax
  char v5; // di

  v2 = sub_1800B2FD8();
  v3 = sub_1800B2D04(a1);
  result = (_OWORD *)sub_1800B2AB0(a1);
  v5 = (char)result;
  if ( v3 || (_BYTE)result )
    result = (_OWORD *)sub_1800B2F00(a1);
  if ( v2 || v3 || v5 )
    return sub_1800B2770(a1);
  return result;
}
