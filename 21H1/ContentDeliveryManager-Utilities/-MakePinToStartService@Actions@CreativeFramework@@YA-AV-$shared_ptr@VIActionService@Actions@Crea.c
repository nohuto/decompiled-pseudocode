/*
 * XREFs of ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180087070
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800844E8 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180084640 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x1800892A8 (--$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::MakePinToStartService(_QWORD *a1, __int64 a2, void ***a3)
{
  void **v5; // rax
  void **v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *started; // rax
  volatile signed __int32 *v10; // rbx
  bool v12[8]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-71h] BYREF
  void **v14; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-61h] BYREF
  char v16; // [rsp+60h] [rbp-51h] BYREF
  volatile signed __int32 *v17; // [rsp+68h] [rbp-49h]
  int v18[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v19; // [rsp+80h] [rbp-31h]
  unsigned __int64 v20; // [rsp+88h] [rbp-29h]
  int v21[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-11h]
  unsigned __int64 v23; // [rsp+A8h] [rbp-9h]
  void *v24[3]; // [rsp+B0h] [rbp-1h] BYREF
  unsigned __int64 v25; // [rsp+C8h] [rbp+17h]
  void *v26[4]; // [rsp+D0h] [rbp+1Fh] BYREF

  v15[1] = -2LL;
  v13 = a1;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v26, a3, (char *)L"useExistingTile");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v12[0] = CompareStringOrdinal((LPCWCH)v5, -1, L"true", -1, 1) == 2;
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v24, a3, (char *)L"pinnedTileSize");
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  v14 = v6;
  v7 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                   (__int64)v21,
                   a3,
                   (char *)L"packageRelativeAppId");
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  v15[0] = v7;
  v8 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                   (__int64)v18,
                   a3,
                   (char *)L"packageFamilyName");
  if ( v8[3] >= 8uLL )
    v8 = (_QWORD *)*v8;
  v13 = v8;
  started = (_QWORD *)std::make_shared<CreativeFramework::Actions::PinToStartService,wchar_t const *,wchar_t const *,wchar_t const *,bool>(
                        (unsigned int)&v16,
                        (unsigned int)&v13,
                        (unsigned int)v15,
                        (unsigned int)&v14,
                        (__int64)v12);
  *a1 = *started;
  a1[1] = started[1];
  *started = 0LL;
  started[1] = 0LL;
  v10 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( v20 >= 8 )
    operator delete(*(void **)v18);
  v20 = 7LL;
  v19 = 0LL;
  LOWORD(v18[0]) = 0;
  if ( v23 >= 8 )
    operator delete(*(void **)v21);
  v23 = 7LL;
  v22 = 0LL;
  LOWORD(v21[0]) = 0;
  if ( v25 >= 8 )
    operator delete(v24[0]);
  v25 = 7LL;
  v24[2] = 0LL;
  LOWORD(v24[0]) = 0;
  if ( v26[3] >= (void *)8 )
    operator delete(v26[0]);
  return a1;
}
