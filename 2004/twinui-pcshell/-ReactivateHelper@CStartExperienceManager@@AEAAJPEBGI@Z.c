/*
 * XREFs of ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x1801D4E64
 * Callers:
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x1801D4710 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1801D5700 (-TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Inter.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x180011734 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019594 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006EBA8 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartExperienceManager::ReactivateHelper(
        CStartExperienceManager *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // r8d
  HSTRING v12; // rbx
  HSTRING_HEADER *v13; // rax
  HSTRING v15; // [rsp+40h] [rbp-40h] BYREF
  HSTRING v16; // [rsp+48h] [rbp-38h] BYREF
  const WCHAR *v17; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v17 = a2;
  v15 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v19,
         &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v16 = v15;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_1804D0040, v7);
    v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
            (HSTRING)v8[1].Reserved.Reserved1,
            v9,
            a3);
    v6 = v10;
    if ( v10 >= 0 )
    {
      v12 = v15;
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v17, v11);
      v6 = ExperienceManagerUtils::RaiseReactivatedEvent(
             *((ExperienceManagerUtils **)this + 42),
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 110),
             *((HSTRING *)this + 40),
             *((HSTRING *)this + 41),
             (HSTRING)v13[1].Reserved.Reserved1,
             v12);
      if ( v6 >= 0 )
        v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x374,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x372,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v6;
}
