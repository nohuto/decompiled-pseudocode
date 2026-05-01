/*
 * XREFs of ??1?$ComPtr@VPeoplePaneViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18025DCB4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_PeoplePaneViewManager_IUnknown__::_1_::dtor$2 @ 0x18025D0DE (_Microsoft--WRL--Details--MakeAndInitialize_PeoplePaneViewManager_IUnknown__--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIWindowManagementJointResizeEvents@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@UIImmersiveRawInputKeyboardNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802616F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1802616F0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PeoplePaneViewManager>::~ComPtr<PeoplePaneViewManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IWindowManagementJointResizeEvents,IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,IImmersiveRawInputKeyboardNotification>::Release(result);
  }
  return result;
}
