/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$map@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18013DDF8
 * Callers:
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x180140378 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 * Callees:
 *     ??$_Lbound@_K@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@PEAX@1@AEB_K@Z @ 0x18013AD54 (--$_Lbound@_K@-$_Tree@V-$_Tmap_traits@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18013DE60 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 */

__int64 __fastcall std::map<unsigned __int64,std::shared_ptr<SystemCursorShape>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v4; // rax
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  __int64 **v8; // r11
  _QWORD *v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::_Lbound<unsigned __int64>(
         a1,
         a3);
  if ( v4 == *v8 || (v6 = v4[4], *v5 < v6) )
  {
    v11 = v7;
    v9 = (_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<SystemCursorShape>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursorShape>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
                     (_DWORD)v8,
                     (unsigned int)&v12,
                     (_DWORD)v4,
                     v6,
                     (__int64)&v11);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v9;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
