/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801CF5C0
 * Callers:
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1801D122C (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015DD0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x180080208 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008D902 (WINRT_WindowsGetStringRawBuffer.c)
 *     _Init_thread_footer @ 0x18008DC88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008DCF0 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D0124 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  void *lpParam; // r14
  const WCHAR *StringRawBuffer; // rbx
  HRESULT v5; // ebx
  HWND Window; // rax
  HWND v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  WNDCLASSEXW v10; // [rsp+70h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  LPCWSTR lpWindowName; // [rsp+F8h] [rbp+10h] BYREF
  void *ppv; // [rsp+100h] [rbp+18h] BYREF
  LPCWSTR v14; // [rsp+108h] [rbp+20h]

  try
  {
    lpParam = (void *)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 29), a2);
    v10.cbSize = 80;
    memset_0(&v10.style, 0, 0x4CuLL);
    v10.style = 512;
    v10.lpfnWndProc = (WNDPROC)CortanaStoreAppExperienceManager::CortanaAltTabProxyWndProc;
    v10.hInstance = &_ImageBase;
    v10.lpszClassName = L"Shell_CortanaStoreAppProxy";
    v10.cbWndExtra = 8;
    RegisterClassExW(&v10);
    if ( dword_1805A2314 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 4LL) )
    {
      Init_thread_header(&dword_1805A2314);
      if ( dword_1805A2314 == -1 )
      {
        CortanaExperienceHelpers::GetStoreCortanaAumId(&string);
        atexit(CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow_::_3_::_dynamic_atexit_destructor_for__cortanaAppAumid__);
        Init_thread_footer(&dword_1805A2314);
      }
    }
    lpWindowName = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&lpWindowName,
      0LL);
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(string, 0LL);
    lpWindowName = 0LL;
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v5 = SHCreateItemInKnownFolder(
           &FOLDERID_AppsFolder,
           0x4100u,
           StringRawBuffer,
           &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
           &ppv);
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(void *, _QWORD, LPCWSTR *))(*(_QWORD *)ppv + 40LL))(ppv, 0LL, &lpWindowName);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4CD,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    Window = CreateWindowExW(
               0,
               v10.lpszClassName,
               lpWindowName,
               0x8000000u,
               0x80000000,
               0x80000000,
               0x80000000,
               0x80000000,
               0LL,
               0LL,
               &_ImageBase,
               lpParam);
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      (HWND *)this + 48,
      Window);
    v7 = CreateWindowExW(
           0x200000u,
           v10.lpszClassName,
           lpWindowName,
           0x80000000,
           0x80000000,
           0x80000000,
           0x80000000,
           0x80000000,
           *((HWND *)this + 48),
           0LL,
           &_ImageBase,
           lpParam);
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      (HWND *)this + 47,
      v7);
    if ( lpWindowName )
    {
      v14 = lpWindowName;
      CoTaskMemFree((LPVOID)lpWindowName);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(lpWindowName) = wil::details::in1diag3::Return_CaughtException(
                              retaddr,
                              (void *)0x4D9,
                              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                              v8);
    return (unsigned int)lpWindowName;
  }
  return result;
}
