/*
 * XREFs of ?push_back@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@2@@Z @ 0x1800A4474
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800A2CB4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800311D4 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180035184 (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800A4944 (-_Reallocate@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::push_back(
        __int64 *a1,
        __int64 *a2)
{
  unsigned __int64 v3; // r9
  __int64 *v4; // rdx
  char v6; // al
  __int64 *v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 *v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD *result; // rax

  v3 = 0LL;
  v4 = (__int64 *)a1[1];
  if ( a2 >= v4 || (v6 = 1, *a1 > (unsigned __int64)a2) )
    v6 = 0;
  v7 = (__int64 *)a1[2];
  if ( v6 )
  {
    v8 = (unsigned __int64)a2 - *a1;
    v9 = v4;
    v10 = *a1;
    if ( v4 == v7 && !(((char *)v7 - (char *)v4) >> 4) )
    {
      v11 = ((__int64)v4 - v10) >> 4;
      if ( v11 == 0xFFFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
      v12 = v11 + 1;
      v13 = ((__int64)v7 - *a1) >> 4;
      if ( 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) >= v13 )
        v3 = v13 + (v13 >> 1);
      if ( v3 >= v12 )
        v12 = v3;
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(a1, v12);
      v10 = *a1;
      v9 = (__int64 *)a1[1];
    }
    v14 = v9;
    v15 = (__int64 *)(v10 + (v8 & 0xFFFFFFFFFFFFFFF0uLL));
  }
  else
  {
    v16 = v4;
    if ( v4 == v7 && !(((char *)v7 - (char *)v4) >> 4) )
    {
      v17 = ((__int64)v4 - *a1) >> 4;
      if ( v17 == 0xFFFFFFFFFFFFFFFLL )
        std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
      v18 = v17 + 1;
      v19 = ((__int64)v7 - *a1) >> 4;
      if ( 0xFFFFFFFFFFFFFFFLL - (v19 >> 1) >= v19 )
        v3 = v19 + (v19 >> 1);
      if ( v3 >= v18 )
        v18 = v3;
      std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Reallocate(a1, v18);
      v16 = (__int64 *)a1[1];
    }
    v15 = a2;
    v14 = v16;
  }
  result = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
             v14,
             v15);
  a1[1] += 16LL;
  return result;
}
