/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x18003A560
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x18003A44C (--$_Try_emplace@AEBQEAUHWND__@@$$V@-$map@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$les.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@1@1@Z @ 0x18003A6C8 (--$_Insert_at@AEAU-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU-$_Tree_node.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BD778 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@1@@Z @ 0x1803E951C (--$_Insert_nohint@AEAU-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAU-$_Tree_.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_hint<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  __int64 *v6; // r9
  int v8; // r11d
  __int64 **v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v14; // r9
  __int64 *v15; // rcx
  __int64 *v16; // rdx
  __int64 v17; // r9
  char v18; // [rsp+30h] [rbp-18h] BYREF
  __int64 **v19; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v9 = *(__int64 ***)a1;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_at<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
      a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v9);
    return a2;
  }
  if ( a3 == *v9 )
  {
    if ( *a4 < a3[4] )
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_at<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
        a1,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)v6);
      return a2;
    }
    goto LABEL_33;
  }
  if ( a3 == (__int64 *)v9 )
  {
    v14 = v9[2];
    if ( v14[4] < *a4 )
    {
      std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_at<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
        a1,
        (_DWORD)a2,
        0,
        (_DWORD)v14);
      return a2;
    }
    goto LABEL_33;
  }
  v10 = *a4;
  if ( *a4 < a3[4] )
  {
    v11 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v11 = (__int64 *)a3[2];
    }
    else
    {
      v12 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        v15 = (__int64 *)a3[1];
        if ( !*((_BYTE *)v15 + 25) )
        {
          v16 = a3;
          do
          {
            a3 = v15;
            if ( v16 != (__int64 *)*v15 )
              break;
            v11 = v15;
            v15 = (__int64 *)v15[1];
            v16 = a3;
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
        if ( !*((_BYTE *)v11 + 25) )
          v11 = v15;
      }
      else
      {
        do
        {
          v11 = v12;
          v12 = (__int64 *)v12[2];
        }
        while ( !*((_BYTE *)v12 + 25) );
      }
    }
    if ( v11[4] < v10 )
    {
      if ( *(_BYTE *)(v11[2] + 25) )
      {
        std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_at<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
          v8,
          (_DWORD)a2,
          0,
          (_DWORD)v11);
      }
      else
      {
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_at<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
          v8,
          (_DWORD)a2,
          (_DWORD)a3,
          (_DWORD)v6);
      }
      return a2;
    }
  }
  if ( v6[4] >= v10
    || (v19 = (__int64 **)v6,
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(&v19),
        v19 != v9)
    && v10 >= (unsigned __int64)v19[4] )
  {
LABEL_33:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_nohint<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
                       v8,
                       (unsigned int)&v18,
                       (_DWORD)a3,
                       (_DWORD)a4,
                       a5);
    return a2;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v17 + 16) + 25LL) )
  {
    std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_at<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
      v8,
      (_DWORD)a2,
      0,
      v17);
  }
  else
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<HWND__ *,CDesktopPositioner::WindowCloakInfo,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>,0>>::_Insert_at<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo> &,std::_Tree_node<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>,void *> *>(
      v8,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v19);
  }
  return a2;
}
