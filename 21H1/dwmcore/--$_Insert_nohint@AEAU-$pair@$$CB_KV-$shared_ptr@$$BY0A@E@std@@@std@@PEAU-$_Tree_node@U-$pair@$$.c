/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x1801F2CB4
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x1801F2AF0 (--$_Insert_hint@AEAU-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801780E4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@1@1@Z @ 0x1801F297C (--$_Insert_at@AEAU-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CB_K.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Insert_nohint<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        std::_Ref_count_base **a5)
{
  std::_Ref_count_base **v6; // rsi
  __int64 v8; // r9
  char v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 i; // rax
  std::_Ref_count_base *v15; // rcx
  int v17; // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v6 = a5;
  v8 = *a1;
  v9 = 1;
  v10 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v10 + 25) )
  {
    v8 = v10;
    if ( *a4 >= *(_QWORD *)(v10 + 32) )
    {
      v10 = *(_QWORD *)(v10 + 16);
      v9 = 0;
    }
    else
    {
      v10 = *(_QWORD *)v10;
      v9 = 1;
    }
  }
  v11 = v8;
  if ( v9 )
  {
    if ( v8 == *(_QWORD *)*a1 )
    {
      v9 = 1;
LABEL_9:
      v12 = std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *> *>(
              a1,
              &v18,
              v9,
              (_QWORD *)v8,
              v17,
              (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *v12;
      return a2;
    }
    if ( *(_BYTE *)(v8 + 25) )
    {
      v11 = *(_QWORD *)(v8 + 16);
    }
    else
    {
      v13 = *(_QWORD *)v8;
      if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
      {
        for ( i = *(_QWORD *)(v8 + 8); !*(_BYTE *)(i + 25) && v11 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v11 = i;
        if ( *(_BYTE *)(v11 + 25) )
          i = v11;
        v11 = i;
      }
      else
      {
        do
        {
          v11 = v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
        while ( !*(_BYTE *)(v13 + 25) );
      }
    }
  }
  if ( *(_QWORD *)(v11 + 32) < *a4 )
    goto LABEL_9;
  v15 = a5[6];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  std::_Deallocate<16,0>(v6, 0x38uLL);
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
