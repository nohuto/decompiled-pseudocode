/*
 * XREFs of ??$call@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@?$factory_cache_entry@UPowerManager@Power@System@Windows@winrt@@UIPowerManagerStatics@2345@@impl@winrt@@QEAA?AW4EnergySaverStatus@Power@System@Windows@2@AEAV_lambda_64579cffbd4724e9a4ba09ce2deae2f2_@@@Z @ 0x18009A8F8
 * Callers:
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x18009B3F4 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18003E394 (-unconditional_release_ref@-$com_ptr@UDragDropSimulatorComponent@implementation@DragDropSimulato.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180060B80 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     WINRT_InterlockedPushEntrySList @ 0x180091E7D (WINRT_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIPowerManagerStatics@Power@System@Windows@winrt@@@winrt@@YA?AUIPowerManagerStatics@Power@System@Windows@0@AEBUhstring@param@0@@Z @ 0x18009AA5C (--$get_activation_factory@UIPowerManagerStatics@Power@System@Windows@winrt@@@winrt@@YA-AUIPowerM.c)
 *     ?EnergySaverStatus@?$consume_Windows_System_Power_IPowerManagerStatics@UIPowerManagerStatics@Power@System@Windows@winrt@@@impl@winrt@@QEBA?AW40Power@System@Windows@3@XZ @ 0x18009B71C (-EnergySaverStatus@-$consume_Windows_System_Power_IPowerManagerStatics@UIPowerManagerStatics@Pow.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800C9158 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIAgileObject@impl@winrt@@@3@XZ @ 0x1801ADA08 (--$try_as@UIAgileObject@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIAgile.c)
 */

// Hidden C++ exception states: #wind=3
__int64 winrt::impl::factory_cache_entry<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics>::call<_lambda_64579cffbd4724e9a4ba09ce2deae2f2_ &>()
{
  __int64 result; // rax
  __int64 v1; // rbx
  unsigned int v2; // ebx
  signed __int64 v3; // [rsp+20h] [rbp-60h] BYREF
  __int64 v4; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string[4]; // [rsp+50h] [rbp-30h] BYREF

  v5[2] = &qword_1805CBF58;
  _InterlockedIncrement64(&qword_1805CBF58);
  if ( `winrt::impl::call_factory<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_64579cffbd4724e9a4ba09ce2deae2f2_>'::`2'::factory )
  {
    result = winrt::impl::consume_Windows_System_Power_IPowerManagerStatics<winrt::Windows::System::Power::IPowerManagerStatics>::EnergySaverStatus(&`winrt::impl::call_factory<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_64579cffbd4724e9a4ba09ce2deae2f2_>'::`2'::factory);
    _InterlockedDecrement64(&qword_1805CBF58);
  }
  else
  {
    _InterlockedDecrement64(&qword_1805CBF58);
    v5[0] = L"Windows.System.Power.PowerManager";
    v5[1] = 33LL;
    winrt::param::hstring::hstring(string, (__int64)v5);
    winrt::get_activation_factory<winrt::Windows::System::Power::IPowerManagerStatics>(&v3, string);
    v1 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IAgileObject>(&v3, &v4);
    if ( v4 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>::unconditional_release_ref(&v4);
    if ( v1 )
    {
      v5[3] = &qword_1805CBF58;
      _InterlockedIncrement64(&qword_1805CBF58);
      if ( !_InterlockedCompareExchange64(
              &`winrt::impl::call_factory<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_64579cffbd4724e9a4ba09ce2deae2f2_>'::`2'::factory,
              v3,
              0LL) )
      {
        v3 = 0LL;
        WINRT_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1805CBF60);
      }
      v2 = winrt::impl::consume_Windows_System_Power_IPowerManagerStatics<winrt::Windows::System::Power::IPowerManagerStatics>::EnergySaverStatus(&`winrt::impl::call_factory<winrt::Windows::System::Power::PowerManager,winrt::Windows::System::Power::IPowerManagerStatics,_lambda_64579cffbd4724e9a4ba09ce2deae2f2_>'::`2'::factory);
      _InterlockedDecrement64(&qword_1805CBF58);
    }
    else
    {
      v2 = winrt::impl::consume_Windows_System_Power_IPowerManagerStatics<winrt::Windows::System::Power::IPowerManagerStatics>::EnergySaverStatus(&v3);
    }
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v3);
    return v2;
  }
  return result;
}
