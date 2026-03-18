/*
 * XREFs of ??$_Try_emplace@AEBQEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@std@@_N@1@AEBQEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800B1024
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180071CC8 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18015565C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEBV-$basic_string@GU-$char_traits@G@.c)
 */

__int64 __fastcall std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const * const &,>(
        __int64 **a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v5; // r8
  __int64 *v6; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+20h] BYREF

  v5 = *a1;
  v6 = (__int64 *)(*a1)[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( (unsigned __int64)v6[4] < *a3 )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  if ( v5 == *a1 || *a3 < (unsigned __int64)v5[4] )
  {
    v9 = a3;
    v8 = (_QWORD *)std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<std::wstring const * const &>,std::tuple<>>(
                     (_DWORD)a1,
                     (unsigned int)&v10,
                     (_DWORD)v5,
                     (_DWORD)a3,
                     (__int64)&v9);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v8;
  }
  else
  {
    *(_QWORD *)a2 = v5;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
