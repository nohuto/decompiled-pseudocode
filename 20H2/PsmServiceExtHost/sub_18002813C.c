/*
 * XREFs of sub_18002813C @ 0x18002813C
 * Callers:
 *     sub_1800280E4 @ 0x1800280E4 (sub_1800280E4.c)
 *     sub_18003B1D4 @ 0x18003B1D4 (sub_18003B1D4.c)
 *     sub_18006553C @ 0x18006553C (sub_18006553C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002813C(wchar_t *a1, __int64 a2, __int64 a3, const wchar_t *a4, va_list Args)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = vsnwprintf(a1, a2 - 1, a4, Args);
  if ( v8 < 0 || v8 > v5 )
  {
    a1[v5] = 0;
    return (unsigned int)-2147024774;
  }
  else if ( v8 == v5 )
  {
    a1[v5] = 0;
  }
  return v7;
}
