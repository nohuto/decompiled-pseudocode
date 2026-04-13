/*
 * XREFs of ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x180097914
 * Callers:
 *     ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800977C0 (-MakePublishWindowsTipService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actio.c)
 * Callees:
 *     ??$?0PEB_WPEB_W@?$_Ref_count_obj@VPublishWindowsTipService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W0@Z @ 0x180097984 (--$-0PEB_WPEB_W@-$_Ref_count_obj@VPublishWindowsTipService@Actions@CreativeFramework@@@std@@QEAA.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PublishWindowsTipService,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  void *v7; // rax

  v6 = 0LL;
  v7 = operator new(0x58uLL);
  if ( v7 )
    v6 = std::_Ref_count_obj<CreativeFramework::Actions::PublishWindowsTipService>::_Ref_count_obj<CreativeFramework::Actions::PublishWindowsTipService>(
           v7,
           a2,
           a3);
  a1[1] = v6;
  *a1 = v6 + 16;
  return a1;
}
