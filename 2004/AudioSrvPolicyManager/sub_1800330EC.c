/*
 * XREFs of sub_1800330EC @ 0x1800330EC
 * Callers:
 *     sub_180030E60 @ 0x180030E60 (sub_180030E60.c)
 *     sub_180031C0C @ 0x180031C0C (sub_180031C0C.c)
 *     sub_1800328D0 @ 0x1800328D0 (sub_1800328D0.c)
 * Callees:
 *     vsnprintf @ 0x18003A7E4 (vsnprintf.c)
 */

__int64 sub_1800330EC(char *DstBuf, unsigned __int64 a2, const char *a3, ...)
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
