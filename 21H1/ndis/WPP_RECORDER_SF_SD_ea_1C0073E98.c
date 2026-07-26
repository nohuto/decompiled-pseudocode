/*
 * XREFs of WPP_RECORDER_SF_SD @ 0x1C0073E98
 * Callers:
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107624 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     NdisQueryDiagnosticSetting @ 0x1C0117780 (NdisQueryDiagnosticSetting.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_SD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6,
        ...)
{
  __int64 v6; // rdi
  unsigned __int64 v9; // rsi
  unsigned int v10; // r14d
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  const wchar_t *v16; // r8
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = -1LL;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = a6;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v16, v15, va, 4LL, 0LL);
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v12 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v19, v12);
}
