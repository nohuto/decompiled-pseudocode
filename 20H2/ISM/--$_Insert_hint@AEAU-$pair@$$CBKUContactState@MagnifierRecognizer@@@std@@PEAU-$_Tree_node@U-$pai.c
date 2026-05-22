/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x18017D594
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18017D900 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_T_ea_18017D900.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800C8D28 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@1@AEAU?$pair@$$CBUDockInputIdentity@@UtagRECT@@@1@1@Z @ 0x180125248 (--$_Insert_at@AEAU-$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAU-$_Tree_node@U-$pair@$$CBUD.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUContactState@MagnifierRecognizer@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x18017D7A0 (--$_Insert_nohint@AEAU-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAU-$_Tree_node@U-$p.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_hint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 *v7; // r11
  __int64 *v8; // rdi
  _QWORD *result; // rax
  __int64 v10; // r9
  unsigned int v11; // esi
  bool v12; // cf
  __int64 *v13; // r9
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rdx
  _QWORD *v18; // r10
  int v19; // [rsp+20h] [rbp-28h]
  char v20; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v21; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1;
  v8 = (__int64 *)*a1;
  if ( a1[1] )
  {
    if ( a3 == (__int64 *)*v8 )
    {
      if ( *a4 < *((_DWORD *)a3 + 8) )
      {
        std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Insert_at<std::pair<DockInputIdentity const,tagRECT> &,std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v19,
          a5);
        return a2;
      }
      goto LABEL_32;
    }
    if ( a3 == v8 )
    {
      v10 = v8[2];
      if ( *(_DWORD *)(v10 + 32) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Insert_at<std::pair<DockInputIdentity const,tagRECT> &,std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v10,
          v19,
          a5);
        return a2;
      }
      goto LABEL_32;
    }
    v11 = *a4;
    v12 = *((_DWORD *)a3 + 8) < *a4;
    if ( *((_DWORD *)a3 + 8) > *a4 )
    {
      v13 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v13 = (__int64 *)a3[2];
      }
      else
      {
        v14 = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          v15 = (__int64 *)a3[1];
          if ( !*((_BYTE *)v15 + 25) )
          {
            v16 = a3;
            do
            {
              v17 = v15;
              if ( v16 != (__int64 *)*v15 )
                break;
              v13 = v15;
              v15 = (__int64 *)v15[1];
              v16 = v17;
            }
            while ( !*((_BYTE *)v15 + 25) );
          }
          if ( !*((_BYTE *)v13 + 25) )
            v13 = v15;
        }
        else
        {
          do
          {
            v13 = v14;
            v14 = (__int64 *)v14[2];
          }
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
      if ( *((_DWORD *)v13 + 8) < v11 )
      {
        if ( *(_BYTE *)(v13[2] + 25) )
          std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Insert_at<std::pair<DockInputIdentity const,tagRECT> &,std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *> *>(
            v7,
            a2,
            0,
            v13,
            v19,
            a5);
        else
          std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Insert_at<std::pair<DockInputIdentity const,tagRECT> &,std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *> *>(
            v7,
            a2,
            1,
            a3,
            v19,
            a5);
        return a2;
      }
      v12 = *((_DWORD *)a3 + 8) < v11;
    }
    if ( !v12
      || (v21 = a3,
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++(&v21),
          v21 != v8)
      && v11 >= *((_DWORD *)v21 + 8) )
    {
LABEL_32:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Insert_nohint<std::pair<unsigned long const,MagnifierRecognizer::ContactState> &,std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *> *>(
                         (_DWORD)v7,
                         (unsigned int)&v20,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return a2;
    }
    if ( *(_BYTE *)(v18[2] + 25LL) )
      std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Insert_at<std::pair<DockInputIdentity const,tagRECT> &,std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *> *>(
        v7,
        a2,
        0,
        v18,
        v19,
        a5);
    else
      std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Insert_at<std::pair<DockInputIdentity const,tagRECT> &,std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *> *>(
        v7,
        a2,
        1,
        v21,
        v19,
        a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Insert_at<std::pair<DockInputIdentity const,tagRECT> &,std::_Tree_node<std::pair<DockInputIdentity const,tagRECT>,void *> *>(
        a1,
        a2,
        1,
        v8,
        v19,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x48);
      throw;
    }
  }
  return result;
}
