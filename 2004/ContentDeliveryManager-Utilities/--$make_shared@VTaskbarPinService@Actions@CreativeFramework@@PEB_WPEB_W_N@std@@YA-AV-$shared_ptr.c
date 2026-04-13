/*
 * XREFs of ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x180092DD8
 * Callers:
 *     ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180092670 (-MakePinToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800928B0 (-MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Action.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B30C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B03B8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
        _QWORD *a1,
        char **a2,
        char **a3,
        char *a4)
{
  void **v8; // rax
  void **v9; // rbx
  char v10; // r12
  char *v11; // r15
  char *v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8

  v8 = (void **)operator new(0x80uLL);
  v9 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 2) = 1;
    *((_DWORD *)v8 + 3) = 1;
    *v8 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    v10 = *a4;
    v11 = *a3;
    v12 = *a2;
    v8[2] = &CreativeFramework::Actions::TaskbarPinService::`vftable';
    v8[6] = (void *)7;
    v8[5] = 0LL;
    *((_WORD *)v8 + 12) = 0;
    v13 = -1LL;
    if ( *(_WORD *)v12 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_WORD *)&v12[2 * v14] );
    }
    else
    {
      v14 = 0LL;
    }
    std::wstring::assign(v8 + 3, v12, v14);
    v9[10] = (void *)7;
    v9[9] = 0LL;
    *((_WORD *)v9 + 28) = 0;
    if ( *(_WORD *)v11 )
    {
      do
        ++v13;
      while ( *(_WORD *)&v11[2 * v13] );
    }
    else
    {
      v13 = 0LL;
    }
    std::wstring::assign(v9 + 7, v11, v13);
    v9[14] = (void *)7;
    v9[13] = 0LL;
    *((_WORD *)v9 + 44) = 0;
    *((_BYTE *)v9 + 120) = v10;
  }
  else
  {
    v9 = 0LL;
  }
  a1[1] = v9;
  *a1 = v9 + 2;
  return a1;
}
