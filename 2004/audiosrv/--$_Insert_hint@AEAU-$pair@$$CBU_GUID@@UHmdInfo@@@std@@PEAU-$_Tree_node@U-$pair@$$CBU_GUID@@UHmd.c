/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x18010CBFC
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010D1E8 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-$_Tree@V-.c)
 * Callees:
 *     memcmp_0 @ 0x180074C43 (memcmp_0.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E4118 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@1@Z @ 0x18010CA88 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdIn.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@UHmdInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x18010CF1C (--$_Insert_nohint@AEAU-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_GUID@@UH.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_hint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5)
{
  _QWORD *v9; // r15
  __int64 v10; // rcx
  int v11; // r8d
  __int64 *result; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rdi
  int v20; // [rsp+20h] [rbp-58h]
  __int128 Buf2; // [rsp+30h] [rbp-48h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF

  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      Buf2 = *(_OWORD *)(a3 + 32);
      Buf1 = *a4;
      if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) < 0 )
      {
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v20,
          a5);
        return a2;
      }
      goto LABEL_31;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      v13 = v9[2];
      Buf1 = *a4;
      Buf2 = *(_OWORD *)(v13 + 32);
      if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0 )
      {
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v13,
          v20,
          a5);
        return a2;
      }
      goto LABEL_31;
    }
    Buf1 = *(_OWORD *)(a3 + 32);
    Buf2 = *a4;
    if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
      goto LABEL_24;
    v14 = a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v14 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v15 = *(_QWORD *)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        v16 = *(_QWORD *)(a3 + 8);
        if ( !*(_BYTE *)(v16 + 25) )
        {
          v17 = a3;
          do
          {
            v18 = v16;
            if ( v17 != *(_QWORD *)v16 )
              break;
            v14 = v16;
            v16 = *(_QWORD *)(v16 + 8);
            v17 = v18;
          }
          while ( !*(_BYTE *)(v16 + 25) );
        }
        if ( !*(_BYTE *)(v14 + 25) )
          v14 = v16;
      }
      else
      {
        do
        {
          v14 = v15;
          v15 = *(_QWORD *)(v15 + 16);
        }
        while ( !*(_BYTE *)(v15 + 25) );
      }
    }
    Buf1 = *a4;
    Buf2 = *(_OWORD *)(v14 + 32);
    if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0 )
    {
LABEL_24:
      Buf1 = *a4;
      Buf2 = *(_OWORD *)(a3 + 32);
      if ( memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0
        || (v23 = a3,
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>,std::_Iterator_base0>::operator++(&v23),
            v19 = (_QWORD *)v23,
            (_QWORD *)v23 != v9)
        && (Buf1 = *(_OWORD *)(v23 + 32), Buf2 = *a4, memcmp_0(&Buf2, &Buf1, 0x10uLL) >= 0) )
      {
LABEL_31:
        *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_nohint<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
                           (_DWORD)a1,
                           (unsigned int)&Buf1,
                           v11,
                           (_DWORD)a4,
                           a5);
        return a2;
      }
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)a3,
          v20,
          a5);
      else
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          1,
          v19,
          v20,
          a5);
      return a2;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          0,
          (_QWORD *)v14,
          v20,
          a5);
      else
        std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v20,
          a5);
      return a2;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Insert_at<std::pair<_GUID const,HmdInfo> &,std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *> *>(
        a1,
        a2,
        1,
        v9,
        v20,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::_Destroy_if_node(
        v10,
        a5);
      throw;
    }
  }
  return result;
}
