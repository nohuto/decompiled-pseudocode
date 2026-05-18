/*
 * XREFs of sub_1800417D8 @ 0x1800417D8
 * Callers:
 *     sub_180041148 @ 0x180041148 (sub_180041148.c)
 *     sub_18004120C @ 0x18004120C (sub_18004120C.c)
 * Callees:
 *     sub_180125188 @ 0x180125188 (sub_180125188.c)
 */

__int64 sub_1800417D8(int a1, int a2, const char *a3, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  return sub_180125188(a1, 256, a2, (_DWORD)a3, (__int64)va);
}
