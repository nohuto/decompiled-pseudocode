/*
 * XREFs of sub_180125128 @ 0x180125128
 * Callers:
 *     sub_18011B0C4 @ 0x18011B0C4 (sub_18011B0C4.c)
 *     sub_18011B0F0 @ 0x18011B0F0 (sub_18011B0F0.c)
 * Callees:
 *     sub_180123860 @ 0x180123860 (sub_180123860.c)
 *     _o___stdio_common_vsprintf_s @ 0x1801238BD (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_180125128()
{
  __int64 result; // rax

  sub_180123860();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
