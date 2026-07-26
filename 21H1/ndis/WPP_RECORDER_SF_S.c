/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00332A0
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1C0032B58 (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x1C00F8008 (ndisLWMBuildConfigurationKeyPath.c)
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C0108100 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1C01081EC (-ndisCheckIfDeviceNeedsPseudoMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$defaul.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A298 (ndisBindReadFilterDriverFromV3Registry.c)
 *     NdisQueryDiagnosticSetting @ 0x1C0117780 (NdisQueryDiagnosticSetting.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0122AD0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x1C0122C38 (-ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AAE74 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6)
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
  int v19; // [rsp+20h] [rbp-48h]

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
    ndisWppFastTraceMessage(a5, a4, v18, v17, 0LL);
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
