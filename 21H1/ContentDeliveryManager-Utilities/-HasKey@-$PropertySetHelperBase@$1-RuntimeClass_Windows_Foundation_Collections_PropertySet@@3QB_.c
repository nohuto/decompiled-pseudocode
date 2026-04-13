/*
 * XREFs of ?HasKey@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEA_N@Z @ 0x1800769C8
 * Callers:
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x180071FB8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180072858 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180074400 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?GetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEBAJPEB_WPEAH_NH@Z @ 0x180077114 (-GetInt32@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_PropertySet@@3Q.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::HasKey(
        _QWORD *a1,
        const WCHAR *a2,
        bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rbx
  __int64 (__fastcall *v7)(_QWORD *, PVOID, char *); // rdi
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  _QWORD *v10; // rcx
  char v12[8]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v13; // [rsp+28h] [rbp-60h] BYREF
  const WCHAR *v14[3]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v15; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v14[1] = (const WCHAR *)-2LL;
  v14[0] = a2;
  *a3 = 0;
  v13 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v13);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14[2] = 0LL;
    v6 = v13;
    v7 = *(__int64 (__fastcall **)(_QWORD *, PVOID, char *))(*v13 + 64LL);
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v15, v14);
    v9 = v7(v6, v8[1].Reserved.Reserved1, v12);
    v5 = v9;
    if ( v9 >= 0 )
    {
      *a3 = v12[0] != 0;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
        (const char *)(unsigned int)v9);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v4);
  }
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v10 + 16LL))(v10, *v10);
  }
  return v5;
}
