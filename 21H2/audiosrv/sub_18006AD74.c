/*
 * XREFs of sub_18006AD74 @ 0x18006AD74
 * Callers:
 *     sub_1800B5C18 @ 0x1800B5C18 (sub_1800B5C18.c)
 * Callees:
 *     sub_18006954C @ 0x18006954C (sub_18006954C.c)
 *     _o___stdio_common_vsnprintf_s @ 0x18006AA96 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_18006AD74()
{
  __int64 result; // rax

  sub_18006954C();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
