/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x1802351A8
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@@Z @ 0x180235020 (--$_Insert_hint@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@s.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Insert_at@AEAU?$pair@QEAXUDEVICE_INFO@@@std@@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEAU?$pair@QEAXUDEVICE_INFO@@@1@1@Z @ 0x180234E80 (--$_Insert_at@AEAU-$pair@QEAXUDEVICE_INFO@@@std@@PEAU-$_Tree_node@U-$pair@QEAXUDEVICE_INFO@@@std.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_nohint<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        _QWORD *a5)
{
  char v7; // r8
  _QWORD *v8; // r9
  __int64 *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *i; // rax
  int v15; // [rsp+20h] [rbp-18h]
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = a1;
  v7 = 1;
  v8 = (_QWORD *)CPointerDeviceCache::s_deviceCache;
  v9 = *(__int64 **)(CPointerDeviceCache::s_deviceCache + 8);
  if ( !*((_BYTE *)v9 + 25) )
  {
    a1 = *a4;
    do
    {
      v8 = v9;
      if ( a1 >= v9[4] )
      {
        v9 = (__int64 *)v9[2];
        v7 = 0;
      }
      else
      {
        v9 = (__int64 *)*v9;
        v7 = 1;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  v10 = v8;
  if ( v7 )
  {
    if ( v8 == *(_QWORD **)CPointerDeviceCache::s_deviceCache )
    {
      v7 = 1;
      goto LABEL_10;
    }
    if ( *((_BYTE *)v8 + 25) )
    {
      v10 = (_QWORD *)v8[2];
    }
    else
    {
      v12 = *v8;
      if ( *(_BYTE *)(*v8 + 25LL) )
      {
        for ( i = (_QWORD *)v8[1]; !*((_BYTE *)i + 25) && v10 == (_QWORD *)*i; i = (_QWORD *)i[1] )
          v10 = i;
        if ( *((_BYTE *)v10 + 25) )
          i = v10;
        v10 = i;
      }
      else
      {
        do
        {
          v10 = (_QWORD *)v12;
          v12 = *(_QWORD *)(v12 + 16);
        }
        while ( !*(_BYTE *)(v12 + 25) );
      }
    }
  }
  if ( v10[4] >= *a4 )
  {
    std::_Deallocate<16,0>(a5, 0x60uLL);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
LABEL_10:
  v11 = std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Insert_at<std::pair<void * const,DEVICE_INFO> &,std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *> *>(
          a1,
          &v16,
          v7,
          v8,
          v15,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v11;
  return a2;
}
