/*
 * XREFs of ?_LoadIsGameModeEnabled@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800393D8
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180039584 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800118E8 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180016A30 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x18003A2A4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003AEB4 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x18003B004 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18003B04C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadIsGameModeEnabled(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  __int64 FirstGameConfig; // rdi
  __int64 v3; // rdx
  bool v4; // zf
  unsigned int v5; // r8d
  HSTRING v6; // rcx
  const wchar_t *StringRawBuffer; // rax
  unsigned int v8; // edi
  _BYTE v10[4]; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+44h] [rbp-34h]
  _BYTE v12[8]; // [rsp+48h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int128 v14; // [rsp+60h] [rbp-18h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+28h] BYREF
  UINT32 length; // [rsp+A8h] [rbp+30h] BYREF
  int v17; // [rsp+B0h] [rbp+38h] BYREF
  __int16 v18; // [rsp+B4h] [rbp+3Ch]
  HSTRING string; // [rsp+B8h] [rbp+40h] BYREF

  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  v3 = *(_QWORD *)(FirstGameConfig + 16);
  v4 = (*(_DWORD *)(v3 + 32) & 0x80) == 0;
  *((_BYTE *)this + 96) = (*(_DWORD *)(v3 + 32) & 0x80) != 0;
  if ( v4 )
  {
    v5 = `wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl & 2) == 0 )
    {
      v15 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedFeatureEnabledState(
                         &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
                         v12);
      v5 = v15;
    }
    LODWORD(v15) = 0;
    BYTE4(v15) = 3;
    v17 = 0;
    v18 = WORD2(v15);
    wil_details_FeatureReporting_ReportUsageToService(
      (signed __int32 *)&unk_18005AFE0,
      0xA8161Eu,
      (v5 >> 8) & 1,
      (v5 >> 9) & 1,
      (const struct FEATURE_LOGGED_TRAITS *)&v17,
      1,
      3);
    LODWORD(v15) = 0;
    v13 = *(_OWORD *)FirstGameConfig;
    if ( (*(int (__fastcall **)(_QWORD, __int128 *, __int64, __int64 *))(**((_QWORD **)this + 8) + 112LL))(
           *((_QWORD *)this + 8),
           &v13,
           17LL,
           &v15) >= 0
      && !(_DWORD)v15 )
    {
      string = 0LL;
      v14 = *(_OWORD *)FirstGameConfig;
      WindowsDeleteString(0LL);
      string = 0LL;
      if ( (int)GetStringPropertyFromGameConfigStore(*((_QWORD *)this + 8), &v14, 15LL, &string) >= 0 )
      {
        v6 = string;
        if ( !string )
        {
LABEL_15:
          WindowsDeleteString(v6);
          return 0LL;
        }
        StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
        if ( StringRawBuffer )
        {
          if ( length )
          {
            v8 = wcstoul(StringRawBuffer, 0LL, 10);
            if ( v8 - 1 <= 0xFFFFFFFD )
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
                &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
                v10);
              if ( v8 == v11
                && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl) == 1 )
              {
                *((_BYTE *)this + 96) = 1;
              }
            }
          }
        }
      }
      v6 = string;
      goto LABEL_15;
    }
  }
  return 0LL;
}
