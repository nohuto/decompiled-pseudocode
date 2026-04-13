/*
 * XREFs of ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800338E8
 * Callers:
 *     _anonymous_namespace_::SplitString @ 0x18002EA1C (_anonymous_namespace_--SplitString.c)
 *     ?SplitString@Details@SubscribedContentStore@CreativeFramework@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@5@PEBG@Z @ 0x1800439F8 (-SplitString@Details@SubscribedContentStore@CreativeFramework@@YA-AV-$vector@V-$basic_string@GU-.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180037A0C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180038034 (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18003804C (-_Reallocate@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator.c)
 */

__int64 __fastcall std::vector<std::wstring>::push_back(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdx
  char v5; // al
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 result; // rax

  v3 = a1[1];
  if ( a2 >= v3 || (v5 = 1, *a1 > a2) )
    v5 = 0;
  v6 = a1[2];
  if ( v5 )
  {
    v7 = a2 - *a1;
    v8 = a1[1];
    v9 = *a1;
    if ( v3 == v6 && !((__int64)(v6 - v3) >> 5) )
    {
      v10 = (__int64)(v3 - v9) >> 5;
      if ( v10 == 0x7FFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen(v8);
      v11 = v10 + 1;
      v12 = (__int64)(v6 - *a1) >> 5;
      v13 = 0LL;
      if ( 0x7FFFFFFFFFFFFFFLL - (v12 >> 1) >= v12 )
        v13 = v12 + (v12 >> 1);
      if ( v13 >= v11 )
        v11 = v13;
      std::vector<std::wstring>::_Reallocate(a1, v11);
      v8 = a1[1];
      v9 = *a1;
    }
    v14 = (v7 & 0xFFFFFFFFFFFFFFE0uLL) + v9;
  }
  else
  {
    v8 = a1[1];
    if ( v3 == v6 && !((__int64)(v6 - v3) >> 5) )
    {
      v15 = (__int64)(v3 - *a1) >> 5;
      if ( v15 == 0x7FFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen(v8);
      v16 = v15 + 1;
      v17 = (__int64)(v6 - *a1) >> 5;
      v18 = 0LL;
      if ( 0x7FFFFFFFFFFFFFFLL - (v17 >> 1) >= v17 )
        v18 = v17 + (v17 >> 1);
      if ( v18 >= v16 )
        v16 = v18;
      std::vector<std::wstring>::_Reallocate(a1, v16);
      v8 = a1[1];
    }
    v14 = a2;
  }
  *(_QWORD *)(v8 + 24) = 7LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_WORD *)v8 = 0;
  result = std::wstring::_Assign_rv(v8, v14);
  a1[1] += 32LL;
  return result;
}
