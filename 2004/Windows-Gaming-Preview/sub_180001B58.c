/*
 * XREFs of sub_180001B58 @ 0x180001B58
 * Callers:
 *     sub_1800081FC @ 0x1800081FC (sub_1800081FC.c)
 *     sub_18000870C @ 0x18000870C (sub_18000870C.c)
 *     sub_180045CB8 @ 0x180045CB8 (sub_180045CB8.c)
 *     sub_180045D9A @ 0x180045D9A (sub_180045D9A.c)
 *     sub_180045E8D @ 0x180045E8D (sub_180045E8D.c)
 *     sub_180045EE4 @ 0x180045EE4 (sub_180045EE4.c)
 * Callees:
 *     vsnprintf @ 0x180045438 (vsnprintf.c)
 */

__int64 sub_180001B58(char *DstBuf, __int64 a2, const char *a3, ...)
{
  int v4; // edi
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
      *(_WORD *)DstBuf = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnprintf(DstBuf, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      *(_WORD *)&DstBuf[2 * v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      *(_WORD *)&DstBuf[2 * v5] = 0;
    }
  }
  return (unsigned int)v4;
}
