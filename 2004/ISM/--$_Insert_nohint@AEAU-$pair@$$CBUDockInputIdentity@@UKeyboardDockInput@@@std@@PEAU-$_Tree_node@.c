/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x180125868
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x180125450 (--$_Insert_hint@AEAU-$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU-$_Tree_node@U-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@1@1@Z @ 0x180125160 (--$_Insert_at@AEAU-$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU-$_Tree_node@U-$p.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_nohint<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v8; // r9
  __int64 v9; // rdx
  char v10; // r8
  unsigned int v11; // eax
  bool v12; // cf
  unsigned __int64 v13; // rax
  unsigned __int16 v14; // ax
  __int64 v15; // rbx
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  bool v20; // cf
  unsigned __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+40h] [rbp+8h] BYREF

  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v8 = v9;
    v11 = *(_DWORD *)(v9 + 32);
    v12 = *(_DWORD *)a4 < v11;
    if ( *(_DWORD *)a4 == v11 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      v12 = *(_QWORD *)(a4 + 8) < v13;
      if ( *(_QWORD *)(a4 + 8) == v13 )
      {
        v14 = *(_WORD *)(v9 + 48);
        v12 = *(_WORD *)(a4 + 16) < v14;
      }
    }
    v10 = v12;
    if ( v12 )
      v9 = *(_QWORD *)v9;
    else
      v9 = *(_QWORD *)(v9 + 16);
  }
  try
  {
    v15 = v8;
    if ( v10 )
    {
      if ( v8 == *(_QWORD *)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
                           a1,
                           &v23,
                           1,
                           (_QWORD *)v8,
                           v22,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v15 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v17 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          v18 = *(_QWORD *)(v8 + 8);
          if ( !*(_BYTE *)(v18 + 25) )
          {
            v19 = v8;
            do
            {
              if ( v19 != *(_QWORD *)v18 )
                break;
              v15 = v18;
              v18 = *(_QWORD *)(v18 + 8);
              v19 = v15;
            }
            while ( !*(_BYTE *)(v18 + 25) );
          }
          if ( !*(_BYTE *)(v15 + 25) )
            v15 = v18;
        }
        else
        {
          do
          {
            v15 = v17;
            v17 = *(_QWORD *)(v17 + 16);
          }
          while ( !*(_BYTE *)(v17 + 25) );
        }
      }
    }
    v20 = *(_DWORD *)(v15 + 32) < *(_DWORD *)a4;
    if ( *(_DWORD *)(v15 + 32) == *(_DWORD *)a4 )
    {
      v21 = *(_QWORD *)(a4 + 8);
      v20 = *(_QWORD *)(v15 + 40) < v21;
      if ( *(_QWORD *)(v15 + 40) == v21 )
        v20 = *(_WORD *)(v15 + 48) < *(_WORD *)(a4 + 16);
    }
    if ( v20 )
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
                         a1,
                         &v23,
                         v10,
                         (_QWORD *)v8,
                         v22,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    else
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x68);
      *(_QWORD *)a2 = v15;
      *(_BYTE *)(a2 + 8) = 0;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x68);
    throw;
  }
  return result;
}
