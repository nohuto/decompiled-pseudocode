/*
 * XREFs of ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180099810
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800866F8 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180086850 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$_Resetp@VAppInstallService@Actions@CreativeFramework@@@?$shared_ptr@VAppInstallService@Actions@CreativeFramework@@@std@@AEAAXPEAVAppInstallService@Actions@CreativeFramework@@@Z @ 0x180086A04 (--$_Resetp@VAppInstallService@Actions@CreativeFramework@@@-$shared_ptr@VAppInstallService@Action.c)
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x180098A4C (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall CreativeFramework::Actions::MakeSetLockScreenHotspotsService(_QWORD *a1, __int64 a2, void ***a3)
{
  char v5; // bl
  CreativeFramework::Actions::SetLockScreenHotspotsService *v6; // r13
  void **v7; // rax
  const wchar_t *v8; // r14
  void **v9; // rax
  wchar_t *v10; // r15
  void **v11; // rax
  wchar_t *v12; // rsi
  __int64 v13; // rax
  CreativeFramework::Actions::SetLockScreenHotspotsService *v14; // rax
  char v15; // bl
  int v17[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v18; // [rsp+60h] [rbp-51h]
  unsigned __int64 v19; // [rsp+68h] [rbp-49h]
  void *v20[3]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v21; // [rsp+88h] [rbp-29h]
  void *v22[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v23; // [rsp+A8h] [rbp-9h]
  void *v24[4]; // [rsp+B0h] [rbp-1h] BYREF

  v5 = 0;
  v6 = (CreativeFramework::Actions::SetLockScreenHotspotsService *)operator new(0x80uLL);
  if ( v6 )
  {
    v7 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v24, a3, (char *)L"showImageOnSecureLock");
    v8 = (const wchar_t *)v7;
    if ( (unsigned __int64)v7[3] >= 8 )
      v8 = (const wchar_t *)*v7;
    v9 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v22, a3, (char *)L"portraitImage");
    v10 = (wchar_t *)v9;
    if ( (unsigned __int64)v9[3] >= 8 )
      v10 = (wchar_t *)*v9;
    v11 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v20, a3, (char *)L"landscapeImage");
    v12 = (wchar_t *)v11;
    if ( (unsigned __int64)v11[3] >= 8 )
      v12 = (wchar_t *)*v11;
    v13 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v17, a3, (char *)L"ctx.contentId");
    v5 = 15;
    if ( *(_QWORD *)(v13 + 24) >= 8uLL )
      v13 = *(_QWORD *)v13;
    v14 = CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
            v6,
            (wchar_t *)v13,
            v12,
            v10,
            v8);
  }
  else
  {
    v14 = 0LL;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::AppInstallService>::_Resetp<CreativeFramework::Actions::AppInstallService>(
    a1,
    (void (__fastcall ***)(_QWORD, __int64))v14);
  v15 = v5 | 0x10;
  if ( (v15 & 8) != 0 )
  {
    v15 &= ~8u;
    if ( v19 >= 8 )
      operator delete(*(void **)v17);
    v19 = 7LL;
    v18 = 0LL;
    LOWORD(v17[0]) = 0;
  }
  if ( (v15 & 4) != 0 )
  {
    v15 &= ~4u;
    if ( v21 >= 8 )
      operator delete(v20[0]);
    v21 = 7LL;
    v20[2] = 0LL;
    LOWORD(v20[0]) = 0;
  }
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    if ( v23 >= 8 )
      operator delete(v22[0]);
    v23 = 7LL;
    v22[2] = 0LL;
    LOWORD(v22[0]) = 0;
  }
  if ( (v15 & 1) != 0 && v24[3] >= (void *)8 )
    operator delete(v24[0]);
  return a1;
}
