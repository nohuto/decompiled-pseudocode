/*
 * XREFs of sub_1800454A0 @ 0x1800454A0
 * Callers:
 *     sub_180002350 @ 0x180002350 (sub_180002350.c)
 * Callees:
 *     sub_180043CBC @ 0x180043CBC (sub_180043CBC.c)
 *     _o___stdio_common_vsnprintf_s @ 0x1800452E2 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_1800454A0()
{
  __int64 result; // rax

  sub_180043CBC();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
