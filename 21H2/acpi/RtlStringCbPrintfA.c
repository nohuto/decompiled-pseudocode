/*
 * XREFs of RtlStringCbPrintfA @ 0x1C0068374
 * Callers:
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v4; // ebx
  size_t v5; // rdi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cbDest - 1 <= 0x7FFFFFFE )
  {
    v5 = cbDest - 1;
    v4 = 0;
    v6 = _vsnprintf(pszDest, cbDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  else
  {
    v4 = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  return v4;
}
