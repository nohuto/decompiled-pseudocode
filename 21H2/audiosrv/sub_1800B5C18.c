/*
 * XREFs of sub_1800B5C18 @ 0x1800B5C18
 * Callers:
 *     sub_1800B60C0 @ 0x1800B60C0 (sub_1800B60C0.c)
 *     sub_1800B78D0 @ 0x1800B78D0 (sub_1800B78D0.c)
 * Callees:
 *     sub_18006AD74 @ 0x18006AD74 (sub_18006AD74.c)
 */

__int64 __fastcall sub_1800B5C18(_BYTE *a1, __int64 a2)
{
  int v2; // edi
  unsigned __int64 v4; // rbx
  int v5; // eax

  v2 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v2 = -2147024809;
  if ( v2 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v2 = 0;
    v5 = sub_18006AD74();
    if ( v5 < 0 || v5 > v4 )
    {
      a1[v4] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v5 == v4 )
    {
      a1[v4] = 0;
    }
  }
  return (unsigned int)v2;
}
