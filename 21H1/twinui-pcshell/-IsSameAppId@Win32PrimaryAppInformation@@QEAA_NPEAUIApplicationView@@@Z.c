/*
 * XREFs of ?IsSameAppId@Win32PrimaryAppInformation@@QEAA_NPEAUIApplicationView@@@Z @ 0x1803BB630
 * Callers:
 *     ?IsSameAppId@Win32PrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z @ 0x1803BB750 (-IsSameAppId@Win32PrimaryAppProxy@@UEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x1800159FC (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$ExpandEnvironmentStringsW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG@Z @ 0x1803B8C4C (--$ExpandEnvironmentStringsW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z.c)
 *     ??$GetFullPathNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBGPEAPEBG@Z @ 0x1803B8CF8 (--$GetFullPathNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTask.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall Win32PrimaryAppInformation::IsSameAppId(Win32PrimaryAppInformation *this, struct IApplicationView *a2)
{
  bool v3; // bl
  void *v4; // rcx
  __int64 *v5; // rax
  LPVOID pv[2]; // [rsp+20h] [rbp-10h] BYREF
  LPVOID v8; // [rsp+48h] [rbp+18h] BYREF
  LPVOID v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+28h] BYREF

  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 **))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v10);
  if ( v10 )
  {
    Win32ApplicationViewHelpers::GetApplicationViewImageName((__int64)&v8, v10);
    v4 = v8;
    if ( v8 )
    {
      v5 = wil::ExpandEnvironmentStringsW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
             pv,
             (__int64)v8);
      wil::GetFullPathNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
        &v9,
        *v5);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      if ( *((_QWORD *)this + 3) >= 8uLL )
        this = *(Win32PrimaryAppInformation **)this;
      v3 = _o__wcsicmp((const wchar_t *)v9, (const wchar_t *)this) == 0;
      if ( v9 )
        CoTaskMemFree(v9);
      v4 = v8;
    }
    else
    {
      v3 = 0;
    }
    if ( v4 )
      CoTaskMemFree(v4);
  }
  else
  {
    v3 = 0;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v10);
  return v3;
}
