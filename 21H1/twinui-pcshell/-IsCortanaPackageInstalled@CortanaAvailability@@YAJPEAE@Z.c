/*
 * XREFs of ?IsCortanaPackageInstalled@CortanaAvailability@@YAJPEAE@Z @ 0x18009B388
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801D6EDC (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008BF68 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D7200 (-GetStoreAppPFN@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaAvailability::IsCortanaPackageInstalled(CortanaAvailability *this, unsigned __int8 *a2)
{
  __int64 v3; // rbx
  int ActivationFactory; // eax
  const char *v5; // r9
  __int64 result; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  _BYTE v9[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  HSTRING v11; // [rsp+40h] [rbp-38h] BYREF
  HSTRING_HEADER v12; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v10 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v12,
    L"Windows.Internal.StateRepository.Package",
    0x29u,
    0x28u);
  v3 = v13;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  ActivationFactory = RoGetActivationFactory(v3, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &v10);
  try
  {
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        91LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      CortanaExperienceHelpers::GetStoreAppPFN(&v11);
      if ( !v11 )
      {
        *(_BYTE *)this = 0;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        return 0LL;
      }
      v9[0] = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _BYTE *))(*(_QWORD *)v10 + 360LL))(v10, 0LL, v11, v9);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        *(_BYTE *)this = v9[0];
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      100LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x18009B4C5LL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x67,
                           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
                           v5);
  }
  return result;
}
