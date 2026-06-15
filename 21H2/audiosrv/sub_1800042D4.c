/*
 * XREFs of sub_1800042D4 @ 0x1800042D4
 * Callers:
 *     sub_1800038A4 @ 0x1800038A4 (sub_1800038A4.c)
 *     sub_180003AA0 @ 0x180003AA0 (sub_180003AA0.c)
 *     sub_180004350 @ 0x180004350 (sub_180004350.c)
 *     sub_180057BD8 @ 0x180057BD8 (sub_180057BD8.c)
 *     sub_18012B4AC @ 0x18012B4AC (sub_18012B4AC.c)
 * Callees:
 *     vsnprintf @ 0x18006AB98 (vsnprintf.c)
 */

__int64 sub_1800042D4(char *DstBuf, unsigned __int64 a2, const char *a3, ...)
{
  unsigned __int64 v3; // rdx
  int v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list ArgList; // [rsp+68h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v3 = a2 >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    if ( v3 )
      *(_WORD *)DstBuf = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = vsnprintf(DstBuf, v3 - 1, a3, ArgList);
    if ( v7 < 0 || v7 > v6 )
    {
      *(_WORD *)&DstBuf[2 * v6] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v7 == v6 )
    {
      *(_WORD *)&DstBuf[2 * v6] = 0;
    }
  }
  return (unsigned int)v5;
}
