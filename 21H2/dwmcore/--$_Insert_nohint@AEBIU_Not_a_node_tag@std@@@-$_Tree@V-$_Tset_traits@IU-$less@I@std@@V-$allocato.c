/*
 * XREFs of ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x1801AB0C0
 * Callers:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801AB490 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 * Callees:
 *     ??$_Insert_at@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Not_a_node_tag@1@@Z @ 0x1801AAF08 (--$_Insert_at@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_nohint<unsigned int const &,std::_Not_a_node_tag>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 **v6; // rdi
  __int64 *v7; // r9
  char v8; // r8
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 i; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v7 = *a1;
  v8 = 1;
  v9 = (*a1)[1];
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v7 = (__int64 *)v9;
    if ( *a4 >= *(_DWORD *)(v9 + 28) )
    {
      v9 = *(_QWORD *)(v9 + 16);
      v8 = 0;
    }
    else
    {
      v9 = *(_QWORD *)v9;
      v8 = 1;
    }
  }
  v10 = v7;
  if ( v8 )
  {
    if ( v7 == (__int64 *)**a1 )
    {
      v8 = 1;
      goto LABEL_9;
    }
    if ( *((_BYTE *)v7 + 25) )
    {
      v10 = (__int64 *)v7[2];
    }
    else
    {
      v12 = *v7;
      if ( *(_BYTE *)(*v7 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v10 == *(__int64 **)i; i = *(_QWORD *)(i + 8) )
          v10 = (__int64 *)i;
        if ( *((_BYTE *)v10 + 25) )
          i = (__int64)v10;
        v10 = (__int64 *)i;
      }
      else
      {
        do
        {
          v10 = (__int64 *)v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
        while ( !*(_BYTE *)(v12 + 25) );
      }
    }
  }
  if ( *((_DWORD *)v10 + 7) >= *a4 )
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  a1 = v6;
LABEL_9:
  v11 = std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Not_a_node_tag>(
          a1,
          &v15,
          v8,
          v7,
          a4);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v11;
  return a2;
}
