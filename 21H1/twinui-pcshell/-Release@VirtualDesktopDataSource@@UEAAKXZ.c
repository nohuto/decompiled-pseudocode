/*
 * XREFs of ?Release@VirtualDesktopDataSource@@UEAAKXZ @ 0x18007E430
 * Callers:
 *     ?Release@VirtualDesktopDataSource@@W7EAAKXZ @ 0x1800D7860 (-Release@VirtualDesktopDataSource@@W7EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBA@EAAKXZ @ 0x1800D7870 (-Release@VirtualDesktopDataSource@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBI@EAAKXZ @ 0x1800D7880 (-Release@VirtualDesktopDataSource@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCA@EAAKXZ @ 0x1800D7890 (-Release@VirtualDesktopDataSource@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCI@EAAKXZ @ 0x1800D78A0 (-Release@VirtualDesktopDataSource@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktopDataSource::Release(VirtualDesktopDataSource *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource,IDesktopVirtualDesktopDataSource,IVirtualDesktopDataSourceInternal,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Microsoft::WRL::FtmBase>::Release(this);
}
