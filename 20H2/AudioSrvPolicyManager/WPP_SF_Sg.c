/*
 * XREFs of WPP_SF_Sg @ 0x18001A700
 * Callers:
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800203F4 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_Sg(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10LL;
  }
  v7 = L"NULL";
  if ( a4 )
    v7 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_386a857d2e283c5fe15986819513c374_Traceguids,
           0x39u,
           v7,
           v6,
           va,
           8LL,
           0LL);
}
