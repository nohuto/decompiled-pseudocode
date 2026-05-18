/*
 * XREFs of sub_1801157F4 @ 0x1801157F4
 * Callers:
 *     sub_180115C20 @ 0x180115C20 (sub_180115C20.c)
 * Callees:
 *     sub_18011F858 @ 0x18011F858 (sub_18011F858.c)
 */

__int64 sub_1801157F4(__int64 a1, __int64 a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return sub_18011F858(a1, 256LL, a2, (__int64 *)va);
}
