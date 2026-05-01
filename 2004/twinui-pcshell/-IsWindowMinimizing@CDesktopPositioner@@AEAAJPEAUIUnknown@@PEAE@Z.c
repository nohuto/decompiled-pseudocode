/*
 * XREFs of ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1803EC6A8
 * Callers:
 *     _lambda_c6623334da8ed11a0378a692878c9731_::operator() @ 0x1803EA7E0 (_lambda_c6623334da8ed11a0378a692878c9731_--operator().c)
 *     _lambda_cec5c726396bbc9cebe1730e9afdb84e_::operator() @ 0x1803EAC70 (_lambda_cec5c726396bbc9cebe1730e9afdb84e_--operator().c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18002B6E0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::IsWindowMinimizing(
        CDesktopPositioner *this,
        struct IUnknown *a2,
        unsigned __int8 *a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // r8
  int v7; // eax
  unsigned __int8 v8; // cl
  unsigned __int8 v10[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  *a3 = 0;
  v11 = 0LL;
  if ( a2 )
  {
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, _QWORD))QueryInterface)(
           a2,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v11) >= 0 )
    {
      v12 = v11;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
      v14 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"VoicePositionerMinimising",
        0x1Au,
        0x19u);
      v7 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(&v12, v14, v6, v10);
      v8 = v10[0];
      if ( v7 < 0 )
        v8 = 0;
      *a3 = v8;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return 0LL;
}
