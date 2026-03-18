/*
 * XREFs of ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180029ED4
 * Callers:
 *     _anonymous_namespace_::FramesReport::UpdateResourceCountersForPsn @ 0x18002AB64 (_anonymous_namespace_--FramesReport--UpdateResourceCountersForPsn.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800428B0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??$_Insert_at@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180029FD8 (--$_Insert_at@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag@2@@.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180091894 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_nohint<std::wstring,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // r14
  int v7; // r12d
  _QWORD *v8; // rdi
  char v9; // bp
  __int64 *v10; // rbx
  _QWORD *v11; // rbx
  char v12; // r8
  _QWORD *v13; // rax
  __int64 v15; // rax
  _QWORD *i; // rax
  char v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD **)a1;
  v7 = a1;
  v8 = *(_QWORD **)a1;
  v9 = 1;
  v10 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  while ( !*((_BYTE *)v10 + 25) )
  {
    v8 = v10;
    if ( (int)std::wstring::compare(a4, v10 + 4) < 0 )
    {
      v10 = (__int64 *)*v10;
      v9 = 1;
    }
    else
    {
      v10 = (__int64 *)v10[2];
      v9 = 0;
    }
  }
  v11 = v8;
  if ( v9 )
  {
    if ( v8 == (_QWORD *)*v4 )
    {
      v12 = 1;
      goto LABEL_10;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v11 = (_QWORD *)v8[2];
    }
    else
    {
      v15 = *v8;
      if ( *(_BYTE *)(*v8 + 25LL) )
      {
        for ( i = (_QWORD *)v8[1]; !*((_BYTE *)i + 25) && v11 == (_QWORD *)*i; i = (_QWORD *)i[1] )
          v11 = i;
        if ( *((_BYTE *)v11 + 25) )
          i = v11;
        v11 = i;
      }
      else
      {
        do
        {
          v11 = (_QWORD *)v15;
          v15 = *(_QWORD *)(v15 + 16);
        }
        while ( !*(_BYTE *)(v15 + 25) );
      }
    }
  }
  if ( (int)std::wstring::compare(v11 + 4, a4) >= 0 )
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  v12 = v9;
LABEL_10:
  v13 = (_QWORD *)std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring,std::_Not_a_node_tag>(
                    v7,
                    (unsigned int)&v17,
                    v12,
                    (_DWORD)v8,
                    a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v13;
  return a2;
}
