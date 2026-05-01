/*
 * XREFs of ??$call@AEAV_lambda_82c99ec4d19f9d15ecf1f83b9d813b96_@@@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_82c99ec4d19f9d15ecf1f83b9d813b96_@@@Z @ 0x180345BE8
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x18034AB1C (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180060B80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x180091E7D (WINRT_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180346384 (--$get_activation_factory@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@W.c)
 *     ?Candidates@?$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics@UIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1803482F8 (-Candidates@-$consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesSta.c)
 */

__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<_lambda_82c99ec4d19f9d15ecf1f83b9d813b96_ &>(
        __int64 a1,
        __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v4; // rax
  char v5; // si
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[4]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string[4]; // [rsp+58h] [rbp-28h] BYREF

  v8 = a2;
  v10[2] = &qword_1805CD118;
  _InterlockedIncrement64(&qword_1805CD118);
  if ( `winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics,_lambda_82c99ec4d19f9d15ecf1f83b9d813b96_>'::`2'::factory )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Candidates(
      &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics,_lambda_82c99ec4d19f9d15ecf1f83b9d813b96_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_1805CD118);
    return a2;
  }
  _InterlockedDecrement64(&qword_1805CD118);
  v10[0] = L"WindowsUdk.ApplicationModel.OnScreenInput.KnownOnScreenInputUriSchemes";
  v10[1] = 70LL;
  winrt::param::hstring::hstring(string, (__int64)v10);
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>(
    &v7,
    string);
  v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  if ( v7 )
  {
    v9 = 0LL;
    (**v7)(v7, &winrt::impl::guid_storage<winrt::impl::IAgileObject>::value, &v9);
    v4 = v9;
    v8 = v9;
    if ( v9 )
    {
      v5 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = 0LL;
    v8 = 0LL;
  }
  v5 = 0;
LABEL_6:
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v8);
  if ( v5 )
  {
    v10[3] = &qword_1805CD118;
    _InterlockedIncrement64(&qword_1805CD118);
    v3 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
    if ( !_InterlockedCompareExchange64(
            &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics,_lambda_82c99ec4d19f9d15ecf1f83b9d813b96_>'::`2'::factory,
            (signed __int64)v7,
            0LL) )
    {
      v7 = 0LL;
      WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805CD120);
      v3 = 0LL;
    }
    winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Candidates(
      &`winrt::impl::call_factory<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics,_lambda_82c99ec4d19f9d15ecf1f83b9d813b96_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_1805CD118);
  }
  else
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_OnScreenInput_IKnownOnScreenInputUriSchemesStatics<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::Candidates(
      &v7,
      a2);
  }
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v7);
  return a2;
}
