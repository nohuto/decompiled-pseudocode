/*
 * XREFs of wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50__&_std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run @ 0x180093020
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180086CA0 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x180092F10 (--$-0PEB_WPEB_WPEB_W@-$_Ref_count_obj@VPinWebsiteToTaskbarService@Actions@CreativeFramework@@@st.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B03B8 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall wil::details::functor_wrapper_other__lambda_a111f9909dcb1fbe287f852ebd02ec50____std::shared_ptr_CreativeFramework::Actions::PinWebsiteToTaskbarService___::Run(
        __int64 a1)
{
  _QWORD **v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  char *v11; // [rsp+30h] [rbp-61h] BYREF
  char *v12; // [rsp+38h] [rbp-59h] BYREF
  char *v13[3]; // [rsp+40h] [rbp-51h] BYREF
  int v14[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v15; // [rsp+68h] [rbp-29h]
  unsigned __int64 v16; // [rsp+70h] [rbp-21h]
  int v17[2]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v18; // [rsp+88h] [rbp-9h]
  unsigned __int64 v19; // [rsp+90h] [rbp-1h]
  int v20[2]; // [rsp+98h] [rbp+7h] BYREF
  unsigned __int64 v21; // [rsp+B0h] [rbp+1Fh]

  v13[1] = (char *)-2LL;
  v2 = *(_QWORD ***)(a1 + 8);
  v3 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v20, *v2, (char *)L"icon");
  if ( *(_QWORD *)(v3 + 24) >= 8uLL )
    v3 = *(_QWORD *)v3;
  v11 = (char *)v3;
  v4 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, *v2, (char *)L"uri");
  if ( *(_QWORD *)(v4 + 24) >= 8uLL )
    v4 = *(_QWORD *)v4;
  v12 = (char *)v4;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v14, *v2, (char *)L"title");
  if ( *(_QWORD *)(v5 + 24) >= 8uLL )
    v5 = *(_QWORD *)v5;
  v13[0] = (char *)v5;
  v6 = (char *)operator new(0x78uLL);
  v13[2] = v6;
  if ( v6 )
    v7 = std::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>::_Ref_count_obj<CreativeFramework::Actions::PinWebsiteToTaskbarService>(
           (__int64)v6,
           v13,
           &v12,
           &v11);
  else
    v7 = 0LL;
  if ( v16 >= 8 )
    operator delete(*(void **)v14);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( v19 >= 8 )
    operator delete(*(void **)v17);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v21 >= 8 )
    operator delete(*(void **)v20);
  v8 = *(_QWORD **)(a1 + 16);
  v9 = (volatile signed __int32 *)v8[1];
  v8[1] = v7;
  *v8 = v7 + 16;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return 0LL;
}
