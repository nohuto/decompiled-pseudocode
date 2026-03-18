/*
 * XREFs of ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C008EC94
 * Callers:
 *     ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C008EB70 (-CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z.c)
 * Callees:
 *     _vsnprintf @ 0x1C00CBCB8 (_vsnprintf.c)
 */

__int64 RtlStringCbPrintfA(char *Dest, __int64 a2, const char *a3, ...)
{
  int v3; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *Dest = 0;
  }
  else
  {
    v5 = a2 - 1;
    v3 = 0;
    v6 = vsnprintf(Dest, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Dest[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v5 )
    {
      Dest[v5] = 0;
    }
  }
  return (unsigned int)v3;
}
