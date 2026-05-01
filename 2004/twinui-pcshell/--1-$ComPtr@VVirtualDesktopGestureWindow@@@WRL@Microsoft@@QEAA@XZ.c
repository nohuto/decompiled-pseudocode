/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180442668
 * Callers:
 *     _Microsoft::WRL::Details::Make_VirtualDesktopGestureWindow_IVirtualDesktopManagerInternal___ISwitchThumbnailDeviceManager___IApplicationViewCollection___IImmersiveSettingsCache___Geometry::CRect_&_HMONITOR_____&__::_1_::dtor$0 @ 0x1804420A1 (_Microsoft--WRL--Details--Make_VirtualDesktopGestureWindow_IVirtualDesktopManagerInternal___ISwi.c)
 *     _VirtualDesktopGestureContext::Initialize_::_1_::dtor$6 @ 0x180444275 (_VirtualDesktopGestureContext--Initialize_--_1_--dtor$6.c)
 *     _CWRLImpWndProc_VirtualDesktopGestureWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x180445E1C (_CWRLImpWndProc_VirtualDesktopGestureWindow_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006B380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>::~ComPtr<VirtualDesktopGestureWindow>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
             result + 16,
             a2);
  }
  return result;
}
