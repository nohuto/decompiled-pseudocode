/*
 * XREFs of ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800900B0
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18008FB20 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     _lambda_c364fe7c41acf4148978cba8a333a804_::operator() @ 0x180158820 (_lambda_c364fe7c41acf4148978cba8a333a804_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_::_Do_call @ 0x180167420 (std--_Func_impl_no_alloc__lambda_bb99315a2e04bb315428571541c06609__void_--_Do_call.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@@std@@@std@@@std@@@2@@Z @ 0x180167BD8 (-erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$map@U_GUID@@V-$vector@EV-$allocator@E@std@@@std@@UGuid.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x180167C84 (-erase@-$_Tree@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDriverH.c)
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801A1AD8 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801A1F30 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 *     ?erase@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@@2@V32@@Z @ 0x1801A261C (-erase@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_ptr@UHotKeyInf.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBamos@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18002BF1C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@VBamoPeer@MPCManagerBamo_AutoBa.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x18006A0A0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x18006C634 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@.c)
 */

__int64 *__fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>>>::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9
  __int64 *v5; // r11
  __int64 *i; // rax
  __int64 v7; // r10
  _QWORD *v8; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 **v13; // rcx
  char v14; // dl
  __int64 v15; // rdi
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v2 = a2 + 2;
  v3 = a2[2];
  v5 = a2;
  if ( *(_BYTE *)(v3 + 25) )
  {
    for ( i = (__int64 *)a2[1]; !*((_BYTE *)i + 25) && a2 == (__int64 *)i[2]; i = (__int64 *)i[1] )
      a2 = i;
  }
  else
  {
    i = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)a2[2]);
  }
  if ( *(_BYTE *)(*v5 + 25) )
    goto LABEL_12;
  if ( *(_BYTE *)(v3 + 25) )
  {
    v3 = *v5;
LABEL_12:
    v7 = v5[1];
    if ( !*(_BYTE *)(v3 + 25) )
      *(_QWORD *)(v3 + 8) = v7;
    if ( *(__int64 **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v3;
    }
    else if ( *(__int64 **)v7 == v5 )
    {
      *(_QWORD *)v7 = v3;
    }
    else
    {
      *(_QWORD *)(v7 + 16) = v3;
    }
    v8 = (_QWORD *)*a1;
    v9 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v3 + 25) )
        v10 = (_QWORD *)v7;
      else
        v10 = std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<MPCManagerBamo_AutoBamos::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>>::_Min((_QWORD *)v3);
      *v8 = v10;
      v8 = (_QWORD *)*a1;
      v9 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v9[2] == v5 )
    {
      if ( *(_BYTE *)(v3 + 25) )
      {
        v11 = v7;
      }
      else
      {
        v12 = *(_QWORD *)(v3 + 16);
        v11 = v3;
        if ( !*(_BYTE *)(v12 + 25) )
        {
          do
          {
            v11 = v12;
            v12 = *(_QWORD *)(v12 + 16);
          }
          while ( !*(_BYTE *)(v12 + 25) );
          v9 = v8;
        }
      }
      v9[2] = v11;
    }
    goto LABEL_42;
  }
  v3 = i[2];
  if ( i == v5 )
    goto LABEL_12;
  *(_QWORD *)(*v5 + 8) = i;
  *i = *v5;
  if ( i == (__int64 *)*v2 )
  {
    v7 = (__int64)i;
  }
  else
  {
    v7 = i[1];
    if ( !*(_BYTE *)(v3 + 25) )
      *(_QWORD *)(v3 + 8) = v7;
    *(_QWORD *)v7 = v3;
    i[2] = *v2;
    *(_QWORD *)(*v2 + 8LL) = i;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = i;
  }
  else
  {
    v13 = (__int64 **)v5[1];
    if ( *v13 == v5 )
      *v13 = i;
    else
      v13[2] = i;
  }
  v14 = *((_BYTE *)i + 24);
  i[1] = v5[1];
  *((_BYTE *)i + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v14;
LABEL_42:
  if ( *((_BYTE *)v5 + 24) == 1 )
  {
    if ( v3 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v15 = v7;
        if ( *(_BYTE *)(v3 + 24) != 1 )
          break;
        v16 = *(_BYTE **)v7;
        if ( v3 == *(_QWORD *)v7 )
        {
          v16 = *(_BYTE **)(v7 + 16);
          if ( !v16[24] )
          {
            v16[24] = 1;
            *(_BYTE *)(v7 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
              (__int64)a1,
              v7);
            v16 = *(_BYTE **)(v7 + 16);
          }
          if ( v16[25] )
            goto LABEL_60;
          if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
              v16[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
                (__int64)a1,
                v16);
              v16 = *(_BYTE **)(v7 + 16);
            }
            v16[24] = *(_BYTE *)(v7 + 24);
            *(_BYTE *)(v7 + 24) = 1;
            *(_BYTE *)(*((_QWORD *)v16 + 2) + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
              (__int64)a1,
              v7);
            break;
          }
        }
        else
        {
          if ( !v16[24] )
          {
            v16[24] = 1;
            *(_BYTE *)(v7 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v7);
            v16 = *(_BYTE **)v7;
          }
          if ( v16[25] )
            goto LABEL_60;
          v17 = *((_QWORD *)v16 + 2);
          if ( *(_BYTE *)(v17 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v16 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v16 + 24LL) == 1 )
            {
              *(_BYTE *)(v17 + 24) = 1;
              v16[24] = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
                (__int64)a1,
                (__int64)v16);
              v16 = *(_BYTE **)v7;
            }
            v16[24] = *(_BYTE *)(v7 + 24);
            *(_BYTE *)(v7 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v16 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
              (__int64)a1,
              (_QWORD *)v7);
            break;
          }
        }
        v16[24] = 0;
LABEL_60:
        v3 = v15;
        v7 = *(_QWORD *)(v7 + 8);
      }
      while ( v15 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v3 + 24) = 1;
  }
  v18 = a1[1];
  if ( v18 )
    a1[1] = v18 - 1;
  return v5;
}
