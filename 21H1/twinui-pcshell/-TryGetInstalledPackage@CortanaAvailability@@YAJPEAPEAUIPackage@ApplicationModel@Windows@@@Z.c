/*
 * XREFs of ?TryGetInstalledPackage@CortanaAvailability@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1801E2938
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801D6EDC (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008BF68 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x18008D902 (WINRT_WindowsGetStringRawBuffer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801C41EC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ @ 0x1801D094C (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801D66B0 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ?GetStoreAppPFN@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D7200 (-GetStoreAppPFN@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall CortanaAvailability::TryGetInstalledPackage(
        CortanaAvailability *this,
        struct Windows::ApplicationModel::IPackage **a2)
{
  int v3; // eax
  bool *v4; // rdx
  CortanaExperienceHelpers::Testing *v5; // rcx
  char IsTestAppConfiguredAsReplacement; // al
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, PVOID, __int64 *); // rdi
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  HSTRING *StoreAppPFN; // rax
  unsigned int v13; // r8d
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING *); // rdi
  int v20; // eax
  HSTRING v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+30h] [rbp-68h] BYREF
  HSTRING string; // [rsp+38h] [rbp-60h] BYREF
  __int64 v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h] BYREF
  PCWSTR StringRawBuffer; // [rsp+58h] [rbp-40h] BYREF
  HSTRING_HEADER v31; // [rsp+60h] [rbp-38h] BYREF
  __int64 v32; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v31,
    L"Windows.Management.Deployment.PackageManager",
    0x2Du,
    0x2Cu);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         v32,
         &v29);
  v5 = retaddr;
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      57LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v3);
  v28 = 0LL;
  IsTestAppConfiguredAsReplacement = CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement(v5, v4);
  v7 = v29;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, __int64 *))(*(_QWORD *)v29 + 160LL);
  if ( IsTestAppConfiguredAsReplacement )
  {
    winrt::hstring::hstring((winrt::hstring *)&string, L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m");
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(string, 0LL);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, &StringRawBuffer, v9);
    v11 = v8(v7, 0LL, v10[1].Reserved.Reserved1, &v28);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        62LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)v11);
    v32 = 0LL;
  }
  else
  {
    StoreAppPFN = (HSTRING *)CortanaExperienceHelpers::GetStoreAppPFN((winrt::hstring *)&string);
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*StoreAppPFN, 0LL);
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, &StringRawBuffer, v13);
    v15 = v8(v7, 0LL, v14[1].Reserved.Reserved1, &v28);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        66LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)v15);
    v32 = 0LL;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&string);
  v27 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, &v27);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      70LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v16);
  v25[0] = 0;
  v17 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 56LL))(v27, v25);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      73LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
      (const char *)(unsigned int)v17);
  if ( v25[0] )
  {
    string = 0LL;
    v18 = v27;
    v19 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 48LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
    v20 = v19(v18, &string);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        78LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)v20);
    v21 = string;
    if ( string )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8LL))(string);
      v21 = string;
    }
    *(_QWORD *)this = v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&string);
  }
  v22 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  return 0LL;
}
