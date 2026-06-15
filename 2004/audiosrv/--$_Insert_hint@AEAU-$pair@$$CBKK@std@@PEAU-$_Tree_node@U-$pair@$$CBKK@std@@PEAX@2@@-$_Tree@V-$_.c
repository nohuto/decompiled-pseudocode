/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@AEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800327C0
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180032700 (--$_Try_emplace@AEBK$$V@-$map@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@QEAA-AU.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEAU?$pair@$$CBKK@1@1@Z @ 0x1800E39E8 (--$_Insert_at@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800E3B60 (--$_Insert_nohint@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E4118 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@2@@Z @ 0x1800E79A8 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@2@@std@@PEAX@2@@Z @ 0x1800E7B74 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_hint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 a5)
{
  __int64 *v6; // r9
  __int64 *v7; // rbx
  _QWORD *v8; // r11
  __int64 *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // r14d
  unsigned int v19; // r10d
  bool v20; // cf
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 i; // rcx
  __int64 v24; // r9
  char v25; // [rsp+30h] [rbp-18h] BYREF
  __int64 *v26; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = (__int64 *)*a1;
  if ( a1[1] )
  {
    if ( a3 == (__int64 *)*v9 )
    {
      if ( *a4 < *((_DWORD *)a3 + 7) )
      {
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
          (_DWORD)a1,
          (_DWORD)a2,
          (_DWORD)a3,
          (_DWORD)v6);
        return v7;
      }
    }
    else if ( a3 == v9 )
    {
      v17 = v9[2];
      if ( *(_DWORD *)(v17 + 28) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
          (_DWORD)a1,
          (_DWORD)a2,
          0,
          v17);
        return v7;
      }
    }
    else
    {
      v18 = *a4;
      v19 = *((_DWORD *)a3 + 7);
      v20 = v19 < *a4;
      if ( v19 > *a4 )
      {
        v21 = a3;
        if ( *((_BYTE *)a3 + 25) )
        {
          v21 = (__int64 *)a3[2];
        }
        else if ( *(_BYTE *)(*a3 + 25) )
        {
          v22 = a3[1];
          if ( !*(_BYTE *)(v22 + 25) )
          {
            a2 = a3;
            do
            {
              a3 = (__int64 *)v22;
              if ( a2 != *(__int64 **)v22 )
                break;
              v21 = (__int64 *)v22;
              v22 = *(_QWORD *)(v22 + 8);
              a2 = v21;
            }
            while ( !*(_BYTE *)(v22 + 25) );
          }
          if ( !*((_BYTE *)v21 + 25) )
            v21 = (__int64 *)v22;
        }
        else
        {
          v21 = (__int64 *)*a3;
          for ( i = *(_QWORD *)(*a3 + 16); !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 16) )
            v21 = (__int64 *)i;
        }
        if ( *((_DWORD *)v21 + 7) < v18 )
        {
          if ( *(_BYTE *)(v21[2] + 25) )
          {
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
              (_DWORD)v8,
              (_DWORD)v7,
              0,
              (_DWORD)v21);
          }
          else
          {
            LOBYTE(a3) = 1;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
              (_DWORD)v8,
              (_DWORD)v7,
              (_DWORD)a3,
              (_DWORD)v6);
          }
          return v7;
        }
        v20 = v19 < v18;
      }
      if ( v20 )
      {
        v26 = v6;
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>,std::_Iterator_base0>::operator++(
          &v26,
          a2,
          a3);
        if ( v26 == v9 || v18 < *((_DWORD *)v26 + 7) )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v24 + 16) + 25LL) )
          {
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
              (_DWORD)v8,
              (_DWORD)v7,
              0,
              v24);
          }
          else
          {
            LOBYTE(a3) = 1;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
              (_DWORD)v8,
              (_DWORD)v7,
              (_DWORD)a3,
              (_DWORD)v26);
          }
          return v7;
        }
      }
    }
    *v7 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_nohint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
                       (_DWORD)v8,
                       (unsigned int)&v25,
                       (_DWORD)a3,
                       (_DWORD)a4,
                       a5);
    return v7;
  }
  a1[1] = 1LL;
  v10 = a5;
  *(_QWORD *)(a5 + 8) = v9;
  if ( v9 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
    *(_QWORD *)*a1 = v10;
    *(_QWORD *)(*a1 + 16LL) = v10;
  }
  else
  {
    *v9 = v10;
    if ( v9 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v10;
  }
  v11 = v10;
  while ( !*(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) )
  {
    v13 = *(_QWORD *)(v11 + 8);
    v14 = *(__int64 **)(v13 + 8);
    v15 = *v14;
    if ( v13 == *v14 )
    {
      v16 = v14[2];
      if ( *(_BYTE *)(v16 + 24) )
      {
        if ( v11 == *(_QWORD *)(v13 + 16) )
          std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(v8, v13);
        *(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Rrotate(
          v8,
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL),
          a3,
          v10);
      }
      else
      {
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
        v11 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
      }
    }
    else if ( *(_BYTE *)(v15 + 24) )
    {
      if ( v11 == *(_QWORD *)v13 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::unique_ptr<_RecurringTask>>>>::_Rrotate(
          v8,
          v13,
          a3,
          v10);
      *(_BYTE *)(*(_QWORD *)(v11 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>::_Lrotate(
        v8,
        *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL));
    }
    else
    {
      *(_BYTE *)(v13 + 24) = 1;
      *(_BYTE *)(v15 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 24LL) = 0;
      v11 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
    }
  }
  *(_BYTE *)(*(_QWORD *)(*v8 + 8LL) + 24LL) = 1;
  *v7 = v10;
  return v7;
}
