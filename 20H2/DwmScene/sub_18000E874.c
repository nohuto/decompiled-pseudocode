/*
 * XREFs of sub_18000E874 @ 0x18000E874
 * Callers:
 *     sub_18000EED0 @ 0x18000EED0 (sub_18000EED0.c)
 * Callees:
 *     sub_18011F8B8 @ 0x18011F8B8 (sub_18011F8B8.c)
 */

__int64 sub_18000E874(_BYTE *a1, __int64 a2, int a3, ...)
{
  int v3; // esi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v5 = a2 - 1;
    v3 = 0;
    v6 = sub_18011F8B8((_DWORD)a1, a2, (int)a2 - 1, a3, (__int64)va);
    if ( v6 < 0 || v6 > v5 )
    {
      a1[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      a1[v5] = 0;
    }
  }
  return (unsigned int)v3;
}
