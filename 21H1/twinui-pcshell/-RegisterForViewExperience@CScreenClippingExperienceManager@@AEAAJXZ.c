/*
 * XREFs of ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801C6C48
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801C6EA8 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008BF68 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x1801C50F8 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180451550 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RegisterForViewExperience(CScreenClippingExperienceManager *this)
{
  CScreenClippingExperienceManager *ScreenClippingAUMID; // rax
  HSTRING *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  HSTRING v8; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ScreenClippingAUMID = (CScreenClippingExperienceManager *)anonymous_namespace_::GetScreenClippingAUMID(&v8);
  v3 = (HSTRING *)((char *)this + 336);
  if ( (CScreenClippingExperienceManager *)((char *)this + 336) != ScreenClippingAUMID )
  {
    v4 = *(HSTRING *)ScreenClippingAUMID;
    *(_QWORD *)ScreenClippingAUMID = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)this + 42);
    *v3 = v4;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ScreenClipping",
    0x30u,
    0x2Fu);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CScreenClippingExperienceManager *)((char *)this + 56),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
         *((struct IServiceProvider **)this + 33),
         *v3,
         v10);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x226,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
