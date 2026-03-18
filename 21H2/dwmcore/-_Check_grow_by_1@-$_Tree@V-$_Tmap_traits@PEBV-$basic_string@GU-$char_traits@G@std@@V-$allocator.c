/*
 * XREFs of ?_Check_grow_by_1@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x1800301D4
 * Callers:
 *     ??$_Try_emplace@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@std@@_N@1@$$QEAPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002FC78 (--$_Try_emplace@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@PEBV-.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x1800751DC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x180185E18 (-_Throw_tree_length_error@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Check_grow_by_1(
        __int64 a1)
{
  __int64 result; // rax

  result = 0x555555555555555LL;
  if ( *(_QWORD *)(a1 + 8) == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  return result;
}
