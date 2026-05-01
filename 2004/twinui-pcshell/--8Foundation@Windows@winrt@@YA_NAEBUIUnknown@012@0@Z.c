/*
 * XREFs of ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1801E7F70
 * Callers:
 *     ?FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800CA0C8 (-FindExistingWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x1800D14D0 (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800D1F98 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 *     ?CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800D406C (-CreateWindow@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$2 @ 0x1800D6AA0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_ResumeCoro$2 @ 0x1800D8810 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_Resume.c)
 *     ?IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x1800ED4F0 (-IsNetworkConnectivityAvailable@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 *     _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1801EB518 (_anonymous_namespace_--TryGetAUMIDFromAppExtensionCatalog.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall winrt::Windows::Foundation::operator==(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall **v5)(_QWORD, __int64 *, __int64 *); // rax
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  void (__fastcall **v9)(_QWORD, __int64 *, __int64 *); // rax
  bool v10; // di
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1;
  if ( v2 == (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2 )
    return 1;
  if ( !v2 || !*a2 )
    return 0;
  v5 = *v2;
  v11 = 0LL;
  (*v5)(v2, &winrt::impl::guid_storage<IUnknown>::value, &v11);
  v6 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*a2;
  v7 = v11;
  v13 = v11;
  if ( v6 )
  {
    v9 = *v6;
    v12 = 0LL;
    (*v9)(v6, &winrt::impl::guid_storage<IUnknown>::value, &v12);
    v8 = v12;
  }
  else
  {
    v8 = 0LL;
  }
  v11 = v8;
  v10 = v7 == v8;
  if ( v8 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v11);
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v13);
  return v10;
}
