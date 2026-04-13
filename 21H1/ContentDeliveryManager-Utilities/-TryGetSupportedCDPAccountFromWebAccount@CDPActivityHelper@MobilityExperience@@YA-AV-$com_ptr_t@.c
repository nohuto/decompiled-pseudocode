/*
 * XREFs of ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x180048E48
 * Callers:
 *     ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180049194 (-GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$vector@V-.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x180048C18 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD **))
{
  __int64 (__fastcall **v4)(_QWORD, GUID *, _QWORD **); // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  _QWORD *v7; // rbx
  __int64 (__fastcall *v8)(_QWORD *, HSTRING *); // rdi
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  char *StringRawBuffer; // rax
  __int64 (__fastcall **v12)(_QWORD, GUID *, _QWORD **); // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, HSTRING *); // rdi
  int v18; // eax
  const WCHAR *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  void **v22; // rcx
  int v23; // eax
  void **v24; // rcx
  HSTRING v26; // [rsp+40h] [rbp-31h] BYREF
  HSTRING string; // [rsp+48h] [rbp-29h] BYREF
  __int64 v28; // [rsp+50h] [rbp-21h] BYREF
  _QWORD *v29; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v30[3]; // [rsp+60h] [rbp-11h] BYREF
  void *v31[3]; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 v32; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30[1] = -2LL;
  v30[2] = a1;
  *a1 = 0LL;
  v4 = *a2;
  v29 = 0LL;
  v5 = (*v4)(a2, &GUID_7b56d6f8_990b_4eb5_94a7_5621f3a8b824, &v29);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x194,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v5);
    goto LABEL_30;
  }
  string = 0LL;
  v7 = v29;
  v8 = *(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v29 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v9 = v8(v7, &string);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x197,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v9);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x19B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  CreativeFramework::CommonHelper::StringUtils::WStringToUtf8String((__int64)v31, StringRawBuffer);
  v12 = *a2;
  v28 = 0LL;
  v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **), __int64 *))v12[6])(a2, &v28);
  v14 = retaddr;
  if ( v13 < 0 )
    goto LABEL_31;
  v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v28)(
          v28,
          &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
          v30);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x18004918CLL);
  }
  v26 = 0LL;
  v16 = v30[0];
  v17 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30[0] + 56LL);
  WindowsDeleteString(0LL);
  v26 = 0LL;
  v18 = v17(v16, &v26);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = WindowsGetStringRawBuffer(v26, 0LL);
  v20 = CompareStringOrdinal(v19, -1, L"consumers", -1, 1);
  v21 = *a1;
  *a1 = 0LL;
  if ( v20 == 2 )
  {
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = v31;
    if ( v32 >= 0x10 )
      v22 = (void **)v31[0];
    v23 = CDPCreateMicrosoftAccount(v22, a1);
    if ( v23 >= 0 )
      goto LABEL_18;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)(unsigned int)v23);
    goto LABEL_29;
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v24 = v31;
  if ( v32 >= 0x10 )
    v24 = (void **)v31[0];
  CDPCreateAzureActiveDirectoryAccount(v24, a1);
LABEL_18:
  WindowsDeleteString(v26);
  v26 = 0LL;
  if ( v30[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v32 >= 0x10 )
    operator delete(v31[0]);
  v32 = 15LL;
  v31[2] = 0LL;
  LOBYTE(v31[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  if ( v29 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v29 + 16LL))(v29, *v29);
  return a1;
}
