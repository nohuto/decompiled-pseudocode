/*
 * XREFs of ?CreateAltTabProxyWindow@CInsightsExperienceManager@@AEAAXXZ @ 0x1801EFD5C
 * Callers:
 *     ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x1801F0064 (-DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180016018 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020628 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800809A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CInsightsExperienceManager::CreateAltTabProxyWindow(
        CInsightsExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  void *lpParam; // rdi
  HWND Window; // rax
  WNDCLASSEXW v6; // [rsp+68h] [rbp+7h] BYREF
  LPCWSTR lpWindowName; // [rsp+C8h] [rbp+67h] BYREF

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 11);
  lpParam = 0LL;
  if ( v3 )
    lpParam = (void *)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
  v6.cbSize = 80;
  memset_0(&v6.style, 0, 0x4CuLL);
  v6.style = 512;
  v6.lpfnWndProc = (WNDPROC)CInsightsExperienceManager::s_AltTabProxyWndProc;
  v6.hInstance = &_ImageBase;
  v6.lpszClassName = L"Shell_InsightsProxy";
  v6.cbWndExtra = 8;
  RegisterClassExW(&v6);
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &lpWindowName,
    (__int64)L"Smart Insights",
    -1LL);
  Window = CreateWindowExW(
             0x240000u,
             v6.lpszClassName,
             lpWindowName,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             &_ImageBase,
             lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 40,
    Window);
  if ( lpWindowName )
    CoTaskMemFree((LPVOID)lpWindowName);
}
