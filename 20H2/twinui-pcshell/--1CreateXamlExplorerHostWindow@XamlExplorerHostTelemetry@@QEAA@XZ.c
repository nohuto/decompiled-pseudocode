/*
 * XREFs of ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802EC7CC
 * Callers:
 *     WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89___ @ 0x1802EBD4C (WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunch.c)
 *     _lambda_c8d6b8e58017b711112620b136cf3b89_::__lambda_c8d6b8e58017b711112620b136cf3b89_ @ 0x1802EC7A4 (_lambda_c8d6b8e58017b711112620b136cf3b89_--__lambda_c8d6b8e58017b711112620b136cf3b89_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_c8d6b8e58017b711112620b136cf3b89__void_Windows::UI::Xaml::Window___HWND_____::_scalar_deleting_destructor_ @ 0x1802ECD40 (Platform--Details--__abi_FunctorCapture__lambda_c8d6b8e58017b711112620b136cf3b89__void_Windows--.c)
 *     ?CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedCallback@@UtagRECT@@KPEAUIPrivilegedPresentationOperations@@PEAUIXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1802ECE84 (-CreateXamlExplorerHostWindowInBand@XamlExplorerHost@@QE$AAAXPEAUIXamlExplorerHostWindowCreatedC.c)
 *     _XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor$0 @ 0x1802ED10C (_XamlExplorerHost--CreateXamlExplorerHostWindowInBand_--_1_--dtor$0.c)
 *     _XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor$4 @ 0x1802ED130 (_XamlExplorerHost--CreateXamlExplorerHostWindowInBand_--_1_--dtor$4.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802E9214 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow(
        XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *this)
{
  *(_QWORD *)this = &XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
