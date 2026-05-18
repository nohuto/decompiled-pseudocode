/*
 * XREFs of sub_18011B0C4 @ 0x18011B0C4
 * Callers:
 *     sub_18011B4F0 @ 0x18011B4F0 (sub_18011B4F0.c)
 * Callees:
 *     sub_180125128 @ 0x180125128 (sub_180125128.c)
 */

__int64 sub_18011B0C4(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_180125128(a1, 256LL, a2, (__int64 *)va);
}
