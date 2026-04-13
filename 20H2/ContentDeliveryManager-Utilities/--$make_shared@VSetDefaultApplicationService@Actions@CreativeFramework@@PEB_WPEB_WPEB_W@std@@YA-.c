/*
 * XREFs of ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x18008CB08
 * Callers:
 *     ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008C970 (-MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VSetDefaultApplicationService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x18008CB88 (--$-0PEB_WPEB_WPEB_W@-$_Ref_count_obj@VSetDefaultApplicationService@Actions@CreativeFramework@@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::SetDefaultApplicationService,wchar_t const *,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rdi
  void *v9; // rax

  v8 = 0LL;
  v9 = operator new(0x80uLL);
  if ( v9 )
    v8 = std::_Ref_count_obj<CreativeFramework::Actions::SetDefaultApplicationService>::_Ref_count_obj<CreativeFramework::Actions::SetDefaultApplicationService>(
           v9,
           a2,
           a3,
           a4,
           0,
           -2LL,
           v9);
  a1[1] = v8;
  *a1 = v8 + 16;
  return a1;
}
