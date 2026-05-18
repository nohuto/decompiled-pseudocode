/*
 * XREFs of sub_180115820 @ 0x180115820
 * Callers:
 *     sub_1801160F8 @ 0x1801160F8 (sub_1801160F8.c)
 * Callees:
 *     sub_18011F858 @ 0x18011F858 (sub_18011F858.c)
 */

__int64 sub_180115820(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_18011F858(a1, 2112LL, a2, (__int64 *)va);
}
