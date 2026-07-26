/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C0031C10
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C0026860 (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1C002F0E0 (NdisFRegisterFilterDriver.c)
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031330 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C00F8008 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z @ 0x1C00F81DC (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115508 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0126ACC (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        __int64 a6)
{
  unsigned __int64 v8; // rdi
  unsigned int v9; // esi
  int v11; // eax
  int v13; // [rsp+20h] [rbp-38h]

  v8 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v11 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v11, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v8 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, a6, 16LL, 0LL);
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v13, a6);
}
