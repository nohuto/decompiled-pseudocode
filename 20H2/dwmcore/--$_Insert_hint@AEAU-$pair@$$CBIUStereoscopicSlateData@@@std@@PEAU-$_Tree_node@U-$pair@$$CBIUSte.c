/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicSlateData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x180252050
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180252570 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_180252570.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180165690 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@AEAU?$pair@$$CBIUStereoscopicSlateData@@@1@1@Z @ 0x180251D60 (--$_Insert_at@AEAU-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUStere.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicSlateData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicSlateData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUStereoscopicSlateData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicSlateData@@@std@@PEAX@1@@Z @ 0x180252390 (--$_Insert_nohint@AEAU-$pair@$$CBIUStereoscopicSlateData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUS.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_hint<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *v6; // rdi
  __int64 v7; // r9
  _QWORD *v8; // rbx
  __int64 *v9; // r11
  char v10; // r8
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  int v17; // [rsp+20h] [rbp-28h]
  _QWORD *v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = (_QWORD *)*a1;
  v7 = (__int64)a3;
  v8 = a2;
  v9 = a1;
  if ( a1[1] )
  {
    if ( a3 == (_QWORD *)*v6 )
    {
      if ( *a4 < *((_DWORD *)a3 + 7) )
        goto LABEL_3;
LABEL_8:
      *v8 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_nohint<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
                         (_DWORD)v9,
                         (unsigned int)&v19,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return v8;
    }
    if ( a3 == v6 )
    {
      v7 = v6[2];
      if ( *(_DWORD *)(v7 + 28) >= *a4 )
        goto LABEL_8;
      v18 = a5;
    }
    else
    {
      v12 = *a4;
      if ( *a4 < *((_DWORD *)a3 + 7) )
      {
        v13 = (__int64)a3;
        if ( *((_BYTE *)a3 + 25) )
        {
          v13 = a3[2];
        }
        else
        {
          v14 = *a3;
          if ( *(_BYTE *)(*a3 + 25LL) )
          {
            v15 = a3[1];
            if ( !*(_BYTE *)(v15 + 25) )
            {
              v16 = a3;
              do
              {
                LODWORD(a3) = v15;
                if ( v16 != *(_QWORD **)v15 )
                  break;
                v13 = v15;
                v15 = *(_QWORD *)(v15 + 8);
                v16 = (_QWORD *)v13;
              }
              while ( !*(_BYTE *)(v15 + 25) );
            }
            if ( !*(_BYTE *)(v13 + 25) )
              v13 = v15;
          }
          else
          {
            do
            {
              v13 = v14;
              v14 = *(_QWORD *)(v14 + 16);
            }
            while ( !*(_BYTE *)(v14 + 25) );
          }
        }
        if ( *(_DWORD *)(v13 + 28) < v12 )
        {
          a2 = v8;
          if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 25LL) )
          {
            v7 = v13;
            v18 = a5;
            v10 = 0;
          }
          else
          {
            v10 = 1;
            v18 = a5;
          }
          a1 = v9;
          goto LABEL_5;
        }
      }
      if ( *(_DWORD *)(v7 + 28) >= v12 )
        goto LABEL_8;
      v20 = v7;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v20);
      if ( (_QWORD *)v20 != v6 && v12 >= *(_DWORD *)(v20 + 28) )
        goto LABEL_8;
      a2 = v8;
      a1 = v9;
      v18 = a5;
      if ( !*(_BYTE *)(*(_QWORD *)(v7 + 16) + 25LL) )
      {
        v7 = v20;
        goto LABEL_4;
      }
    }
    v10 = 0;
    goto LABEL_5;
  }
  v7 = *a1;
LABEL_3:
  v18 = a5;
LABEL_4:
  v10 = 1;
LABEL_5:
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Insert_at<std::pair<unsigned int const,StereoscopicSlateData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicSlateData>,void *> *>(
    a1,
    a2,
    v10,
    (_QWORD *)v7,
    v17,
    v18);
  return v8;
}
