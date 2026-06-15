/*
 * XREFs of WPP_SF_SD @ 0x18012E21C
 * Callers:
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x18012E170 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_SD(TRACEHANDLE a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return TraceMessage(a1, 0x2Bu, &WPP_4eafb4922377398226ebd8f44c54649d_Traceguids, 0x11u, a4, v5, va, 4LL, 0LL);
}
