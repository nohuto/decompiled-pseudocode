/*
 * XREFs of ??$make_agile_vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@cshell@@YA?AV?$com_ptr_t@V?$AgileVector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1801218F8
 * Callers:
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180132F0C (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 *     ??0ViewEventArgsForWindowingSettings@@QEAA@V?$map@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@UWindowingEnvironmentId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18028FB54 (--0ViewEventArgsForWindowingSettings@@QEAA@V-$map@V-$com_ptr_t@UIViewWrapper@ViewManagerInterop@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Make@V?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@5678@@Z @ 0x18011FA08 (--$Make@V-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEquality.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall cshell::make_agile_vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>(_QWORD *a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *> const &,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::permission>(&v4);
  if ( !v4 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      106LL,
      (__int64)"onecoreuap\\internal\\shell\\inc\\winrt_utility.h",
      (const char *)0x8007000ELL);
    __debugbreak();
  }
  *a1 = v4;
  return a1;
}
