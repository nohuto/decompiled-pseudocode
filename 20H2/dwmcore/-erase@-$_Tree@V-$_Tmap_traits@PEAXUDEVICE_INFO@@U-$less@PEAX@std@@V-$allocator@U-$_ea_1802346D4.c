/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x1802346D4
 * Callers:
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x180234570 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180165690 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UI.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@@2@0@Z @ 0x180234638 (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v2 = CPointerDeviceCache::s_deviceCache;
  v3 = 0LL;
  v4 = CPointerDeviceCache::s_deviceCache;
  v5 = CPointerDeviceCache::s_deviceCache;
  v6 = *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8);
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v5 + 25) && v7 < *(_QWORD *)(v6 + 32) )
          v5 = v6;
        v4 = v6;
        v6 = *(_QWORD *)v6;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 16);
      }
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  v8 = (__int64 *)(CPointerDeviceCache::s_deviceCache + 8);
  if ( !*(_BYTE *)(v5 + 25) )
    v8 = (__int64 *)v5;
  v9 = *v8;
  if ( !*(_BYTE *)(v9 + 25) )
  {
    v2 = *a2;
    do
    {
      if ( v2 >= *(_QWORD *)(v9 + 32) )
      {
        v9 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v5 = v9;
        v9 = *(_QWORD *)v9;
      }
    }
    while ( !*(_BYTE *)(v9 + 25) );
  }
  v10 = v4;
  v12 = v4;
  while ( v10 != v5 )
  {
    ++v3;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>,std::_Iterator_base0>::operator++(&v12);
    v10 = v12;
  }
  std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
    v2,
    &v12,
    v4,
    v5);
  return v3;
}
