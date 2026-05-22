/*
 * XREFs of ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x180125AE8
 * Callers:
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18012691C (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUDockInputIdentity@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUDockInputIdentity@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180125D0C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUDockInputIdentity@@@2@V-$tuple@$$V@2.c)
 */

__int64 __fastcall std::map<DockInputIdentity,KeyboardDockInput>::_Try_emplace<DockInputIdentity const &,>(
        __int64 **a1,
        __int64 a2,
        int *a3)
{
  __int64 *v5; // r8
  __int64 *v6; // r9
  unsigned int v7; // edx
  bool v8; // cf
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rax
  _QWORD *v12; // rax
  int *v14; // [rsp+40h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+20h] BYREF

  v5 = *a1;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_16;
  v7 = *a3;
  do
  {
    v8 = *((_DWORD *)v6 + 8) < v7;
    if ( *((_DWORD *)v6 + 8) == v7 )
    {
      v9 = *((_QWORD *)a3 + 1);
      v8 = v6[5] < v9;
      if ( v6[5] == v9 )
        v8 = *((_WORD *)v6 + 24) < *((_WORD *)a3 + 8);
    }
    if ( v8 )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v5 == *a1 )
    goto LABEL_16;
  v10 = v7 < *((_DWORD *)v5 + 8);
  if ( v7 == *((_DWORD *)v5 + 8) )
  {
    v11 = v5[5];
    v10 = *((_QWORD *)a3 + 1) < v11;
    if ( *((_QWORD *)a3 + 1) == v11 )
      v10 = *((_WORD *)a3 + 8) < *((_WORD *)v5 + 24);
  }
  if ( v10 )
  {
LABEL_16:
    v14 = a3;
    v12 = (_QWORD *)std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<DockInputIdentity const &>,std::tuple<>>(
                      (_DWORD)a1,
                      (unsigned int)&v15,
                      (_DWORD)v5,
                      (_DWORD)v6,
                      (__int64)&v14);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v12;
  }
  else
  {
    *(_QWORD *)a2 = v5;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
