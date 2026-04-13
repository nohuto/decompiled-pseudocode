/*
 * XREFs of ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18009A3B4
 * Callers:
 *     ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180099C94 (-DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x1800AD4C4 (-SplitString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$vector@V-$basic_string@_WU-$char.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180037A0C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180038034 (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18009A60C (-_Reallocate@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$alloca.c)
 */

__int64 __fastcall std::vector<std::wstring>::push_back(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // rdx
  char v5; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 result; // rax

  v3 = a1[1];
  if ( (unsigned __int64)a2 >= v3 || (v5 = 1, *a1 > (unsigned __int64)a2) )
    v5 = 0;
  v6 = a1[2];
  if ( v5 )
  {
    v7 = (unsigned __int64)a2 - *a1;
    v8 = (_QWORD *)a1[1];
    v9 = *a1;
    if ( v3 == v6 && !((__int64)(v6 - v3) >> 5) )
    {
      v10 = (__int64)(v3 - v9) >> 5;
      if ( v10 == 0x7FFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
      v11 = v10 + 1;
      v12 = (v6 - *a1) >> 5;
      v13 = 0LL;
      if ( 0x7FFFFFFFFFFFFFFLL - (v12 >> 1) >= v12 )
        v13 = v12 + (v12 >> 1);
      if ( v13 >= v11 )
        v11 = v13;
      std::vector<std::wstring>::_Reallocate(a1, v11);
      v8 = (_QWORD *)a1[1];
      v9 = *a1;
    }
    v14 = (_QWORD *)((v7 & 0xFFFFFFFFFFFFFFE0uLL) + v9);
  }
  else
  {
    v8 = (_QWORD *)a1[1];
    if ( v3 == v6 && !((__int64)(v6 - v3) >> 5) )
    {
      v15 = (__int64)(v3 - *a1) >> 5;
      if ( v15 == 0x7FFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
      v16 = v15 + 1;
      v17 = (v6 - *a1) >> 5;
      v18 = 0LL;
      if ( 0x7FFFFFFFFFFFFFFLL - (v17 >> 1) >= v17 )
        v18 = v17 + (v17 >> 1);
      if ( v18 >= v16 )
        v16 = v18;
      std::vector<std::wstring>::_Reallocate(a1, v16);
      v8 = (_QWORD *)a1[1];
    }
    v14 = a2;
  }
  v8[3] = 7LL;
  v8[2] = 0LL;
  *(_WORD *)v8 = 0;
  result = std::wstring::_Assign_rv(v8, v14);
  a1[1] += 32LL;
  return result;
}
