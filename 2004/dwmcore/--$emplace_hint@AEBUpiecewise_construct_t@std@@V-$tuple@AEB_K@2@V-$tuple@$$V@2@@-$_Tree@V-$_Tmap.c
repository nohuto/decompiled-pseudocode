/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180086ED0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x180084D50 (_anonymous_namespace_--SendFramesReport.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x180086E68 (--$_Try_emplace@AEB_K$$V@-$map@_KIU-$less@_K@std@@V-$allocator@U-$pair@$$CB_KI@std@@@2@@std@@QEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEAU?$pair@$$CB_KI@1@1@Z @ 0x180086F98 (--$_Insert_at@AEAU-$pair@$$CB_KI@std@@PEAU-$_Tree_node@U-$pair@$$CB_KI@std@@PEAX@2@@-$_Tree@V-$_.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_KI@1@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@@Z @ 0x18015390C (--$_Insert_nohint@AEAU-$pair@$$CB_KI@std@@PEAU-$_Tree_node@U-$pair@$$CB_KI@std@@PEAX@2@@-$_Tree@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int64 **a5)
{
  _QWORD *v5; // rdi
  __int64 v9; // r10
  unsigned __int64 *v10; // r11
  unsigned __int64 v11; // r8
  _QWORD *v12; // rdx
  _QWORD *v13; // r9
  int v14; // edx
  int v15; // ecx
  bool v17; // cf
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rcx
  char v21; // di
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 *v24; // rcx
  char v25; // [rsp+30h] [rbp-18h] BYREF

  v5 = (_QWORD *)*a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v10 = (unsigned __int64 *)(v9 + 32);
  v11 = **a5;
  *(_QWORD *)(v9 + 32) = v11;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)(v9 + 16) = v5;
  *(_WORD *)(v9 + 24) = 0;
  v12 = (_QWORD *)*a1;
  if ( !a1[1] )
  {
    v13 = (_QWORD *)*a1;
    goto LABEL_10;
  }
  if ( a3 == (_QWORD *)*v12 )
  {
    if ( *v10 >= a3[4] )
      goto LABEL_43;
    LODWORD(v13) = (_DWORD)a3;
LABEL_10:
    LOBYTE(v11) = 1;
    goto LABEL_6;
  }
  if ( a3 != v12 )
  {
    v11 = *v10;
    v17 = a3[4] < *v10;
    if ( a3[4] > *v10 )
    {
      v13 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v13 = (_QWORD *)a3[2];
      }
      else
      {
        v18 = *a3;
        if ( *(_BYTE *)(*a3 + 25LL) )
        {
          v19 = a3[1];
          if ( !*(_BYTE *)(v19 + 25) )
          {
            v20 = a3;
            do
            {
              if ( v20 != *(_QWORD **)v19 )
                break;
              v13 = (_QWORD *)v19;
              v19 = *(_QWORD *)(v19 + 8);
              v20 = v13;
            }
            while ( !*(_BYTE *)(v19 + 25) );
          }
          if ( !*((_BYTE *)v13 + 25) )
            v13 = (_QWORD *)v19;
        }
        else
        {
          do
          {
            v13 = (_QWORD *)v18;
            v18 = *(_QWORD *)(v18 + 16);
          }
          while ( !*(_BYTE *)(v18 + 25) );
        }
      }
      if ( v13[4] < v11 )
      {
        v14 = (int)a2;
        v15 = (int)a1;
        if ( !*(_BYTE *)(v13[2] + 25LL) )
        {
          LODWORD(v13) = (_DWORD)a3;
          goto LABEL_27;
        }
        goto LABEL_28;
      }
      v17 = a3[4] < v11;
    }
    if ( !v17 )
      goto LABEL_43;
    v13 = (_QWORD *)a3[2];
    v21 = *((_BYTE *)v13 + 25);
    if ( v21 )
    {
      v13 = (_QWORD *)a3[1];
      if ( !*((_BYTE *)v13 + 25) )
      {
        v22 = a3;
        do
        {
          v23 = v13;
          if ( v22 != (_QWORD *)v13[2] )
            break;
          v13 = (_QWORD *)v13[1];
          v22 = v23;
        }
        while ( !*((_BYTE *)v13 + 25) );
      }
    }
    else
    {
      v24 = (__int64 *)*v13;
      if ( !*(_BYTE *)(*v13 + 25LL) )
      {
        do
        {
          v13 = v24;
          v24 = (__int64 *)*v24;
        }
        while ( !*((_BYTE *)v24 + 25) );
      }
    }
    if ( v13 != v12 && v11 >= v13[4] )
      goto LABEL_43;
    v14 = (int)a2;
    v15 = (int)a1;
    if ( !v21 )
    {
LABEL_27:
      LOBYTE(v11) = 1;
      goto LABEL_7;
    }
    LODWORD(v13) = (_DWORD)a3;
LABEL_28:
    LODWORD(v11) = 0;
    goto LABEL_7;
  }
  v13 = (_QWORD *)v12[2];
  if ( v13[4] >= *v10 )
  {
LABEL_43:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Insert_nohint<std::pair<unsigned __int64 const,unsigned int> &,std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *> *>(
                       (_DWORD)a1,
                       (unsigned int)&v25,
                       v11,
                       (_DWORD)v10,
                       v9);
    return a2;
  }
  LODWORD(v11) = 0;
LABEL_6:
  v14 = (int)a2;
  v15 = (int)a1;
LABEL_7:
  std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned __int64 const,unsigned int> &,std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *> *>(
    v15,
    v14,
    v11,
    (_DWORD)v13);
  return a2;
}
