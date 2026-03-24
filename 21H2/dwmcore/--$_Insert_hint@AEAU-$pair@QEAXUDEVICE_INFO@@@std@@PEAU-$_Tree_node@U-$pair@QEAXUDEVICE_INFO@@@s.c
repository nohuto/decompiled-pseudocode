/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236D40
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180236FC4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAX@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tm.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180165BB0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ??$_Insert_at@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@1@Z @ 0x180236BA0 (--$_Insert_at@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@std.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236EC8 (--$_Insert_nohint@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_hint<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  _QWORD *v6; // r9
  _QWORD *v7; // rbx
  char v8; // r8
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r11
  int v14; // [rsp+20h] [rbp-28h]
  _QWORD *v15; // [rsp+28h] [rbp-20h]
  char v16; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = (_QWORD *)a1;
  v6 = (_QWORD *)a3;
  v7 = a2;
  if ( *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) )
  {
    if ( a3 == *(_QWORD *)CPointerDeviceCache::s_deviceCache )
    {
      if ( *a4 < *(_QWORD *)(a3 + 32) )
        goto LABEL_3;
LABEL_8:
      *v7 = *(_QWORD *)std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_nohint<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
                         a1,
                         (unsigned int)&v16,
                         a3,
                         (_DWORD)a4,
                         (__int64)a5);
      return v7;
    }
    if ( a3 == (_QWORD)CPointerDeviceCache::s_deviceCache )
    {
      v6 = *(_QWORD **)(CPointerDeviceCache::s_deviceCache + 16);
      if ( v6[4] >= *a4 )
        goto LABEL_8;
      v15 = a5;
    }
    else
    {
      v10 = *a4;
      if ( *a4 >= *(_QWORD *)(a3 + 32) )
        goto LABEL_30;
      v11 = a3;
      if ( *(_BYTE *)(a3 + 25) )
      {
        v11 = *(_QWORD *)(a3 + 16);
      }
      else
      {
        a1 = *(_QWORD *)a3;
        if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
        {
          a1 = *(_QWORD *)(a3 + 8);
          if ( !*(_BYTE *)(a1 + 25) )
          {
            v12 = a3;
            do
            {
              LODWORD(a3) = a1;
              if ( v12 != *(_QWORD *)a1 )
                break;
              v11 = a1;
              a1 = *(_QWORD *)(a1 + 8);
              v12 = v11;
            }
            while ( !*(_BYTE *)(a1 + 25) );
          }
          if ( !*(_BYTE *)(v11 + 25) )
            v11 = a1;
        }
        else
        {
          do
          {
            v11 = a1;
            a1 = *(_QWORD *)(a1 + 16);
          }
          while ( !*(_BYTE *)(a1 + 25) );
        }
      }
      if ( *(_QWORD *)(v11 + 32) >= v10 )
      {
LABEL_30:
        if ( v6[4] >= v10 )
          goto LABEL_8;
        v17 = v6;
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++((__int64 *)&v17);
        if ( v17 != v13 && v10 >= v17[4] )
          goto LABEL_8;
        a2 = v7;
        v15 = a5;
        if ( !*(_BYTE *)(v6[2] + 25LL) )
        {
          v6 = v17;
          goto LABEL_4;
        }
      }
      else
      {
        a1 = *(_QWORD *)(v11 + 16);
        a2 = v7;
        if ( !*(_BYTE *)(a1 + 25) )
          goto LABEL_3;
        a1 = (__int64)a5;
        v6 = (_QWORD *)v11;
        v15 = a5;
      }
    }
    v8 = 0;
    goto LABEL_5;
  }
  v6 = (_QWORD *)CPointerDeviceCache::s_deviceCache;
LABEL_3:
  v15 = a5;
LABEL_4:
  v8 = 1;
LABEL_5:
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_at<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
    a1,
    a2,
    v8,
    v6,
    v14,
    v15);
  return v7;
}
