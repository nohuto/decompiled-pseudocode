/*
 * XREFs of ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008AD2C
 * Callers:
 *     ?Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008AD20 (-Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800276AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@_NUtype@?$MapToSmartType@EX@details@wil@@@wil@@YA?AUtype@?$MapToSmartType@EX@details@0@PEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18004DA90 (--$wait_for_completion@_NUtype@-$MapToSmartType@EX@details@wil@@@wil@@YA-AUtype@-$MapToSmartType.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180068AD4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180084400 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180084400.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008A518 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB7E1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUri(void **this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, PVOID, PVOID, __int64 *); // r15
  void **v8; // rax
  PVOID Reserved1; // r14
  _QWORD *v10; // rax
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, PVOID, void *, _QWORD); // r13
  unsigned int v16; // r15d
  void *v17; // r12
  const WCHAR *v18; // r14
  char *v19; // rdi
  unsigned int v20; // eax
  HSTRING_HEADER *v21; // rcx
  HSTRING_HEADER *v22; // rax
  int v23; // eax
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  UINT32 applicationUserModelIdLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v28[2]; // [rsp+58h] [rbp-B0h] BYREF
  void *v29[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+78h] [rbp-90h]
  unsigned __int64 v31; // [rsp+80h] [rbp-88h]
  HSTRING_HEADER v32; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp-68h]
  HSTRING_HEADER v34; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-48h]
  WCHAR applicationUserModelId[136]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v28[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v28);
  v26 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v28[0] + 88LL))(v28[0], &v26);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_35;
  v4 = 7LL;
  v31 = 7LL;
  v30 = 0LL;
  LOWORD(v29[0]) = 0;
  v5 = -1LL;
  if ( *((_BYTE *)this + 113) && v29 != this + 5 )
  {
    std::wstring::assign(v29, this + 5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v4 = v31;
  }
  v27 = 0LL;
  v6 = v26;
  v7 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 *))(*(_QWORD *)v26 + 48LL);
  v27 = 0LL;
  v8 = v29;
  if ( v4 >= 8 )
    v8 = (void **)v29[0];
  *(_QWORD *)applicationUserModelIdLength = v8;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &v34,
                (const WCHAR **)applicationUserModelIdLength)[1].Reserved.Reserved1;
  v10 = this + 1;
  if ( (unsigned __int64)this[4] >= 8 )
    v10 = (_QWORD *)*v10;
  *(_QWORD *)applicationUserModelIdLength = v10;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)applicationUserModelIdLength);
  v12 = v7(v6, v11[1].Reserved.Reserved1, Reserved1, &v27);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18008B095LL);
  }
  wil::wait_for_completion<bool,wil::details::MapToSmartType<unsigned char,void>::type>(&v24, v27);
  if ( !*((_BYTE *)this + 112) )
    goto LABEL_25;
  v14 = v26;
  v15 = *(__int64 (__fastcall **)(__int64, PVOID, void *, _QWORD))(*(_QWORD *)v26 + 56LL);
  v16 = *((_DWORD *)this + 29);
  v17 = this[13];
  v18 = (const WCHAR *)(this + 9);
  if ( (unsigned __int64)this[12] >= 8 )
    v18 = *(const WCHAR **)v18;
  v19 = (char *)(this + 5);
  if ( *((_QWORD *)v19 + 3) >= 8uLL )
    v19 = *(char **)v19;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength[0] = 130;
  v20 = FormatApplicationUserModelId((PCWSTR)v19, v18, applicationUserModelIdLength, applicationUserModelId);
  if ( v20 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x8E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)v20);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_36;
  }
  v33 = 7LL;
  *(_QWORD *)&v32.Reserved.Reserved2[16] = 0LL;
  LOWORD(v32.Reserved.Reserved1) = 0;
  if ( applicationUserModelId[0] )
  {
    do
      ++v5;
    while ( applicationUserModelId[v5] );
  }
  else
  {
    v5 = 0LL;
  }
  std::wstring::assign(&v32.Reserved.Reserved1, (char *)applicationUserModelId, v5);
  v21 = &v32;
  if ( v33 >= 8 )
    v21 = (HSTRING_HEADER *)v32.Reserved.Reserved1;
  *(_QWORD *)applicationUserModelIdLength = v21;
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, (const WCHAR **)applicationUserModelIdLength);
  v23 = v15(v14, v22[1].Reserved.Reserved1, v17, v16);
  if ( v23 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x86,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v23);
  v35 = 0LL;
  if ( v33 >= 8 )
    operator delete(v32.Reserved.Reserved1);
LABEL_25:
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v31 >= 8 )
    operator delete(v29[0]);
  v31 = 7LL;
  v30 = 0LL;
  LOWORD(v29[0]) = 0;
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
}
