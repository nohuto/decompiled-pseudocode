/*
 * XREFs of sub_18006553C @ 0x18006553C
 * Callers:
 *     sub_180064BF4 @ 0x180064BF4 (sub_180064BF4.c)
 * Callees:
 *     sub_18002813C @ 0x18002813C (sub_18002813C.c)
 */

wchar_t *sub_18006553C(wchar_t *a1, wchar_t *a2, const wchar_t *a3, ...)
{
  wchar_t *v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a1;
  v5 = a2 - a1;
  if ( (unsigned __int64)(v5 - 1) > 0x7FFFFFFE )
  {
    if ( v5 )
      *v3 = 0;
  }
  else
  {
    sub_18002813C(v3, v5, (__int64)a3, a3, va);
  }
  if ( a2 != v3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v3[v6] );
    v3 += v6;
  }
  return v3;
}
