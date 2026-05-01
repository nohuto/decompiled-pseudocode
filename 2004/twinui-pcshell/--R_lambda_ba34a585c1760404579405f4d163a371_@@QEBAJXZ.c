/*
 * XREFs of ??R_lambda_ba34a585c1760404579405f4d163a371_@@QEBAJXZ @ 0x1803CE73C
 * Callers:
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803CF1A0 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x18006EBA8 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _lambda_ba34a585c1760404579405f4d163a371_::operator()(__int64 a1)
{
  HRESULT v2; // ebx
  int v3; // eax
  unsigned int v4; // r8d
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  unsigned int v7; // ebx
  Windows::Internal::ShellHelpers::PropertySetHelper *v8; // rdi
  HSTRING_HEADER *v9; // rax
  __int64 v10; // r8
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-48h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v2 = IUnknown_QueryService(
         **(IUnknown ***)a1,
         &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
         &GUID_8eb65c84_1605_5214_a524_6d0d6c263c40,
         &ppvOut);
  if ( v2 >= 0 )
  {
    v13 = 0;
    v3 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, &v13);
    v2 = v3;
    if ( v3 >= 0 )
    {
      v7 = v13;
      v8 = *(Windows::Internal::ShellHelpers::PropertySetHelper **)(a1 + 8);
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, (const WCHAR **)off_1804D0440, v4);
      v11 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
              v8,
              (HSTRING)v9[1].Reserved.Reserved1,
              v10,
              v7);
      v2 = v11;
      v16 = 0LL;
      if ( v11 >= 0 )
        v2 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE3,
          (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
          (const char *)(unsigned int)v11);
      if ( v2 >= 0 )
      {
        v2 = 0;
        goto LABEL_11;
      }
      v5 = (unsigned int)v2;
      v6 = 327LL;
    }
    else
    {
      v5 = (unsigned int)v3;
      v6 = 326LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)v5);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v2;
}
