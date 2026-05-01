/*
 * XREFs of ?Release@VirtualDesktopController@@UEAAKXZ @ 0x180377480
 * Callers:
 *     ?Release@VirtualDesktopController@@W7EAAKXZ @ 0x1800FDC20 (-Release@VirtualDesktopController@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBA@EAAKXZ @ 0x1800FDC30 (-Release@VirtualDesktopController@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WBI@EAAKXZ @ 0x1800FDC40 (-Release@VirtualDesktopController@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopController@@WCA@EAAKXZ @ 0x1800FDC50 (-Release@VirtualDesktopController@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VirtualDesktopController::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController2,IVirtualDesktopControllerInternal,Microsoft::WRL::FtmBase>::Release(this);
}
