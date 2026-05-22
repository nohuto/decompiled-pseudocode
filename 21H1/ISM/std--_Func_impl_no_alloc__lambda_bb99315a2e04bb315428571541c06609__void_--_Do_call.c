/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Do_call @ 0x180167420
 * Callers:
 *     <none>
 * Callees:
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800900B0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@@std.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Do_call(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 *v2; // rax
  __int64 i; // r8
  __int64 *v4; // rax

  v1 = **(__int64 ***)(a1 + 16);
  v2 = v1;
  if ( *(_BYTE *)(v1[2] + 25) )
  {
    for ( i = v1[1]; !*(_BYTE *)(i + 25) && v2 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
      v2 = (__int64 *)i;
  }
  v4 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
         (_QWORD *)(*(_QWORD *)(a1 + 8) + 216LL),
         v1);
  std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x38);
}
