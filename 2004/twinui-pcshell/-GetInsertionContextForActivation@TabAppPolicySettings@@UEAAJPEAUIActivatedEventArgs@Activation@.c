/*
 * XREFs of ?GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@5@@Z @ 0x180283CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x18006EAC0 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180166234 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x180169178 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     ??$MakeAndInitialize@VApplicationViewTabInsertionContext@@UIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x1802834F0 (--$MakeAndInitialize@VApplicationViewTabInsertionContext@@UIApplicationViewTabInsertionContext@V.c)
 *     ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x180283E2C (-GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activat.c)
 */

__int64 __fastcall TabAppPolicySettings::GetInsertionContextForActivation(
        TabAppPolicySettings *this,
        struct Windows::ApplicationModel::Activation::IActivatedEventArgs *a2,
        struct Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext **a3)
{
  int PropertySetFromActivatedEventArgs; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rdx
  HSTRING_HEADER *v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r8d
  __int128 v14; // xmm6
  HSTRING_HEADER *v15; // rax
  __int64 v16; // r8
  void *v18; // [rsp+28h] [rbp-39h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+30h] [rbp-31h] BYREF
  HSTRING_HEADER v20; // [rsp+38h] [rbp-29h] BYREF
  __int128 v21; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER v22; // [rsp+68h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  PropertySetFromActivatedEventArgs = TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(this, a2, &v19);
  v7 = PropertySetFromActivatedEventArgs;
  if ( PropertySetFromActivatedEventArgs >= 0 )
  {
    v18 = 0LL;
    v8 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v18);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)off_1804D0348, v9);
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v19,
                  (HSTRING)v11[1].Reserved.Reserved1,
                  v12,
                  &v21) < 0
        || (v14 = v21,
            v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, (const WCHAR **)off_1804D0348, v13),
            *(_OWORD *)&v20.Reserved.Reserved1 = v14,
            v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
                   (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
                   (HSTRING)v15[1].Reserved.Reserved1,
                   v16,
                   (__int128 *)&v20),
            v7 = v8,
            v8 >= 0) )
      {
        v20.Reserved.Reserved1 = v18;
        v8 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewTabInsertionContext,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Windows::Foundation::Collections::IPropertySet *>(
               (__int64 **)a3,
               (__int64 *)&v20);
        v7 = v8;
        if ( v8 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          v7 = 0;
          goto LABEL_12;
        }
        v10 = 129LL;
      }
      else
      {
        v10 = 125LL;
      }
    }
    else
    {
      v10 = 120LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)PropertySetFromActivatedEventArgs);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return v7;
}
