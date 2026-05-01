/*
 * XREFs of ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x1802FF49C
 * Callers:
 *     ?DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ @ 0x180301800 (-DismissViewAnimated@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIDesktopVisibilityService@@UIFullScreenPositionerNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180213190 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImm_ea_180213190.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIInvocationAnimationHost@@UIAnimatedDismissableHost@@UIDismissalAnimationHost@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802133C4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultit.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x1802F9ED8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x180301610 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180303CC4 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlAllUpViewHost::AnimateDismissFrames(__int64 **this, volatile int *a2)
{
  XamlAllUpViewHost *v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  XamlAllUpViewHost *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned __int64)this[44] < this[42] - this[41] )
    CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(this);
  if ( *((_DWORD *)this + 176) == 1 )
  {
    v5 = (XamlAllUpViewHost *)this;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IInvocationAnimationHost,IAnimatedDismissableHost,IDismissalAnimationHost,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::InternalAddRef(
      (__int64)this,
      a2);
    v3 = (XamlAllUpViewHost *)this;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IDesktopVisibilityService,IFullScreenPositionerNotification,Microsoft::WRL::FtmBase>::AddRef((__int64)this);
    std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___(
      &v4,
      this[41],
      this[42],
      &v3);
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v4);
    *((_DWORD *)this + 176) = 2;
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v5);
  }
}
