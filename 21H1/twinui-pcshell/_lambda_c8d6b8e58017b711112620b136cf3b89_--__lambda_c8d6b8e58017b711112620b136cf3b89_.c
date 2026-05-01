/*
 * XREFs of _lambda_c8d6b8e58017b711112620b136cf3b89_::__lambda_c8d6b8e58017b711112620b136cf3b89_ @ 0x1802CB4F4
 * Callers:
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::XamlExplorerHostLaunchHandler__lambda_c8d6b8e58017b711112620b136cf3b89____::_1_::dtor$0 @ 0x1802CABC4 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostLaunchHandler--XamlExplorerHostLaunc.c)
 *     _XamlExplorerHost::CreateXamlExplorerHostWindowInBand_::_1_::dtor$5 @ 0x1802CBE8C (_XamlExplorerHost--CreateXamlExplorerHostWindowInBand_--_1_--dtor$5.c)
 * Callees:
 *     ??1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ @ 0x1802CB51C (--1CreateXamlExplorerHostWindow@XamlExplorerHostTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_c8d6b8e58017b711112620b136cf3b89_::__lambda_c8d6b8e58017b711112620b136cf3b89_(__int64 *a1)
{
  XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow::~CreateXamlExplorerHostWindow((XamlExplorerHostTelemetry::CreateXamlExplorerHostWindow *)(a1 + 1));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
