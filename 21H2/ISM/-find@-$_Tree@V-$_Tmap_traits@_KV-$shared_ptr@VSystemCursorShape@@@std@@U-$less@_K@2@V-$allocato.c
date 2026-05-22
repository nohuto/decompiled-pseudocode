/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEBA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18013D90C
 * Callers:
 *     ?CustomShapeExists@SystemCursorService@@QEBA_N_K@Z @ 0x18013C4EC (-CustomShapeExists@SystemCursorService@@QEBA_N_K@Z.c)
 *     ?ShapeExists@SystemCursor@@QEBA_N_K@Z @ 0x18013D210 (-ShapeExists@SystemCursor@@QEBA_N_K@Z.c)
 * Callees:
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEB_K@Z @ 0x18013B1B4 (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v3; // rax
  _QWORD *v4; // rdx
  __int64 **v5; // r9
  __int64 **v6; // r10

  v3 = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Lbound<unsigned __int64>(
         a1,
         a3);
  if ( v3 == *v5 || *v4 < (unsigned __int64)v3[4] )
    v3 = *v5;
  *v6 = v3;
  return v6;
}
