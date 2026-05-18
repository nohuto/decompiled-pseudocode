/*
 * XREFs of sub_18003BF08 @ 0x18003BF08
 * Callers:
 *     sub_18003B878 @ 0x18003B878 (sub_18003B878.c)
 *     sub_18003B93C @ 0x18003B93C (sub_18003B93C.c)
 * Callees:
 *     sub_18011F8B8 @ 0x18011F8B8 (sub_18011F8B8.c)
 */

__int64 sub_18003BF08(int a1, int a2, const char *a3, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  return sub_18011F8B8(a1, 256, a2, (_DWORD)a3, (__int64)va);
}
