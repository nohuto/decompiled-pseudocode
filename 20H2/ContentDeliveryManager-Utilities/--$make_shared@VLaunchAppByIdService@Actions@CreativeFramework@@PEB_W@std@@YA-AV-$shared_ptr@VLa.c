/*
 * XREFs of ??$make_shared@VLaunchAppByIdService@Actions@CreativeFramework@@PEB_W@std@@YA?AV?$shared_ptr@VLaunchAppByIdService@Actions@CreativeFramework@@@0@$$QEAPEB_W@Z @ 0x18008EAF0
 * Callers:
 *     ?MakeLaunchAppByIdService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008DD80 (-MakeLaunchAppByIdService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@C.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::LaunchAppByIdService,wchar_t const *>(
        _QWORD *a1,
        char **a2)
{
  unsigned __int64 v4; // rdi
  char *v5; // rax
  char *v6; // rbx
  char *v7; // rdx
  void **v8; // rcx
  __int64 v9; // rax

  v4 = 0LL;
  v5 = (char *)operator new(0x38uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v7 = *a2;
    *((_QWORD *)v5 + 2) = &CreativeFramework::Actions::LaunchAppByIdService::`vftable';
    v8 = (void **)(v5 + 24);
    *((_QWORD *)v5 + 6) = 7LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_WORD *)v5 + 12) = 0;
    if ( *(_WORD *)v7 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_WORD *)&v7[2 * v9] );
      v4 = v9;
    }
    std::wstring::assign(v8, v7, v4);
  }
  else
  {
    v6 = 0LL;
  }
  a1[1] = v6;
  *a1 = v6 + 16;
  return a1;
}
