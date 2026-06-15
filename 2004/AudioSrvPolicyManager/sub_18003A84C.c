/*
 * XREFs of sub_18003A84C @ 0x18003A84C
 * Callers:
 *     sub_1800029C0 @ 0x1800029C0 (sub_1800029C0.c)
 * Callees:
 *     sub_1800392AC @ 0x1800392AC (sub_1800392AC.c)
 *     _o___stdio_common_vsnprintf_s @ 0x18003A6E6 (_o___stdio_common_vsnprintf_s.c)
 */

__int64 sub_18003A84C()
{
  __int64 result; // rax

  sub_1800392AC();
  result = o___stdio_common_vsnprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
