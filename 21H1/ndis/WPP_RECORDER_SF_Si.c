/*
 * XREFs of WPP_RECORDER_SF_Si @ 0x1C0061BA4
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C0023BA8 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Si(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  const wchar_t *v11; // r8
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
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
    v11 = a6;
    if ( !a6 )
      v11 = L"NULL";
    ndisWppFastTraceMessage(&WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids, 0x75u, v11, v10, va, 8LL, 0LL);
  }
  v12 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = a6 == 0LL;
  }
  if ( v12 )
    v6 = L"NULL";
  LOWORD(v14) = 117;
  return WppAutoLogTrace(a1, 4LL, 13LL, &WPP_c1b31223335c304c22f5aac6e772b23d_Traceguids, v14, v6);
}
