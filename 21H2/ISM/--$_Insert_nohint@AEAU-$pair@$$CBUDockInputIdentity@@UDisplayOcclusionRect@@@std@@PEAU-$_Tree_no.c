/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x180146A38
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@@Z @ 0x180146784 (--$_Insert_hint@AEAU-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU-$_Tree_node.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x180147160 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Max@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@PEAU32@@Z @ 0x18002BEB4 (-_Max@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDisplayOcclusionRect@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@1@AEAU?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@1@1@Z @ 0x18014660C (--$_Insert_at@AEAU-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAU-$_Tree_node@U.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_nohint<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r10
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
  __int64 v18; // rcx
  bool v19; // cf
  unsigned __int64 v20; // rax
  int v21; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v5 = a4;
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v8 = v9;
    v11 = *(_DWORD *)(v9 + 32);
    v12 = *(_DWORD *)v5 < v11;
    if ( *(_DWORD *)v5 == v11 )
    {
      v13 = *(_QWORD *)(v9 + 40);
      v12 = *(_QWORD *)(v5 + 8) < v13;
      if ( *(_QWORD *)(v5 + 8) == v13 )
      {
        v14 = *(_WORD *)(v9 + 48);
        v12 = *(_WORD *)(v5 + 16) < v14;
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
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
                           a1,
                           &v22,
                           1,
                           (_QWORD *)v8,
                           v21,
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
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          v17 = *(_QWORD *)(v8 + 8);
          if ( !*(_BYTE *)(v17 + 25) )
          {
            v18 = v8;
            do
            {
              if ( v18 != *(_QWORD *)v17 )
                break;
              v15 = v17;
              v17 = *(_QWORD *)(v17 + 8);
              v18 = v15;
            }
            while ( !*(_BYTE *)(v17 + 25) );
          }
          if ( *(_BYTE *)(v15 + 25) )
            goto LABEL_23;
        }
        else
        {
          v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DisplayOcclusionRect>>>::_Max(*(_QWORD *)v8);
        }
        v15 = v17;
      }
    }
LABEL_23:
    v19 = *(_DWORD *)(v15 + 32) < *(_DWORD *)v5;
    if ( *(_DWORD *)(v15 + 32) == *(_DWORD *)v5 )
    {
      v20 = *(_QWORD *)(v5 + 8);
      v19 = *(_QWORD *)(v15 + 40) < v20;
      if ( *(_QWORD *)(v15 + 40) == v20 )
        v19 = *(_WORD *)(v15 + 48) < *(_WORD *)(v5 + 16);
    }
    if ( v19 )
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<DockInputIdentity,DisplayOcclusionRect,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DisplayOcclusionRect>>,0>>::_Insert_at<std::pair<DockInputIdentity const,DisplayOcclusionRect> &,std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *> *>(
                         a1,
                         &v22,
                         v10,
                         (_QWORD *)v8,
                         v21,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    else
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0xD0);
      *(_QWORD *)a2 = v15;
      *(_BYTE *)(a2 + 8) = 0;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0xD0);
    throw;
  }
  return result;
}
