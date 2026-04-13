/*
 * XREFs of ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800866F8 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180086850 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$_Resetp@VAppInstallService@Actions@CreativeFramework@@@?$shared_ptr@VAppInstallService@Actions@CreativeFramework@@@std@@AEAAXPEAVAppInstallService@Actions@CreativeFramework@@@Z @ 0x180086A04 (--$_Resetp@VAppInstallService@Actions@CreativeFramework@@@-$shared_ptr@VAppInstallService@Action.c)
 *     ??0LaunchUriService@Actions@CreativeFramework@@QEAA@QEB_WPEB_W1AEBV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@0_N@Z @ 0x18008CD9C (--0LaunchUriService@Actions@CreativeFramework@@QEAA@QEB_WPEB_W1AEBV-$com_ptr_t@U-$IMapView@W4Win.c)
 *     ?GetPositionParameters@Actions@CreativeFramework@@YA?AV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008D4CC (-GetPositionParameters@Actions@CreativeFramework@@YA-AV-$com_ptr_t@U-$IMapView@W4WindowPosition@.c)
 *     ?ResolveTargetPackageFamilyNameForLaunch@Actions@CreativeFramework@@YA?AUAppIdInfo@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008D8F8 (-ResolveTargetPackageFamilyNameForLaunch@Actions@CreativeFramework@@YA-AUAppIdInfo@12@AEBV-$map@.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008EA60 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
_QWORD *__fastcall CreativeFramework::Actions::MakeLaunchUriService(_QWORD *a1, __int64 a2, void ***a3)
{
  char v5; // di
  void **v6; // rax
  void *v7; // r15
  void **v8; // rax
  const WCHAR *v9; // rsi
  __int64 v10; // rbx
  char *v11; // r13
  char *v12; // rax
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  char v15; // di
  char v17; // [rsp+48h] [rbp-99h]
  __int64 v18; // [rsp+50h] [rbp-91h] BYREF
  _QWORD *v19; // [rsp+58h] [rbp-89h] BYREF
  char *v20; // [rsp+60h] [rbp-81h]
  __int64 v21; // [rsp+68h] [rbp-79h]
  void *v22; // [rsp+70h] [rbp-71h]
  void *v23[3]; // [rsp+78h] [rbp-69h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp-51h]
  void *v25[3]; // [rsp+98h] [rbp-49h] BYREF
  unsigned __int64 v26; // [rsp+B0h] [rbp-31h]
  void *v27[3]; // [rsp+B8h] [rbp-29h] BYREF
  unsigned __int64 v28; // [rsp+D0h] [rbp-11h]
  int v29[2]; // [rsp+D8h] [rbp-9h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+7h]
  unsigned __int64 v31; // [rsp+F0h] [rbp+Fh]

  v21 = -2LL;
  v19 = a1;
  v5 = 0;
  CreativeFramework::Actions::ResolveTargetPackageFamilyNameForLaunch((__int64)v25, a3);
  v6 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v23, a3, (char *)L"targetPackage");
  v17 = std::operator==<wchar_t>(v6, L"true");
  if ( v24 >= 8 )
    operator delete(v23[0]);
  v7 = operator new(0x78uLL);
  v22 = v7;
  if ( v7 )
  {
    v8 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v23, a3, (char *)L"showCmd");
    v9 = (const WCHAR *)v8;
    if ( (unsigned __int64)v8[3] >= 8 )
      v9 = (const WCHAR *)*v8;
    v10 = *CreativeFramework::Actions::GetPositionParameters(&v19, a3);
    v18 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = (char *)v27;
    if ( v28 >= 8 )
      v11 = (char *)v27[0];
    v12 = (char *)v25;
    if ( v26 >= 8 )
      v12 = (char *)v25[0];
    v20 = v12;
    v13 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v29, a3, (char *)L"uri");
    v5 = 15;
    if ( *(_QWORD *)(v13 + 24) >= 8uLL )
      v13 = *(_QWORD *)v13;
    v14 = (void (__fastcall ***)(_QWORD, __int64))CreativeFramework::Actions::LaunchUriService::LaunchUriService(
                                                    (__int64)v7,
                                                    (char *)v13,
                                                    v20,
                                                    v11,
                                                    &v18,
                                                    v9,
                                                    v17);
  }
  else
  {
    v14 = 0LL;
    v10 = v18;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  std::shared_ptr<CreativeFramework::Actions::AppInstallService>::_Resetp<CreativeFramework::Actions::AppInstallService>(
    a1,
    v14);
  v15 = v5 | 0x10;
  if ( (v15 & 8) != 0 )
  {
    v15 &= ~8u;
    if ( v31 >= 8 )
      operator delete(*(void **)v29);
    v31 = 7LL;
    v30 = 0LL;
    LOWORD(v29[0]) = 0;
  }
  if ( (v15 & 4) != 0 )
  {
    v15 &= ~4u;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( (v15 & 2) != 0 )
  {
    v15 &= ~2u;
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  }
  if ( (v15 & 1) != 0 )
  {
    if ( v24 >= 8 )
      operator delete(v23[0]);
    v24 = 7LL;
    v23[2] = 0LL;
    LOWORD(v23[0]) = 0;
  }
  if ( v28 >= 8 )
    operator delete(v27[0]);
  v28 = 7LL;
  v27[2] = 0LL;
  LOWORD(v27[0]) = 0;
  if ( v26 >= 8 )
    operator delete(v25[0]);
  return a1;
}
