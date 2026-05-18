/*
 * XREFs of sub_18000E968 @ 0x18000E968
 * Callers:
 *     sub_18000D478 @ 0x18000D478 (sub_18000D478.c)
 * Callees:
 *     vsnprintf @ 0x18011F7A4 (vsnprintf.c)
 */

__int64 __fastcall sub_18000E968(char *Buffer, __int64 a2, const char *a3, va_list a4)
{
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax

  v5 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    if ( a2 )
      *(_WORD *)Buffer = 0;
  }
  else
  {
    v6 = a2 - 1;
    v5 = 0;
    v7 = vsnprintf(Buffer, a2 - 1, a3, a4);
    if ( v7 < 0 || v7 > v6 )
    {
      *(_WORD *)&Buffer[2 * v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      *(_WORD *)&Buffer[2 * v6] = 0;
    }
  }
  return (unsigned int)v5;
}
