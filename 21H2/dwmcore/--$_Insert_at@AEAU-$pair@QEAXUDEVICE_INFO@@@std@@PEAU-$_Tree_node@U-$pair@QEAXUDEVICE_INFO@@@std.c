/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@1@Z @ 0x180236BA0
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236D40 (--$_Insert_hint@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@s.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180236EC8 (--$_Insert_nohint@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180152980 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1801529D0 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_at<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r11
  _QWORD *v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *result; // rax

  v6 = a2;
  if ( *((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1) >= 0x2AAAAAAAAAAAAA9uLL )
  {
    std::_Deallocate<16,0>(a6, 0x60uLL);
    std::_Xlength_error("map/set<T> too long");
  }
  v7 = a6;
  ++*((_QWORD *)&CPointerDeviceCache::s_deviceCache + 1);
  a6[1] = a4;
  if ( a4 == (_QWORD *)CPointerDeviceCache::s_deviceCache )
  {
    *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8) = a6;
    *(_QWORD *)CPointerDeviceCache::s_deviceCache = a6;
    v8 = CPointerDeviceCache::s_deviceCache;
LABEL_9:
    *(_QWORD *)(v8 + 16) = a6;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)CPointerDeviceCache::s_deviceCache )
      *(_QWORD *)CPointerDeviceCache::s_deviceCache = a6;
    goto LABEL_10;
  }
  a4[2] = a6;
  v8 = CPointerDeviceCache::s_deviceCache;
  if ( a4 == *(_QWORD **)(CPointerDeviceCache::s_deviceCache + 16) )
    goto LABEL_9;
LABEL_10:
  v9 = a6[1];
  v10 = a6;
  while ( !*(_BYTE *)(v9 + 24) )
  {
    v11 = v10[1];
    v12 = *(__int64 **)(v11 + 8);
    v13 = *v12;
    if ( v11 == *v12 )
    {
      v13 = v12[2];
      if ( !*(_BYTE *)(v13 + 24) )
        goto LABEL_17;
      if ( v10 == *(_QWORD **)(v11 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
          (__int64)&CPointerDeviceCache::s_deviceCache,
          v10[1]);
      *(_BYTE *)(v10[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v10[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        (__int64)&CPointerDeviceCache::s_deviceCache,
        *(_QWORD **)(v10[1] + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v13 + 24) )
      {
LABEL_17:
        *(_BYTE *)(v11 + 24) = 1;
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v10[1] + 8LL) + 24LL) = 0;
        v10 = *(_QWORD **)(v10[1] + 8LL);
        goto LABEL_21;
      }
      if ( v10 == *(_QWORD **)v11 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          (__int64)&CPointerDeviceCache::s_deviceCache,
          (_QWORD *)v10[1]);
      *(_BYTE *)(v10[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v10[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
        (__int64)&CPointerDeviceCache::s_deviceCache,
        *(_QWORD *)(v10[1] + 8LL));
    }
LABEL_21:
    v9 = v10[1];
  }
  v14 = CPointerDeviceCache::s_deviceCache;
  *v6 = v7;
  v15 = *(_QWORD *)(v14 + 8);
  result = v6;
  *(_BYTE *)(v15 + 24) = 1;
  return result;
}
