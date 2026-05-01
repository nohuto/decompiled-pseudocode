/*
 * XREFs of ??$call@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?AUViewCoordinator@Shell@UI@WindowsUdk@2@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@Z @ 0x1800665C4
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800660EC (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180066334 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Current@?$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUViewCoordinator@Shell@UI@WindowsUdk@3@XZ @ 0x18006673C (-Current@-$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI.c)
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066AE0 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??$get_activation_factory@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA?AUIViewCoordinatorStatics@Shell@UI@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180067140 (--$get_activation_factory@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@winrt@@YA-AUIView.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800671A0 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x18009227D (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<_lambda_711c13f4a08a1e89e6ea62835a20ef04_ &>(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v5; // rax
  char v6; // si
  void (__fastcall ***v7)(_QWORD, __int64 *, _QWORD *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[5]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v8 = a2;
  v9[3] = &qword_1805CCEC8;
  _InterlockedIncrement64(&qword_1805CCEC8);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics,_lambda_711c13f4a08a1e89e6ea62835a20ef04_>'::`2'::factory )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
      &`winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics,_lambda_711c13f4a08a1e89e6ea62835a20ef04_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_1805CCEC8);
    return a2;
  }
  _InterlockedDecrement64(&qword_1805CCEC8);
  v9[1] = L"WindowsUdk.UI.Shell.ViewCoordinator";
  v9[2] = 35LL;
  winrt::param::hstring::hstring(string);
  winrt::get_activation_factory<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>(&v7, string);
  v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  if ( !v7 )
  {
    v5 = 0LL;
    v8 = 0LL;
    goto LABEL_15;
  }
  v9[0] = 0LL;
  (**v7)(v7, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, v9);
  v5 = v9[0];
  v8 = v9[0];
  if ( !v9[0] )
  {
LABEL_15:
    v6 = 0;
    goto LABEL_7;
  }
  v6 = 1;
LABEL_7:
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v8);
  if ( v6 )
  {
    v9[4] = &qword_1805CCEC8;
    _InterlockedIncrement64(&qword_1805CCEC8);
    v4 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics,_lambda_711c13f4a08a1e89e6ea62835a20ef04_>'::`2'::factory,
            (signed __int64)v7,
            0LL) )
    {
      v7 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &ListEntry);
      v4 = 0LL;
    }
    winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
      &`winrt::impl::call_factory<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics,_lambda_711c13f4a08a1e89e6ea62835a20ef04_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_1805CCEC8);
  }
  else
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
      &v7,
      a2);
  }
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v7);
  return a2;
}
