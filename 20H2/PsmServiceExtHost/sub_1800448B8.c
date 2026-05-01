/*
 * XREFs of sub_1800448B8 @ 0x1800448B8
 * Callers:
 *     sub_180047100 @ 0x180047100 (sub_180047100.c)
 * Callees:
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 *     sub_180064258 @ 0x180064258 (sub_180064258.c)
 */

char sub_1800448B8()
{
  char result; // al

  result = sub_180039EA4();
  if ( !result )
    return sub_180064258(&byte_1800B4010);
  byte_1800B4010 = 0;
  if ( xmmword_1800B4020 )
    return sub_180065C70(xmmword_1800B4020);
  return result;
}
