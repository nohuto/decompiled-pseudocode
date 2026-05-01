/*
 * XREFs of ??$call@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@?$factory_cache_entry@UUISettings@ViewManagement@UI@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?AUUISettings@ViewManagement@UI@Windows@2@AEAV_lambda_f92aa4e0a61c3892856266e5a8e834f7_@@@Z @ 0x1800A53D4
 * Callers:
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800A77B0 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180060B80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x180091E7D (WINRT_InterlockedPushEntrySList.c)
 *     ??$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUUISettings@ViewManagement@UI@23@XZ @ 0x1800A4F24 (--$ActivateInstance@UUISettings@ViewManagement@UI@Windows@winrt@@@IActivationFactory@Foundation@.c)
 *     ??$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA?AUIActivationFactory@Foundation@Windows@0@AEBUhstring@param@0@@Z @ 0x1800A554C (--$get_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@winrt@@YA-AUIActivation.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C9158 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x1801ADA08 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
struct IUnknown *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory>::call<_lambda_f92aa4e0a61c3892856266e5a8e834f7_ &>(
        __int64 a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+20h] [rbp-60h] BYREF
  struct IUnknown *v6; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v6 = a2;
  v7[2] = &qword_1805CBF78;
  _InterlockedIncrement64(&qword_1805CBF78);
  if ( `winrt::impl::call_factory<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory,_lambda_f92aa4e0a61c3892856266e5a8e834f7_>'::`2'::factory )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
      &`winrt::impl::call_factory<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory,_lambda_f92aa4e0a61c3892856266e5a8e834f7_>'::`2'::factory,
      a2);
    _InterlockedDecrement64(&qword_1805CBF78);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805CBF78);
    v7[0] = L"Windows.UI.ViewManagement.UISettings";
    v7[1] = 36LL;
    winrt::param::hstring::hstring(string, (__int64)v7);
    winrt::get_activation_factory<winrt::Windows::Foundation::IActivationFactory>(&v5, string);
    v3 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v5, &v6);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref((__int64 *)&v6);
    if ( v3 )
    {
      v7[3] = &qword_1805CBF78;
      _InterlockedIncrement64(&qword_1805CBF78);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory,_lambda_f92aa4e0a61c3892856266e5a8e834f7_>'::`2'::factory,
              v5,
              0LL) )
      {
        v5 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805CBF80);
      }
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
        &`winrt::impl::call_factory<winrt::Windows::UI::ViewManagement::UISettings,winrt::Windows::Foundation::IActivationFactory,_lambda_f92aa4e0a61c3892856266e5a8e834f7_>'::`2'::factory,
        a2);
      _InterlockedDecrement64(&qword_1805CBF78);
    }
    else
    {
      winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::ViewManagement::UISettings>(
        &v5,
        a2);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v5);
  }
  return a2;
}
