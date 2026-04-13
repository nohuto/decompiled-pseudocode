/*
 * XREFs of ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W$$QEA_N@Z @ 0x18009289C
 * Callers:
 *     ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180092220 (-MakePinToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180092460 (-MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Action.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,bool>(
        _QWORD *a1,
        char **a2,
        char *a3)
{
  unsigned __int64 v6; // rbx
  char *v7; // rax
  char *v8; // rdi
  char v9; // r15
  char *v10; // rdx
  void **v11; // rcx
  __int64 v12; // rax

  v6 = 0LL;
  v7 = (char *)operator new(0x80uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v9 = *a3;
    v10 = *a2;
    *((_QWORD *)v7 + 2) = &CreativeFramework::Actions::TaskbarPinService::`vftable';
    *((_QWORD *)v7 + 6) = 7LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_WORD *)v7 + 12) = 0;
    *((_QWORD *)v7 + 10) = 7LL;
    *((_QWORD *)v7 + 9) = 0LL;
    *((_WORD *)v7 + 28) = 0;
    v11 = (void **)(v7 + 88);
    *((_QWORD *)v7 + 14) = 7LL;
    *((_QWORD *)v7 + 13) = 0LL;
    *((_WORD *)v7 + 44) = 0;
    if ( *(_WORD *)v10 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *(_WORD *)&v10[2 * v12] );
      v6 = v12;
    }
    std::wstring::assign(v11, v10, v6);
    v8[120] = v9;
  }
  else
  {
    v8 = 0LL;
  }
  a1[1] = v8;
  *a1 = v8 + 16;
  return a1;
}
