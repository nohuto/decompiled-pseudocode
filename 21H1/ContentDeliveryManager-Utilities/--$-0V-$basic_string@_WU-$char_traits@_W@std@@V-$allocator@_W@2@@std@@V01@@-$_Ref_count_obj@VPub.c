/*
 * XREFs of ??$?0V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V01@@?$_Ref_count_obj@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180095BBC
 * Callers:
 *     ??$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@std@@YA?AV?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@0@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x180095B4C (--$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V-$basic_string@_WU-$char_t.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180034B5C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180068AD4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::Actions::PublishSystemStateService>::_Ref_count_obj<CreativeFramework::Actions::PublishSystemStateService>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  void *v7; // rcx
  _QWORD *v8; // rax
  _QWORD v10[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h]
  unsigned __int64 v12; // [rsp+50h] [rbp-30h]
  void *v13[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h]
  unsigned __int64 v15; // [rsp+70h] [rbp-10h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
  v5 = a1 + 16;
  v12 = 7LL;
  v11 = 0LL;
  LOWORD(v10[0]) = 0;
  std::wstring::_Assign_rv(v10, a3);
  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  std::wstring::_Assign_rv(v13, a2);
  *(_QWORD *)v5 = &CreativeFramework::Actions::PublishSystemStateService::`vftable';
  *(_QWORD *)(v5 + 32) = 7LL;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_WORD *)(v5 + 8) = 0;
  std::wstring::assign((void **)(v5 + 8), v13, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_DWORD *)(v5 + 48) = 0;
  v6 = v12;
  v7 = (void *)v10[0];
  if ( v11 )
  {
    v8 = v10;
    if ( v12 >= 8 )
      v8 = (_QWORD *)v10[0];
    *(_QWORD *)(v5 + 40) = v8;
    *(_DWORD *)(v5 + 48) = 2 * v11;
  }
  if ( v15 >= 8 )
  {
    operator delete(v13[0]);
    v6 = v12;
    v7 = (void *)v10[0];
  }
  v15 = 7LL;
  v14 = 0LL;
  LOWORD(v13[0]) = 0;
  if ( v6 >= 8 )
    operator delete(v7);
  return a1;
}
