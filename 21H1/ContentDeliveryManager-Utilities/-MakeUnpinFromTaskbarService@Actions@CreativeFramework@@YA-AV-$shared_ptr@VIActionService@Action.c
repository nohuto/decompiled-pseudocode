/*
 * XREFs of ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180090250
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800844E8 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180084640 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x18009068C (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA-AV-$shared_ptr@VTas.c)
 *     ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x180090778 (--$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA-AV-$shared_ptr.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::MakeUnpinFromTaskbarService(_QWORD *a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  _QWORD *v6; // rax
  volatile signed __int32 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  volatile signed __int32 *v11; // rdi
  char v13; // [rsp+28h] [rbp-69h] BYREF
  _BYTE v14[7]; // [rsp+29h] [rbp-68h] BYREF
  _QWORD *v15; // [rsp+30h] [rbp-61h] BYREF
  void **v16; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-41h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-39h]
  _BYTE v20[8]; // [rsp+60h] [rbp-31h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-29h]
  void *v22[3]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp-9h]
  int v24[2]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+Fh]
  unsigned __int64 v26; // [rsp+A8h] [rbp+17h]
  int v27[2]; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+C0h] [rbp+2Fh]
  unsigned __int64 v29; // [rsp+C8h] [rbp+37h]

  v17[1] = -2LL;
  v15 = a1;
  CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v22, a3, (char *)L"applicationId");
  if ( v22[2] )
  {
    v13 = 0;
    v5 = v22;
    if ( v23 >= 8 )
      v5 = (void **)v22[0];
    v16 = v5;
    v6 = (_QWORD *)std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(v18, &v16, &v13);
    *a1 = *v6;
    a1[1] = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    v7 = v19;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  else
  {
    v14[0] = 0;
    v8 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                     (__int64)v27,
                     a3,
                     (char *)L"packageRelativeAppId");
    if ( v8[3] >= 8uLL )
      v8 = (_QWORD *)*v8;
    v17[0] = v8;
    v9 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                     (__int64)v24,
                     a3,
                     (char *)L"packageFamilyName");
    if ( v9[3] >= 8uLL )
      v9 = (_QWORD *)*v9;
    v15 = v9;
    v10 = (_QWORD *)std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
                      v20,
                      &v15,
                      v17,
                      v14);
    *a1 = *v10;
    a1[1] = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    v11 = v21;
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    if ( v26 >= 8 )
      operator delete(*(void **)v24);
    v26 = 7LL;
    v25 = 0LL;
    LOWORD(v24[0]) = 0;
    if ( v29 >= 8 )
      operator delete(*(void **)v27);
    v29 = 7LL;
    v28 = 0LL;
    LOWORD(v27[0]) = 0;
  }
  if ( v23 >= 8 )
    operator delete(v22[0]);
  return a1;
}
