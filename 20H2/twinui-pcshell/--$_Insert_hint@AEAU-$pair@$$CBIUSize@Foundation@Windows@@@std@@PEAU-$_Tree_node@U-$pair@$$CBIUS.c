/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x180366490
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803672D4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1803672D4.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@1@1@Z @ 0x1803661A4 (--$_Insert_at@AEAU-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUSiz.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUSize@Foundation@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x1803668F4 (--$_Insert_nohint@AEAU-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_hint<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  __int64 **v7; // r10
  _QWORD *result; // rax
  __int64 *v9; // r9
  unsigned int v10; // edi
  bool v11; // cf
  __int64 *v12; // r9
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rdx
  __int64 **v16; // r9
  char v17; // r11
  __int64 *v18; // rax
  __int64 *v19; // rdx
  __int64 *i; // rdx
  int v21; // [rsp+20h] [rbp-28h]
  char v22; // [rsp+30h] [rbp-18h] BYREF

  v7 = (__int64 **)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v7 )
    {
      if ( *a4 < *((_DWORD *)a3 + 7) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
          a1,
          a2,
          1,
          a3,
          v21,
          a5);
        return a2;
      }
      goto LABEL_40;
    }
    if ( a3 == (__int64 *)v7 )
    {
      v9 = v7[2];
      if ( *((_DWORD *)v9 + 7) < *a4 )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
          a1,
          a2,
          0,
          v9,
          v21,
          a5);
        return a2;
      }
      goto LABEL_40;
    }
    v10 = *a4;
    v11 = *((_DWORD *)a3 + 7) < *a4;
    if ( *((_DWORD *)a3 + 7) > *a4 )
    {
      v12 = a3;
      if ( *((_BYTE *)a3 + 25) )
      {
        v12 = (__int64 *)a3[2];
      }
      else
      {
        v13 = (__int64 *)*a3;
        if ( *(_BYTE *)(*a3 + 25) )
        {
          v14 = (__int64 *)a3[1];
          if ( !*((_BYTE *)v14 + 25) )
          {
            v15 = a3;
            do
            {
              if ( v15 != (__int64 *)*v14 )
                break;
              v12 = v14;
              v14 = (__int64 *)v14[1];
              v15 = v12;
            }
            while ( !*((_BYTE *)v14 + 25) );
          }
          if ( !*((_BYTE *)v12 + 25) )
            v12 = v14;
        }
        else
        {
          do
          {
            v12 = v13;
            v13 = (__int64 *)v13[2];
          }
          while ( !*((_BYTE *)v13 + 25) );
        }
      }
      if ( *((_DWORD *)v12 + 7) < v10 )
      {
        if ( *(_BYTE *)(v12[2] + 25) )
          std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
            a1,
            a2,
            0,
            v12,
            v21,
            a5);
        else
          std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
            a1,
            a2,
            1,
            a3,
            v21,
            a5);
        return a2;
      }
      v11 = *((_DWORD *)a3 + 7) < v10;
    }
    if ( !v11 )
      goto LABEL_40;
    v16 = (__int64 **)a3[2];
    v17 = *((_BYTE *)v16 + 25);
    if ( v17 )
    {
      v16 = (__int64 **)a3[1];
      if ( !*((_BYTE *)v16 + 25) )
      {
        v18 = a3;
        do
        {
          v19 = (__int64 *)v16;
          if ( v18 != v16[2] )
            break;
          v16 = (__int64 **)v16[1];
          v18 = v19;
        }
        while ( !*((_BYTE *)v16 + 25) );
      }
    }
    else
    {
      for ( i = *v16; !*((_BYTE *)i + 25); i = (__int64 *)*i )
        v16 = (__int64 **)i;
    }
    if ( v16 != v7 && v10 >= *((_DWORD *)v16 + 7) )
    {
LABEL_40:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_nohint<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
                         (_DWORD)a1,
                         (unsigned int)&v22,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return a2;
    }
    if ( v17 )
      std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
        a1,
        a2,
        0,
        a3,
        v21,
        a5);
    else
      std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
        a1,
        a2,
        1,
        v16,
        v21,
        a5);
    return a2;
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::_Insert_at<std::pair<unsigned int const,Windows::Foundation::Size> &,std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *> *>(
        a1,
        a2,
        1,
        v7,
        v21,
        a5);
      result = a2;
    }
    catch ( ... )
    {
      std::_Deallocate<16,0>(a5, (const struct std::nothrow_t *)0x28);
      throw;
    }
  }
  return result;
}
