/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@2@@Z @ 0x1803EF69C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@@2@0@Z @ 0x1803F09C0 (-erase@-$_Tree@V-$_Tmap_traits@PEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@U-$less@PEAUHWND.c)
 * Callees:
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@PEAX@2@@Z @ 0x1800823E4 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@UIApplicationView@@Uerr_exc.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@@Z @ 0x180084D80 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BB8A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x1800BBEFC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$com_ptr_t@UIWindowGroup@@Uerr_exception_.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  char v15; // dl
  __int64 v16; // rdi
  _BYTE *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v21; // [rsp+38h] [rbp+10h] BYREF

  v21 = (__int64 *)a2;
  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
    (__int64 *)&v21,
    a2,
    a3,
    a4);
  v6 = v5[2];
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v6 + 25) )
  {
    v6 = *v5;
LABEL_5:
    v8 = v5[1];
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    if ( *(__int64 **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v6;
    }
    else if ( *(__int64 **)v8 == v5 )
    {
      *(_QWORD *)v8 = v6;
    }
    else
    {
      *(_QWORD *)(v8 + 16) = v6;
    }
    v9 = (_QWORD *)*a1;
    v10 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
        v11 = (_QWORD *)v8;
      else
        v11 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<IWindowGroup,wil::err_exception_policy>>>>::_Min((_QWORD *)v6);
      *v9 = v11;
      v9 = (_QWORD *)*a1;
      v10 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v10[2] == v5 )
    {
      if ( *(_BYTE *)(v6 + 25) )
      {
        v12 = v8;
      }
      else
      {
        v13 = *(_QWORD *)(v6 + 16);
        v12 = v6;
        if ( !*(_BYTE *)(v13 + 25) )
        {
          do
          {
            v12 = v13;
            v13 = *(_QWORD *)(v13 + 16);
          }
          while ( !*(_BYTE *)(v13 + 25) );
          v10 = v9;
        }
      }
      v10[2] = v12;
    }
    goto LABEL_35;
  }
  v7 = (__int64)v21;
  v6 = v21[2];
  if ( v21 == v5 )
    goto LABEL_5;
  *(_QWORD *)(*v5 + 8) = v21;
  *(_QWORD *)v7 = *v5;
  if ( v7 == v5[2] )
  {
    v8 = v7;
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( !*(_BYTE *)(v6 + 25) )
      *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v8 = v6;
    *(_QWORD *)(v7 + 16) = v5[2];
    *(_QWORD *)(v5[2] + 8) = v7;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = v7;
  }
  else
  {
    v14 = (__int64 *)v5[1];
    if ( (__int64 *)*v14 == v5 )
      *v14 = v7;
    else
      v14[2] = v7;
  }
  v15 = *(_BYTE *)(v7 + 24);
  *(_QWORD *)(v7 + 8) = v5[1];
  *(_BYTE *)(v7 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v15;
LABEL_35:
  if ( *((_BYTE *)v5 + 24) == 1 )
  {
    if ( v6 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v16 = v8;
        if ( *(_BYTE *)(v6 + 24) != 1 )
          break;
        v17 = *(_BYTE **)v8;
        if ( v6 == *(_QWORD *)v8 )
        {
          v17 = *(_BYTE **)(v8 + 16);
          if ( !v17[24] )
          {
            v17[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Lrotate(
              (__int64)a1,
              v8);
            v17 = *(_BYTE **)(v8 + 16);
          }
          if ( v17[25] )
            goto LABEL_53;
          if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
              v17[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Rrotate(
                (__int64)a1,
                v17);
              v17 = *(_BYTE **)(v8 + 16);
            }
            v17[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v17 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Lrotate(
              (__int64)a1,
              v8);
            break;
          }
        }
        else
        {
          if ( !v17[24] )
          {
            v17[24] = 1;
            *(_BYTE *)(v8 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            v17 = *(_BYTE **)v8;
          }
          if ( v17[25] )
            goto LABEL_53;
          v18 = *((_QWORD *)v17 + 2);
          if ( *(_BYTE *)(v18 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v17 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v17 + 24LL) == 1 )
            {
              *(_BYTE *)(v18 + 24) = 1;
              v17[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>::_Lrotate(
                (__int64)a1,
                (__int64)v17);
              v17 = *(_BYTE **)v8;
            }
            v17[24] = *(_BYTE *)(v8 + 24);
            *(_BYTE *)(v8 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v17 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v8);
            break;
          }
        }
        v17[24] = 0;
LABEL_53:
        v6 = v16;
        v8 = *(_QWORD *)(v8 + 8);
      }
      while ( v16 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v6 + 24) = 1;
  }
  v19 = a1[1];
  if ( v19 )
    a1[1] = v19 - 1;
  return v5;
}
