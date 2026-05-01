/*
 * XREFs of ?UpdateIcon@AppViewDataSourceAdapterBase@@MEAAXPEAUIApplicationView@@PEAUIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803401A0
 * Callers:
 *     ?UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIRootSwitchItem@Multitasking@456@@Z @ 0x1803407D0 (-UpdateTabIcon@AppViewDataSourceAdapter@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007D4C4 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x18033C188 (-CreateInstance@AppViewIconFactory@@SAJPEAUIApplicationView@@PEAUIApplicationViewIconLoader@@AEB.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall AppViewDataSourceAdapterBase::UpdateIcon(
        AppViewDataSourceAdapterBase *this,
        struct IApplicationView *a2,
        const struct _GUID *a3)
{
  struct IApplicationViewIconLoader *v6; // rdx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rbx
  HSTRING_HEADER *v14; // rdi
  int v15; // eax
  int v16; // eax
  void *v17; // [rsp+20h] [rbp-60h] BYREF
  const WCHAR *v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  const WCHAR *v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER v23; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v17 = 0LL;
  v6 = (struct IApplicationViewIconLoader *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v17 = 0LL;
    v7 = AppViewIconFactory::CreateInstance(a2, v6, a3, &v17);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        511LL,
        (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
  }
  else if ( *((_QWORD *)this + 6) )
  {
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v19);
    if ( v19 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v19 + 24LL))(v19, &v18);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          519LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      v9 = *((_QWORD *)this + 6);
      v17 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v9 + 48LL))(v9, (unsigned int)v18, &v17);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          520LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
    else
    {
      v20 = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
      v21 = -1LL;
      v22 = -1LL;
      v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, const WCHAR **))(*(_QWORD *)a2 + 136LL))(a2, &v20);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          525LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      v18 = v20;
      v13 = *((_QWORD *)this + 6);
      v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v18, v12);
      v17 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, PVOID, void **))(*(_QWORD *)v13 + 56LL))(
              v13,
              v14[1].Reserved.Reserved1,
              &v17);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          526LL,
          (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
          (const char *)(unsigned int)v15);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  }
  v16 = (*(__int64 (__fastcall **)(const struct _GUID *, void *))(*(_QWORD *)&a3->Data1 + 96LL))(a3, v17);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      530LL,
      (__int64)"internal\\pcshellshell\\private\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
      (const char *)(unsigned int)v16);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
}
