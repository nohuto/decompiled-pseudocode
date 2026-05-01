/*
 * XREFs of ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180284080
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180166234 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ??$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAG$$QEAHAEAE@Z @ 0x1802835E0 (--$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x180283BEC (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 *     ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x180283E2C (-GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activat.c)
 */

__int64 __fastcall TabAppPolicySettings::IsActivatingIntoExistingGroup(
        TabAppPolicySettings *this,
        __int64 (__fastcall ***a2)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *),
        bool *a3)
{
  unsigned int v6; // ebx
  int PropertySetFromActivatedEventArgs; // eax
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int16 **v12; // rdx
  void *v13; // rbx
  int v15; // [rsp+20h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-58h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+38h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER v20; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  *a3 = 0;
  if ( a2 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    PropertySetFromActivatedEventArgs = TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(this, a2, &v17);
    v6 = PropertySetFromActivatedEventArgs;
    if ( PropertySetFromActivatedEventArgs >= 0 )
    {
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, (const WCHAR **)off_1804D0350, v8);
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
                  (HSTRING)v9[1].Reserved.Reserved1,
                  v10,
                  &v19) >= 0 )
      {
        v11 = v19;
        if ( !(_QWORD)v19 )
          v11 = *((_QWORD *)&v19 + 1);
        *a3 = v11 != 0;
      }
      pv = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      TabAppPolicySettings::GetCallerAppId((unsigned __int16 **)&pv, v12);
      v15 = -1;
      ((void (__fastcall *)(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *), int *))(*a2)[6])(
        a2,
        &v15);
      v18 = v15;
      v13 = pv;
      TabViewManagerTraceLogging::TabAppPolicySettings_IsActivatingIntoExistingGroup<unsigned short *,int,unsigned char &>(
        (const unsigned __int16 **)&pv,
        &v18,
        a3);
      if ( v13 )
        CoTaskMemFree(v13);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)PropertySetFromActivatedEventArgs);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)0x80004003LL);
  }
  return v6;
}
