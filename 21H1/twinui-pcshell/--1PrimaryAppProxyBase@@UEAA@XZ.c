/*
 * XREFs of ??1PrimaryAppProxyBase@@UEAA@XZ @ 0x18008B60C
 * Callers:
 *     _KioskPositioner::LoadShellLauncherConfiguration_::_1_::dtor$21 @ 0x1800A7DEF (_KioskPositioner--LoadShellLauncherConfiguration_--_1_--dtor$21.c)
 *     _Win32PrimaryAppProxy::Win32PrimaryAppProxy_::_1_::dtor$0 @ 0x1803B9768 (_Win32PrimaryAppProxy--Win32PrimaryAppProxy_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall PrimaryAppProxyBase::~PrimaryAppProxyBase(PrimaryAppProxyBase *this)
{
  *(_QWORD *)this = &wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
}
