/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x1801253C0
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUDockInputIdentity@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUDockInputIdentity@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180125D0C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUDockInputIdentity@@@2@V-$tuple@$$V@2.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069098 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@1@1@Z @ 0x1801250D0 (--$_Insert_at@AEAU-$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU-$_Tree_node@U-$p.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x1801257D8 (--$_Insert_nohint@AEAU-$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU-$_Tree_node@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_hint<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int *v5; // r11
  __int64 *v6; // r9
  __int64 **v9; // r14
  unsigned int v10; // eax
  bool v11; // cf
  unsigned __int64 v12; // rax
  _QWORD *result; // rax
  __int64 *v14; // r9
  bool v15; // cf
  unsigned __int64 v16; // rax
  unsigned int v17; // esi
  bool v18; // cf
  unsigned __int64 v19; // rax
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rcx
  __int64 *v23; // rdx
  bool v24; // cf
  unsigned __int64 v25; // rcx
  bool v26; // cf
  unsigned __int64 v27; // rax
  _QWORD *v28; // r9
  bool v29; // cf
  unsigned __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-28h]
  char v32; // [rsp+30h] [rbp-18h] BYREF
  __int64 **v33; // [rsp+50h] [rbp+8h] BYREF

  v5 = a4;
  v6 = a3;
  v9 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      v10 = *((_DWORD *)a3 + 8);
      v11 = *v5 < v10;
      if ( *v5 == v10 )
      {
        v12 = a3[5];
        v11 = *((_QWORD *)v5 + 1) < v12;
        if ( *((_QWORD *)v5 + 1) == v12 )
          v11 = *((_WORD *)v5 + 8) < *((_WORD *)a3 + 24);
      }
      if ( v11 )
      {
        std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v31,
          a5);
        return a2;
      }
      goto LABEL_49;
    }
    if ( a3 == (__int64 *)v9 )
    {
      v14 = v9[2];
      v15 = *((_DWORD *)v14 + 8) < *v5;
      if ( *((_DWORD *)v14 + 8) == *v5 )
      {
        v16 = *((_QWORD *)v5 + 1);
        v15 = v14[5] < v16;
        if ( v14[5] == v16 )
          v15 = *((_WORD *)v14 + 24) < *((_WORD *)v5 + 8);
      }
      if ( v15 )
      {
        std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
          a1,
          a2,
          0,
          v14,
          v31,
          a5);
        return a2;
      }
      goto LABEL_49;
    }
    v17 = *v5;
    v18 = *v5 < *((_DWORD *)a3 + 8);
    if ( *v5 == *((_DWORD *)a3 + 8) )
    {
      v19 = a3[5];
      v18 = *((_QWORD *)v5 + 1) < v19;
      if ( *((_QWORD *)v5 + 1) == v19 )
        v18 = *((_WORD *)v5 + 8) < *((_WORD *)a3 + 24);
    }
    if ( !v18 )
      goto LABEL_36;
    v20 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v20 = (__int64 *)a3[2];
    }
    else
    {
      v21 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v22 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v22 + 25) )
        {
          v23 = a3;
          do
          {
            LODWORD(a3) = (_DWORD)v22;
            if ( v23 != (__int64 *)*v22 )
              break;
            v20 = v22;
            v22 = (__int64 *)v22[1];
            v23 = v20;
          }
          while ( !*((_BYTE *)v22 + 25) );
        }
        if ( !*((_BYTE *)v20 + 25) )
          v20 = v22;
      }
      else
      {
        do
        {
          v20 = v21;
          v21 = (__int64 *)v21[2];
        }
        while ( !*((_BYTE *)v21 + 25) );
      }
    }
    v24 = *((_DWORD *)v20 + 8) < v17;
    if ( *((_DWORD *)v20 + 8) == v17 )
    {
      v25 = *((_QWORD *)v5 + 1);
      v24 = v20[5] < v25;
      if ( v20[5] == v25 )
        v24 = *((_WORD *)v20 + 24) < *((_WORD *)v5 + 8);
    }
    if ( v24 )
    {
      if ( *(_BYTE *)(v20[2] + 25) )
        std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
          a1,
          a2,
          0,
          v20,
          v31,
          a5);
      else
        std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
          a1,
          a2,
          1,
          v6,
          v31,
          a5);
      return a2;
    }
    else
    {
LABEL_36:
      v26 = *((_DWORD *)v6 + 8) < v17;
      if ( *((_DWORD *)v6 + 8) == v17 )
      {
        v27 = *((_QWORD *)v5 + 1);
        v26 = v6[5] < v27;
        if ( v6[5] == v27 )
          v26 = *((_WORD *)v6 + 24) < *((_WORD *)v5 + 8);
      }
      if ( !v26 )
        goto LABEL_49;
      v33 = (__int64 **)v6;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v33);
      if ( v33 != v9 )
      {
        v29 = v17 < *((_DWORD *)v33 + 8);
        if ( v17 == *((_DWORD *)v33 + 8) )
        {
          v30 = (unsigned __int64)v33[5];
          v29 = *((_QWORD *)v5 + 1) < v30;
          if ( *((_QWORD *)v5 + 1) == v30 )
            v29 = *((_WORD *)v5 + 8) < *((_WORD *)v33 + 24);
        }
        if ( !v29 )
        {
LABEL_49:
          *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_nohint<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
                             (_DWORD)a1,
                             (unsigned int)&v32,
                             (_DWORD)a3,
                             (_DWORD)v5,
                             (__int64)a5);
          return a2;
        }
      }
      if ( *(_BYTE *)(v28[2] + 25LL) )
        std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
          a1,
          a2,
          0,
          v28,
          v31,
          a5);
      else
        std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
          a1,
          a2,
          1,
          v33,
          v31,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_at<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
        a1,
        a2,
        1,
        v9,
        v31,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x68);
      throw;
    }
  }
  return result;
}
