/*
 * XREFs of _lambda_0b192ff2ee59a0e56115e85b2e997556_::operator() @ 0x180427B98
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::Invoke @ 0x180427F70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Co.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800663C0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Symbols@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1801C4E28 (-Symbols@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatic.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18026748C (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@34567@@Z @ 0x180428670 (-TabAdded@VirtualDesktopGroupedViewsEventListener@@AEAAXUTabDataModelWatcher@Tabs@ComposableShel.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_0b192ff2ee59a0e56115e85b2e997556_::operator()(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rsi
  __int64 *v4; // r14
  char v6; // bl
  char v7; // al
  _QWORD *v8; // rcx
  __int64 result; // rax
  const char *v10; // r9
  __int64 v11; // rbx
  void *v12[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+68h] [rbp+10h]
  __int64 *v16; // [rsp+70h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a3;
  v15 = a2;
  try
  {
    v3 = a3;
    v4 = a2;
    LODWORD(v14) = 0;
    wil::details::weak_query_policy::query(
      *(struct IWeakReference **)a1,
      &GUID_00000000_0000_0000_c000_000000000046,
      v12);
    v6 = 1;
    v7 = 1;
    LODWORD(v14) = 1;
    if ( !v12[0]
      || (v8 = winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Symbols(
                 v3,
                 &v17),
          v7 = 3,
          !*v8) )
    {
      v6 = 0;
    }
    if ( (v7 & 2) != 0 && v17 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v17);
    result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v12);
    if ( v6 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v14 = *v3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
      v17 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      result = VirtualDesktopGroupedViewsEventListener::TabAdded(v11, &v17, &v14);
    }
  }
  catch ( ... )
  {
    result = wil::details::in1diag3::Log_CaughtException(
               retaddr,
               (void *)0x60,
               (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
               v10);
    v3 = v16;
    v4 = v15;
  }
  if ( *v4 )
    result = winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v4);
  if ( *v3 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(v3);
  return result;
}
