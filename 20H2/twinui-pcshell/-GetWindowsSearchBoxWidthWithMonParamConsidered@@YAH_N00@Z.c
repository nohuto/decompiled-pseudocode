/*
 * XREFs of ?GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z @ 0x180096F54
 * Callers:
 *     ?GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18005C004 (-GetActivateArgs@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z @ 0x180096A20 (-GetCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@_N@Z.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1802076BC (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_1802076BC.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x180013770 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsDeviceAADJoined@@YA_NXZ @ 0x1800970D0 (-IsDeviceAADJoined@@YA_NXZ.c)
 *     ?IsDeviceDomainJoined@@YA_NXZ @ 0x1800971BC (-IsDeviceDomainJoined@@YA_NXZ.c)
 *     ?IsSmallIconsMode@@YA_NXZ @ 0x180097230 (-IsSmallIconsMode@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer@@@details@wil@@QEAA_NXZ @ 0x180097654 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToCo.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon@@@details@wil@@QEAA_NXZ @ 0x180097694 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top.c)
 */

__int64 __fastcall GetWindowsSearchBoxWidthWithMonParamConsidered(char a1, unsigned __int8 a2, char a3)
{
  int v4; // esi
  unsigned int v7; // ebx
  int v8; // r15d
  BOOL v9; // esi
  LSTATUS ValueW; // eax
  unsigned int v11; // edi
  DWORD pdwType; // [rsp+40h] [rbp-10h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-Ch] BYREF
  unsigned int v14; // [rsp+48h] [rbp-8h] BYREF
  unsigned int pvData; // [rsp+88h] [rbp+38h] BYREF

  v4 = a2;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::GetImpl'::`2'::impl)
    && a3
    && IsSmallIconsMode() )
  {
    return 258LL;
  }
  v7 = (_BYTE)v4 != 0 ? 344 : 320;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_LimitShortSearchboxToConsumer>::GetImpl'::`2'::impl) )
  {
    if ( a3 && !IsDeviceDomainJoined() && !IsDeviceAADJoined() )
      goto LABEL_9;
    return v7;
  }
  if ( !a3 )
    return v7;
LABEL_9:
  v14 = 0;
  pdwType = 0;
  pcbData = 4;
  v8 = v4;
  v9 = 1;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"TraySearchBoxVisible",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  if ( !ValueW )
  {
    if ( pdwType == 4 )
    {
      if ( pvData <= 1 )
      {
        LOBYTE(ValueW) = pvData == 1;
        v9 = ValueW;
      }
    }
    else if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v9 = (_WORD)pvData == 49;
    }
  }
  v11 = v7;
  if ( a1
    && v9
    && (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)(unsigned int)(v8 + 30), &v14) >= 0
    && v14 >= 0xF0
    && (int)v14 <= (int)v7 )
  {
    return v14;
  }
  return v11;
}
