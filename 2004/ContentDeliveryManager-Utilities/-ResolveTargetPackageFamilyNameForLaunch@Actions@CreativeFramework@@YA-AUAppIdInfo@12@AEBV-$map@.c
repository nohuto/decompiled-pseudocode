/*
 * XREFs of ?ResolveTargetPackageFamilyNameForLaunch@Actions@CreativeFramework@@YA?AUAppIdInfo@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008DD48
 * Callers:
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008DF10 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x1800371BC (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$GetOptionalParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180086B48 (--$GetOptionalParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Actions::ResolveTargetPackageFamilyNameForLaunch(__int64 a1, void ***a2)
{
  __int64 v4; // rdi
  void **v5; // rsi
  void ***v6; // rdx
  void **v7; // rsi
  wchar_t *v8; // r8
  void **v9; // rsi
  void *v11[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp-18h]

  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  v4 = a1 + 32;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  v5 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v11, a2, (char *)L"targetPackageFamilyName");
  if ( (void **)a1 != v5 )
  {
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      operator delete(*(void **)a1);
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_WORD *)a1 = 0;
    std::wstring::_Assign_rv((_QWORD *)a1, v5);
  }
  if ( v12 >= 8 )
    operator delete(v11[0]);
  v6 = a2;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v8 = L"targetPackageRelativeAppId";
  }
  else
  {
    v7 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v11, a2, (char *)L"packageFamilyName");
    if ( (void **)a1 != v7 )
    {
      if ( *(_QWORD *)(a1 + 24) >= 8uLL )
        operator delete(*(void **)a1);
      *(_QWORD *)(a1 + 24) = 7LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_WORD *)a1 = 0;
      std::wstring::_Assign_rv((_QWORD *)a1, v7);
    }
    if ( v12 >= 8 )
      operator delete(v11[0]);
    v8 = L"packageRelativeAppId";
    v6 = a2;
  }
  v9 = CreativeFramework::Actions::GetOptionalParameter<std::wstring>(v11, v6, (char *)v8);
  if ( (void **)v4 != v9 )
  {
    if ( *(_QWORD *)(v4 + 24) >= 8uLL )
      operator delete(*(void **)v4);
    *(_QWORD *)(v4 + 24) = 7LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_WORD *)v4 = 0;
    std::wstring::_Assign_rv((_QWORD *)v4, v9);
  }
  if ( v12 >= 8 )
    operator delete(v11[0]);
  return a1;
}
