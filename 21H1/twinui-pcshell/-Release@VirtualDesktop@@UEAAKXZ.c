/*
 * XREFs of ?Release@VirtualDesktop@@UEAAKXZ @ 0x18007E390
 * Callers:
 *     ?Release@VirtualDesktop@@W7EAAKXZ @ 0x1800D7A60 (-Release@VirtualDesktop@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBA@EAAKXZ @ 0x1800D7A70 (-Release@VirtualDesktop@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WBI@EAAKXZ @ 0x1800D7A80 (-Release@VirtualDesktop@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktop@@WCA@EAAKXZ @ 0x1800D7A90 (-Release@VirtualDesktop@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktop::Release(VirtualDesktop *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop,Microsoft::WRL::ChainInterfaces<VirtualDesktopNotificationBase<IVirtualDesktopNotification2>,IVirtualDesktopNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::Release(this);
}
