/*
 * XREFs of ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x180270668
 * Callers:
 *     ?DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x18026E8A0 (-DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 *     ?GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x18026FD20 (-GetDisplayNameForShellTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Wind.c)
 * Callees:
 *     ?GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIWin32ApplicationView@@@Z @ 0x180015FCC (-GetApplicationViewImageName@Win32ApplicationViewHelpers@@YA-AV-$unique_any_t@V-$unique_storage@.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18026F434 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::GetShellItemForView(
        TabViewManager *this,
        struct IApplicationView *a2,
        struct IShellItem **a3)
{
  HRESULT v5; // eax
  LPVOID v6; // rbx
  int (__fastcall *v7)(LPVOID, PCWSTR, struct IShellItem **); // rdi
  PCWSTR StringRawBuffer; // rax
  HRESULT v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  const WCHAR *v12; // rax
  HRESULT v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PCWSTR pszPath[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v20; // [rsp+70h] [rbp+18h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+20h] BYREF

  string = (HSTRING)this;
  *a3 = 0LL;
  ppv = 0LL;
  v5 = CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_de25675a_72de_44b4_9373_05170450c140, &ppv);
  try
  {
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        3078LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v5);
    GetAumid(&string, (__int64)a2);
    (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 **))a2)(
      a2,
      &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
      &v20);
    if ( v20 )
    {
      v6 = ppv;
      v7 = *(int (__fastcall **)(LPVOID, PCWSTR, struct IShellItem **))(*(_QWORD *)ppv + 64LL);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( v7(v6, StringRawBuffer, a3) < 0 )
      {
        Win32ApplicationViewHelpers::GetApplicationViewImageName((__int64)pszPath, v20);
        v9 = SHCreateItemFromParsingName(pszPath[0], 0LL, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)a3);
        if ( v9 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            3090LL,
            (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
            (const char *)(unsigned int)v9);
        if ( pszPath[0] )
          CoTaskMemFree((LPVOID)pszPath[0]);
      }
    }
    else
    {
      v12 = WindowsGetStringRawBuffer(string, 0LL);
      v13 = SHCreateItemInKnownFolder(
              &FOLDERID_AppsFolder,
              0x4100u,
              v12,
              &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
              (void **)a3);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          3096LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
        return TabViewManager::GetShellItemForView_::_1_::dtor_0(v15, v14, v16);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    WindowsDeleteString(string);
    string = 0LL;
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC1C,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                           v10);
  }
  return result;
}
