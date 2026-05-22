/*
 * XREFs of _lambda_c364fe7c41acf4148978cba8a333a804_::operator() @ 0x1801582D0
 * Callers:
 *     wil::details::ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___::_ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___ @ 0x1801572E8 (wil--details--ScopeExitFn__lambda_c364fe7c41acf4148978cba8a333a804___--_ScopeExitFn__lambda_c364.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180165D14 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NOD.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x18008FB50 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 */

void __fastcall lambda_c364fe7c41acf4148978cba8a333a804_::operator()(__int64 **a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 i; // r8
  __int64 *v4; // rax

  v1 = **a1;
  if ( !(*(_DWORD *)(v1 + 44) + *(_DWORD *)(v1 + 48)) )
  {
    v2 = **a1;
    if ( *(_BYTE *)(*(_QWORD *)(v1 + 16) + 25LL) )
    {
      for ( i = *(_QWORD *)(v1 + 8); !*(_BYTE *)(i + 25) && v2 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        v2 = i;
    }
    v4 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
           a1[1] + 27,
           (__int64 *)v1);
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x38);
  }
}
