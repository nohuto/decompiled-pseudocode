/*
 * XREFs of WPP_SF_dSS @ 0x18000FC4C
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180015834 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_dSS(
        TRACEHANDLE LoggerHandle,
        __int64 a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  __int64 v6; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r10
  const wchar_t *v11; // rcx
  const wchar_t *v12; // rax
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  v6 = -1LL;
  v8 = 10LL;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a6[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10LL;
  }
  if ( a5 )
  {
    do
      ++v6;
    while ( a5[v6] );
    v8 = 2 * v6 + 2;
  }
  v11 = L"NULL";
  v12 = L"NULL";
  if ( a6 )
    v12 = a6;
  if ( a5 )
    v11 = a5;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
           0x2Cu,
           &v14,
           4LL,
           v11,
           v8,
           v12,
           v10,
           0LL);
}
