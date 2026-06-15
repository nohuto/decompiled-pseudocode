/*
 * XREFs of sub_18002E5E8 @ 0x18002E5E8
 * Callers:
 *     sub_18002EC60 @ 0x18002EC60 (sub_18002EC60.c)
 * Callees:
 *     sub_18002E570 @ 0x18002E570 (sub_18002E570.c)
 */

__int64 sub_18002E5E8(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v5 = a4;
  if ( (int)a4 < 0 )
    sub_18002E570(a1, a2, a3, a4, v7, retaddr, v8, a4, a5, va);
  return v5;
}
