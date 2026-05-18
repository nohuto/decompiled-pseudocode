/*
 * XREFs of sub_18011B0F0 @ 0x18011B0F0
 * Callers:
 *     sub_18011B9C8 @ 0x18011B9C8 (sub_18011B9C8.c)
 * Callees:
 *     sub_180125128 @ 0x180125128 (sub_180125128.c)
 */

__int64 sub_18011B0F0(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_180125128(a1, 2112LL, a2, (__int64 *)va);
}
