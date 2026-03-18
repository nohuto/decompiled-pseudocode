/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAVCSceneNode@@PEAX@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@AEAU?$pair@QEAVCSceneNode@@PEAX@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@@Z @ 0x1802080C0
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCSceneNode@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCSceneNode@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180208354 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCSceneNode@@@2@V-$tuple@$$V@2@@-$.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180165690 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ??$_Insert_at@AEAU?$pair@QEAVCSceneNode@@PEAX@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEAU?$pair@QEAVCSceneNode@@PEAX@1@1@Z @ 0x180207F48 (--$_Insert_at@AEAU-$pair@QEAVCSceneNode@@PEAX@std@@PEAU-$_Tree_node@U-$pair@QEAVCSceneNode@@PEAX.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAVCSceneNode@@PEAX@std@@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCSceneNode@@PEAX@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAVCSceneNode@@PEAX@1@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@@Z @ 0x180208264 (--$_Insert_nohint@AEAU-$pair@QEAVCSceneNode@@PEAX@std@@PEAU-$_Tree_node@U-$pair@QEAVCSceneNode@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Insert_hint<std::pair<CSceneNode * const,void *> &,std::_Tree_node<std::pair<CSceneNode * const,void *>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  __int64 **v6; // rdi
  __int64 *v7; // r9
  _QWORD *v8; // rbx
  __int64 *v9; // r11
  char v10; // r8
  unsigned __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 *v16; // rdx
  int v17; // [rsp+20h] [rbp-28h]
  _QWORD *v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h] BYREF
  __int64 **v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = (__int64 **)*a1;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( a1[1] )
  {
    if ( a3 == *v6 )
    {
      if ( *a4 < a3[4] )
        goto LABEL_3;
LABEL_8:
      *v8 = *(_QWORD *)std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Insert_nohint<std::pair<CSceneNode * const,void *> &,std::_Tree_node<std::pair<CSceneNode * const,void *>,void *> *>(
                         (_DWORD)v9,
                         (unsigned int)&v19,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return v8;
    }
    if ( a3 == (__int64 *)v6 )
    {
      v7 = v6[2];
      if ( v7[4] >= *a4 )
        goto LABEL_8;
      v18 = a5;
    }
    else
    {
      v12 = *a4;
      if ( *a4 < a3[4] )
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
                LODWORD(a3) = (_DWORD)v15;
                if ( v16 != (__int64 *)*v15 )
                  break;
                v13 = v15;
                v15 = (__int64 *)v15[1];
                v16 = v13;
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
        if ( v13[4] < v12 )
        {
          a2 = v8;
          if ( *(_BYTE *)(v13[2] + 25) )
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
      if ( v7[4] >= v12 )
        goto LABEL_8;
      v20 = (__int64 **)v7;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++((__int64 *)&v20);
      if ( v20 != v6 && v12 >= (unsigned __int64)v20[4] )
        goto LABEL_8;
      a2 = v8;
      a1 = v9;
      v18 = a5;
      if ( !*(_BYTE *)(v7[2] + 25) )
      {
        v7 = (__int64 *)v20;
        goto LABEL_4;
      }
    }
    v10 = 0;
    goto LABEL_5;
  }
  v7 = (__int64 *)*a1;
LABEL_3:
  v18 = a5;
LABEL_4:
  v10 = 1;
LABEL_5:
  std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Insert_at<std::pair<CSceneNode * const,void *> &,std::_Tree_node<std::pair<CSceneNode * const,void *>,void *> *>(
    a1,
    a2,
    v10,
    v7,
    v17,
    v18);
  return v8;
}
