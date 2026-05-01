/*
 * XREFs of ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180466B84
 * Callers:
 *     ?QueryInterface@?$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@UIWindowTabHost@3456@Uimmersive_shell_component@6@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$cloaked@UIWindowTabHostInternal@Shell@Internal@Windows@@@6@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CB250 (-QueryInterface@-$implements@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@U13456@.c)
 *     ?QueryInterface@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800CB530 (-QueryInterface@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWin.c)
 *     ?QueryInterface@?$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabHost@3456@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800CB550 (-QueryInterface@-$produce_base@UWindowTabHost@implementation@Shell@Internal@Windows_ea_1800CB550.c)
 *     ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DCCD0 (-QueryInterface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Window.c)
 *     ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1804617D8 (--$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@@impl@winrt@@YA-AU-$com_ptr@UIService.c)
 *     ?QueryInterface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180464C00 (-QueryInterface@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 *     ?QueryInterface@?$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UIDragDropSimulator@34567@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180464E90 (-QueryInterface@-$produce_base@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shel.c)
 *     ?QueryInterface@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180464EB0 (-QueryInterface@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Window.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180066E20 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@I@Foundation@Windows@winrt@@PEAUDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@34@AEBV?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@AEBUtagPOINT@@_N@experimental@std@@U?$IAsyncOperation@I@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18046699C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@I@Foundatio.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  volatile signed __int64 *v3; // rbx
  __int64 v6; // rax
  signed __int64 v7; // rdx
  bool v8; // zf
  signed __int64 v9; // rax
  __int64 v10; // rax
  signed __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  signed __int64 v16; // rax
  __int64 v17; // rax
  signed __int64 v18; // rax
  __int64 v19; // rax
  __int64 weak_ref; // rax

  v3 = (volatile signed __int64 *)a1;
  if ( !a1 )
    a1 = 32LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  *a3 = v6;
  if ( v6 )
  {
    v7 = *((_QWORD *)v3 + 1);
    while ( v7 >= 0 )
    {
      v9 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
      v8 = v7 == v9;
      v7 = v9;
      if ( v8 )
        return 0LL;
    }
  }
  else
  {
    v10 = *a2 - winrt::impl::guid_storage<winrt::impl::IAgileObject>::value;
    if ( *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value )
      v10 = a2[1] + 0x6FA470359B110040LL;
    if ( v10 )
    {
      v12 = *a2 - winrt::impl::guid_storage<winrt::impl::IMarshal>::value;
      if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value )
        v12 = a2[1] - 0x46000000000000C0LL;
      if ( !v12 )
      {
        v13 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 16))(v3);
        return winrt::impl::make_marshaler(v13, a3);
      }
      v15 = *a2 - winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value;
      if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::IInspectable>::value )
        v15 = a2[1] + 0x6FE1EF9A5528A564LL;
      if ( v15 )
      {
        v17 = *a2 - winrt::impl::guid_storage<IUnknown>::value;
        if ( *a2 == winrt::impl::guid_storage<IUnknown>::value )
          v17 = a2[1] - 0x46000000000000C0LL;
        if ( v17 )
        {
          v19 = *a2 - winrt::impl::guid_storage<winrt::impl::IWeakReferenceSource>::value;
          if ( *a2 == winrt::impl::guid_storage<winrt::impl::IWeakReferenceSource>::value )
            v19 = a2[1] - 0x46000000000000C0LL;
          if ( v19 )
            return (**(__int64 (__fastcall ***)(volatile signed __int64 *, _QWORD *, __int64 *))v3)(v3, a2, a3);
          weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *,wil::com_ptr_t<IDropTarget,wil::err_exception_policy> const &,wil::com_ptr_t<IDataObject,wil::err_exception_policy> const &,tagPOINT const &,bool>::promise_type,winrt::Windows::Foundation::IAsyncOperation<unsigned int>,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(v3);
          *a3 = weak_ref;
          return weak_ref == 0 ? 0x8007000E : 0;
        }
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 16))(v3);
        v7 = *((_QWORD *)v3 + 1);
        while ( v7 >= 0 )
        {
          v18 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
          v8 = v7 == v18;
          v7 = v18;
          if ( v8 )
            return 0LL;
        }
      }
      else
      {
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 48))(v3);
        v7 = *((_QWORD *)v3 + 1);
        while ( v7 >= 0 )
        {
          v16 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
          v8 = v7 == v16;
          v7 = v16;
          if ( v8 )
            return 0LL;
        }
      }
    }
    else
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v3 + 16))(v3);
      v7 = *((_QWORD *)v3 + 1);
      while ( v7 >= 0 )
      {
        v11 = _InterlockedCompareExchange64(v3 + 1, v7 + 1, v7);
        v8 = v7 == v11;
        v7 = v11;
        if ( v8 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v7 + 24), 1u);
  return 0LL;
}
