/*
 * XREFs of sub_18002E57C @ 0x18002E57C
 * Callers:
 *     sub_18002DD08 @ 0x18002DD08 (sub_18002DD08.c)
 * Callees:
 *     sub_18002E570 @ 0x18002E570 (sub_18002E570.c)
 */

__int64 sub_18002E57C(__int64 a1, int a2, __int64 a3, __int64 a4, const char *a5, ...)
{
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = a4;
  sub_18002E570(a1, a2, a3, a4, v7, retaddr, v8, a4, (__int64)a5, va);
  return v5;
}
