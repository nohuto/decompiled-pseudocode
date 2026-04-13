/*
 * XREFs of ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_WAEAUSwapStartTileProperties@23@@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x18008B438
 * Callers:
 *     ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180088B40 (-MakeSwapStartTileService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@C.c)
 * Callees:
 *     ??$?0PEB_WPEB_WAEAUSwapStartTileProperties@Actions@CreativeFramework@@@?$_Ref_count_obj@VSwapStartTileService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W0AEAUSwapStartTileProperties@Actions@CreativeFramework@@@Z @ 0x18008C148 (--$-0PEB_WPEB_WAEAUSwapStartTileProperties@Actions@CreativeFramework@@@-$_Ref_count_obj@VSwapSta.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::SwapStartTileService,wchar_t const *,wchar_t const *,CreativeFramework::Actions::SwapStartTileProperties &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 started; // rdi
  void *v9; // rax

  started = 0LL;
  v9 = operator new(0x118uLL);
  if ( v9 )
    started = std::_Ref_count_obj<CreativeFramework::Actions::SwapStartTileService>::_Ref_count_obj<CreativeFramework::Actions::SwapStartTileService>(
                v9,
                a2,
                a3,
                a4,
                0,
                -2LL,
                v9);
  a1[1] = started;
  *a1 = started + 16;
  return a1;
}
