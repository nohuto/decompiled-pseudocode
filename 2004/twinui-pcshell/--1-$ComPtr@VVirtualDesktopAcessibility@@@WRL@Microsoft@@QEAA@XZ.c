/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopAcessibility@@@WRL@Microsoft@@QEAA@XZ @ 0x180441574
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopAcessibility_VirtualDesktopAcessibility_enum__TABLETMODESTATE_&_IVirtualDesktopNotificationServicePrivate___&_IVirtualDesktopCollection___&_IVirtualDesktopManagerPrivate___&_IVirtualDesktopLock___&__::_1_::dtor$2 @ 0x1804413A9 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopAcessibility_VirtualDeskt_ea_1804413A9.c)
 *     _VirtualDesktopAcessibility_CreateInstance_::_1_::dtor$0 @ 0x180441CCD (_VirtualDesktopAcessibility_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::~ComPtr<VirtualDesktopAcessibility>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopAcessibility>::InternalRelease(a1);
}
