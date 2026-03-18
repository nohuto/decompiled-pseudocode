/*
 * XREFs of sub_1C0030FF8 @ 0x1C0030FF8
 * Callers:
 *     sub_1C0002D20 @ 0x1C0002D20 (sub_1C0002D20.c)
 *     sub_1C0003070 @ 0x1C0003070 (sub_1C0003070.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0033E18 @ 0x1C0033E18 (sub_1C0033E18.c)
 */

_DWORD *__fastcall sub_1C0030FF8(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int16 v5; // bp
  unsigned __int16 i; // bx
  _DWORD *result; // rax

  sub_1C000F050(a1);
  sub_1C000FD80(a1, 2048, 1919251262, 0LL, 0LL);
  v5 = v4 + 1;
  for ( i = v4 + 1; ; i += v5 )
  {
    result = sub_1C000F050(a1);
    if ( i > *((unsigned __int8 *)result + 2938) )
      break;
    sub_1C0033E18(a1, a2, i);
  }
  return result;
}
