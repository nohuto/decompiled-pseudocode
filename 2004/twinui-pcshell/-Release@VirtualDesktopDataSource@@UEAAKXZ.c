/*
 * XREFs of ?Release@VirtualDesktopDataSource@@UEAAKXZ @ 0x18007EC00
 * Callers:
 *     ?Release@VirtualDesktopDataSource@@W7EAAKXZ @ 0x1800FC570 (-Release@VirtualDesktopDataSource@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBA@EAAKXZ @ 0x1800FC580 (-Release@VirtualDesktopDataSource@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBI@EAAKXZ @ 0x1800FC590 (-Release@VirtualDesktopDataSource@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCA@EAAKXZ @ 0x1800FC5A0 (-Release@VirtualDesktopDataSource@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCI@EAAKXZ @ 0x1800FC5B0 (-Release@VirtualDesktopDataSource@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktopDataSource::Release(VirtualDesktopDataSource *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(this);
}
