/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C0023A5C
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C0023B68 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     _lambda_86c1c4c730e7c498c85e738815d56adf_::operator() @ 0x1C0100B38 (_lambda_86c1c4c730e7c498c85e738815d56adf_--operator().c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010115C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107594 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A2AC (ndisBindReadFilterDriverFromV3Registry.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0122AE0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB334 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Sd(
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
  bool v14; // zf
  __int64 v16; // rax
  __int64 v17; // r9
  const wchar_t *v18; // r8
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
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v18, v17, va, 4LL, 0LL);
  }
  v14 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v12 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v19, v12);
}
