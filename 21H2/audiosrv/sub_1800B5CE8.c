/*
 * XREFs of sub_1800B5CE8 @ 0x1800B5CE8
 * Callers:
 *     sub_1800B5C98 @ 0x1800B5C98 (sub_1800B5C98.c)
 * Callees:
 *     vsnprintf @ 0x18006AB98 (vsnprintf.c)
 */

__int64 __fastcall sub_1800B5CE8(char *a1, __int64 a2, __int64 a3, const char *a4, va_list ArgList)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = vsnprintf(a1, a2 - 1, a4, ArgList);
  if ( v8 < 0 || v8 > v5 )
  {
    *(_WORD *)&a1[2 * v5] = 0;
    return (unsigned int)-2147024774;
  }
  else if ( v8 == v5 )
  {
    *(_WORD *)&a1[2 * v5] = 0;
  }
  return v7;
}
