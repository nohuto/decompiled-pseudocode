/*
 * XREFs of ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x180262580
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015DD0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180141CB4 (--$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ??$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAGAEAH$$QEAH$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@Z @ 0x180261A24 (--$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell.c)
 *     ?GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z @ 0x180261F6C (-GetCallerAppId@TabAppPolicySettings@@CAJPEAPEAG@Z.c)
 *     ?GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIPropertySet@Collections@Foundation@5@@Z @ 0x1802621AC (-GetPropertySetFromActivatedEventArgs@TabAppPolicySettings@@AEAAJPEAUIActivatedEventArgs@Activat.c)
 */

__int64 __fastcall TabAppPolicySettings::IsViewInActivationGroup(
        TabAppPolicySettings *this,
        int a2,
        __int64 (__fastcall ***a3)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *),
        bool *a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, void *, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **); // rdi
  int v14; // eax
  int PropertySetFromActivatedEventArgs; // eax
  __int64 v16; // rdx
  unsigned int v17; // r8d
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int16 **v21; // rdx
  void *v22; // rbx
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v24; // [rsp+30h] [rbp-59h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v25; // [rsp+38h] [rbp-51h] BYREF
  int v26; // [rsp+40h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-41h] BYREF
  __int64 v28; // [rsp+50h] [rbp-39h] BYREF
  int v29; // [rsp+58h] [rbp-31h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *v30; // [rsp+60h] [rbp-29h] BYREF
  __int128 v31; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-11h] BYREF
  HSTRING_HEADER v33; // [rsp+88h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v29 = a2;
  *a4 = 0;
  v28 = 0LL;
  v8 = *((_QWORD *)this + 8);
  v9 = *(__int64 (__fastcall **)(__int64, void *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v10 = v9(v8, &unk_18050EEA0, &GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8, &v28);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_20;
  }
  v24 = 0LL;
  v12 = v28;
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **))(*(_QWORD *)v28 + 56LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  v14 = v13(v12, (unsigned int)~a2, &v24);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v14);
LABEL_5:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    goto LABEL_20;
  }
  if ( v24 )
  {
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    PropertySetFromActivatedEventArgs = TabAppPolicySettings::GetPropertySetFromActivatedEventArgs(this, a3, &v25);
    v11 = PropertySetFromActivatedEventArgs;
    if ( PropertySetFromActivatedEventArgs < 0 )
    {
      v16 = 95LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
        (const char *)(unsigned int)PropertySetFromActivatedEventArgs);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      goto LABEL_5;
    }
    PropertySetFromActivatedEventArgs = (*(__int64 (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, _QWORD *))(*(_QWORD *)v24 + 48LL))(
                                          v24,
                                          v32);
    v11 = PropertySetFromActivatedEventArgs;
    if ( PropertySetFromActivatedEventArgs < 0 )
    {
      v16 = 98LL;
      goto LABEL_9;
    }
    v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)off_1804AAC50, v17);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v25,
                (HSTRING)v18[1].Reserved.Reserved1,
                v19,
                &v31) >= 0 )
    {
      v20 = v31 - v32[0];
      if ( (_QWORD)v31 == v32[0] )
        v20 = *((_QWORD *)&v31 + 1) - v32[1];
      *a4 = v20 == 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
  }
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  TabAppPolicySettings::GetCallerAppId((unsigned __int16 **)&pv, v21);
  v26 = -1;
  ((void (__fastcall *)(__int64 (__fastcall ***)(struct Windows::ApplicationModel::Activation::IActivatedEventArgs *, GUID *, __int64 *), int *))(*a3)[6])(
    a3,
    &v26);
  v30 = v24;
  LODWORD(v25) = v26;
  v22 = pv;
  TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup<unsigned short *,int &,int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,unsigned char &>(
    (const unsigned __int16 **)&pv,
    &v29,
    (int *)&v25,
    &v30,
    a4);
  if ( v22 )
    CoTaskMemFree(v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
  v11 = 0;
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return v11;
}
