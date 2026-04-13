/*
 * XREFs of ?SetInt32@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEB_WH@Z @ 0x1800794B0
 * Callers:
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180077C34 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetInt32(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, PVOID, __int64, _BYTE *); // rsi
  __int64 v12; // rdi
  HSTRING_HEADER *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _BYTE v17[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v20[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v20[1] = (const WCHAR *)-2LL;
  v20[0] = a2;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)v4);
    return v4;
  }
  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 80LL))(
         *(_QWORD *)(a1 + 8),
         a3,
         &v18);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v5);
LABEL_5:
    v6 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v4;
  }
  v17[0] = 0;
  v19 = 0LL;
  v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1)(
         *(_QWORD *)a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v19);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = 352LL;
    goto LABEL_9;
  }
  v10 = v19;
  v11 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, _BYTE *))(*(_QWORD *)v19 + 80LL);
  v12 = v18;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, v20);
  v7 = v11(v10, v13[1].Reserved.Reserved1, v12, v17);
  v4 = v7;
  v22 = 0LL;
  if ( v7 < 0 )
  {
    v8 = 353LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v7);
    v9 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_5;
  }
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0;
}
