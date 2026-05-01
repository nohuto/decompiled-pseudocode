/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x18045B6FC
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@2@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@@Z @ 0x18045C098 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@2@V-$tuple@AEAIAEBV-$bas.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BB8A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ??$_Insert_at@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@AEAU?$pair@QEAUHWND__@@UExeData@@@1@1@Z @ 0x18045B588 (--$_Insert_at@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UExeDa.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHWND__@@UExeData@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UExeData@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UExeData@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UExeData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHWND__@@UExeData@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UExeData@@@std@@PEAX@1@@Z @ 0x18045BC14 (--$_Insert_nohint@AEAU-$pair@QEAUHWND__@@UExeData@@@std@@PEAU-$_Tree_node@U-$pair@QEAUHWND__@@UE.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_hint<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  _QWORD *v6; // r9
  __int64 *v7; // rbx
  __int64 *v8; // r11
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 *result; // rax
  _QWORD *v12; // r9
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // r9
  int v18; // [rsp+20h] [rbp-28h]
  char v19; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp+8h] BYREF

  v6 = (_QWORD *)a3;
  v7 = a2;
  v8 = a1;
  v9 = (_QWORD *)*a1;
  if ( a1[1] )
  {
    if ( a3 == *v9 )
    {
      if ( *a4 < *(_QWORD *)(a3 + 32) )
      {
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          a1,
          a2,
          1,
          (_QWORD *)a3,
          v18,
          a5);
        return v7;
      }
      goto LABEL_31;
    }
    if ( (_QWORD *)a3 == v9 )
    {
      v12 = (_QWORD *)v9[2];
      if ( v12[4] < *a4 )
      {
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          a1,
          a2,
          0,
          v12,
          v18,
          a5);
        return v7;
      }
      goto LABEL_31;
    }
    v13 = *a4;
    if ( *a4 >= *(_QWORD *)(a3 + 32) )
      goto LABEL_26;
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
          a2 = (__int64 *)a3;
          do
          {
            a3 = v16;
            if ( a2 != *(__int64 **)v16 )
              break;
            v14 = v16;
            v16 = *(_QWORD *)(v16 + 8);
            a2 = (__int64 *)v14;
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
    if ( *(_QWORD *)(v14 + 32) >= v13 )
    {
LABEL_26:
      if ( v6[4] >= v13
        || (v20 = v6,
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
              (__int64 *)&v20,
              (__int64)a2,
              a3,
              (__int64)v6),
            v20 != v9)
        && v13 >= v20[4] )
      {
LABEL_31:
        *v7 = *(_QWORD *)std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_nohint<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
                           (_DWORD)v8,
                           (unsigned int)&v19,
                           a3,
                           (_DWORD)a4,
                           a5);
        return v7;
      }
      if ( *(_BYTE *)(v17[2] + 25LL) )
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          v8,
          v7,
          0,
          v17,
          v18,
          a5);
      else
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          v8,
          v7,
          1,
          v20,
          v18,
          a5);
      return v7;
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(v14 + 16) + 25LL) )
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          v8,
          v7,
          0,
          (_QWORD *)v14,
          v18,
          a5);
      else
        std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
          v8,
          v7,
          1,
          v6,
          v18,
          a5);
      return v7;
    }
  }
  else
  {
    try
    {
      std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Insert_at<std::pair<HWND__ * const,ExeData> &,std::_Tree_node<std::pair<HWND__ * const,ExeData>,void *> *>(
        a1,
        a2,
        1,
        v9,
        v18,
        a5);
      result = v7;
    }
    catch ( ... )
    {
      std::_Tree<std::_Tmap_traits<HWND__ *,ExeData,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,ExeData>>,0>>::_Destroy_if_node(
        v10,
        a5);
      throw;
    }
  }
  return result;
}
