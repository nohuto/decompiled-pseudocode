/*
 * XREFs of ?FlushQueuedSuspendAnimations@CExpressionManager@@AEAAXXZ @ 0x180050860
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800506EC (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@IPEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@IPEAX@std@@@1@PEAU?$_Tree_node@IPEAX@1@@Z @ 0x180050954 (--$_Erase_tree@V-$allocator@U-$_Tree_node@IPEAX@std@@@std@@@-$_Tree_val@U-$_Tree_simple_types@I@.c)
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x1801FDE30 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 */

void __fastcall CExpressionManager::FlushQueuedSuspendAnimations(CExpressionManager *this)
{
  _QWORD *v1; // rdi
  __int64 *v3; // rsi
  __int64 *j; // rbx
  _QWORD *v5; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *v8; // rcx

  v1 = (_QWORD *)((char *)this + 400);
  v3 = (__int64 *)*((_QWORD *)this + 50);
  j = (__int64 *)*v3;
  while ( j != v3 )
  {
    CExpressionManager::SuspendAnimations(this, *((_DWORD *)j + 7), 1, 0);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v8 = *v6;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
  v5 = (_QWORD *)*v1;
  std::_Tree_val<std::_Tree_simple_types<unsigned int>>::_Erase_tree<std::allocator<std::_Tree_node<unsigned int,void *>>>(
    v1,
    v1,
    *(_QWORD *)(*v1 + 8LL));
  v5[1] = v5;
  *v5 = v5;
  v5[2] = v5;
  v1[1] = 0LL;
}
