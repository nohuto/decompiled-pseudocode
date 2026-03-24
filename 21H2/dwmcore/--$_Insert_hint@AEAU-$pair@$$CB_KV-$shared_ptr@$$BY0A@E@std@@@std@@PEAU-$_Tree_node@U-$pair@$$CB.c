/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x1801EF070
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801EF33C (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$__ea_1801EF33C.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@PEAU32@@Z @ 0x180167B04 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@SA.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@1@1@Z @ 0x1801EEEFC (--$_Insert_at@AEAU-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CB_K.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KV?$shared_ptr@$$BY0A@E@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x1801EF234 (--$_Insert_nohint@AEAU-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAU-$_Tree_node@U-$pair@$$.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Insert_hint<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  __int64 **v6; // r11
  __int64 *v7; // rbx
  __int64 *v8; // r10
  __int64 **v9; // r9
  char v10; // r8
  unsigned __int64 v11; // rsi
  bool v12; // cf
  __int64 v13; // rax
  __int64 **v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  char v17; // di
  __int64 *v18; // rax
  __int64 *v19; // rcx
  int v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h] BYREF

  v6 = (__int64 **)*a1;
  v7 = a2;
  v8 = a1;
  if ( a1[1] )
  {
    if ( a3 == *v6 )
    {
      if ( *a4 < a3[4] )
      {
        v22 = a5;
LABEL_8:
        v9 = (__int64 **)a3;
        goto LABEL_3;
      }
LABEL_40:
      *v7 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Insert_nohint<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *> *>(
                         (_DWORD)v8,
                         (unsigned int)&v23,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         a5);
      return v7;
    }
    if ( a3 == (__int64 *)v6 )
    {
      v9 = (__int64 **)v6[2];
      if ( (unsigned __int64)v9[4] >= *a4 )
        goto LABEL_40;
      v22 = a5;
    }
    else
    {
      v11 = *a4;
      v12 = a3[4] < *a4;
      if ( a3[4] > *a4 )
      {
        v9 = (__int64 **)a3;
        if ( *((_BYTE *)a3 + 25) )
        {
          v9 = (__int64 **)a3[2];
        }
        else
        {
          v13 = *a3;
          if ( *(_BYTE *)(*a3 + 25) )
          {
            v14 = (__int64 **)a3[1];
            if ( !*((_BYTE *)v14 + 25) )
            {
              v15 = a3;
              do
              {
                if ( v15 != *v14 )
                  break;
                v9 = v14;
                v15 = (__int64 *)v14;
                v14 = (__int64 **)v14[1];
              }
              while ( !*((_BYTE *)v14 + 25) );
            }
            if ( !*((_BYTE *)v9 + 25) )
              v9 = v14;
          }
          else
          {
            do
            {
              v9 = (__int64 **)v13;
              v13 = *(_QWORD *)(v13 + 16);
            }
            while ( !*(_BYTE *)(v13 + 25) );
          }
        }
        if ( (unsigned __int64)v9[4] < v11 )
        {
          a1 = v8;
          v22 = a5;
          if ( !*((_BYTE *)v9[2] + 25) )
            goto LABEL_8;
          goto LABEL_12;
        }
        v12 = a3[4] < v11;
      }
      if ( !v12 )
        goto LABEL_40;
      v16 = a3[2];
      v17 = *(_BYTE *)(v16 + 25);
      if ( v17 )
      {
        v9 = (__int64 **)a3[1];
        if ( !*((_BYTE *)v9 + 25) )
        {
          v18 = a3;
          do
          {
            v19 = (__int64 *)v9;
            if ( v18 != v9[2] )
              break;
            v9 = (__int64 **)v9[1];
            v18 = v19;
          }
          while ( !*((_BYTE *)v9 + 25) );
        }
      }
      else
      {
        v9 = (__int64 **)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,StereoscopicViewData>>>::_Min((_QWORD *)v16);
      }
      if ( v9 != v6 && v11 >= (unsigned __int64)v9[4] )
        goto LABEL_40;
      a2 = v7;
      v22 = a5;
      a1 = v8;
      if ( !v17 )
        goto LABEL_3;
      v9 = (__int64 **)a3;
    }
LABEL_12:
    v10 = 0;
    goto LABEL_4;
  }
  v9 = (__int64 **)*a1;
  v22 = a5;
LABEL_3:
  v10 = 1;
LABEL_4:
  std::_Tree<std::_Tmap_traits<unsigned __int64,std::shared_ptr<unsigned char [0]>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>,0>>::_Insert_at<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>> &,std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *> *>(
    a1,
    a2,
    v10,
    v9,
    v21,
    v22);
  return v7;
}
