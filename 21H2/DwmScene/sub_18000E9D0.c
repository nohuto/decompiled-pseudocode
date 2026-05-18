/*
 * XREFs of sub_18000E9D0 @ 0x18000E9D0
 * Callers:
 *     sub_18000C330 @ 0x18000C330 (sub_18000C330.c)
 *     sub_18001A4D0 @ 0x18001A4D0 (sub_18001A4D0.c)
 *     sub_1801254B2 @ 0x1801254B2 (sub_1801254B2.c)
 *     sub_180125586 @ 0x180125586 (sub_180125586.c)
 *     sub_18012565F @ 0x18012565F (sub_18012565F.c)
 *     sub_1801256B0 @ 0x1801256B0 (sub_1801256B0.c)
 * Callees:
 *     vsnprintf @ 0x180125074 (vsnprintf.c)
 */

__int64 sub_18000E9D0(char *Buffer, __int64 a2, const char *a3, ...)
{
  int v4; // esi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list ArgList; // [rsp+68h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *(_WORD *)Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnprintf(Buffer, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      *(_WORD *)&Buffer[2 * v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      *(_WORD *)&Buffer[2 * v5] = 0;
    }
  }
  return (unsigned int)v4;
}
