/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x180185E78
 * Callers:
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x180185904 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18018579C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18018598C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@@std.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180185E38 (-clear@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 **v2; // r10
  char v3; // r11
  __int64 *v4; // r9
  __int64 *v5; // rbx
  __int64 *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 **v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 *v13; // r9
  __int64 *v14; // rax
  __int64 *v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v2 = (__int64 **)CPointerDeviceCache::s_deviceCache;
  v3 = 0;
  v4 = (__int64 *)CPointerDeviceCache::s_deviceCache;
  v5 = (__int64 *)CPointerDeviceCache::s_deviceCache;
  v6 = *(__int64 **)(CPointerDeviceCache::s_deviceCache + 8);
  if ( !*((_BYTE *)v6 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( v6[4] >= v7 )
      {
        if ( *((_BYTE *)v5 + 25) && v7 < v6[4] )
          v5 = v6;
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  v8 = (__int64 **)(CPointerDeviceCache::s_deviceCache + 8);
  if ( !*((_BYTE *)v5 + 25) )
    v8 = (__int64 **)v5;
  v9 = *v8;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( *a2 >= v9[4] )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v5 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  v10 = v4;
  v11 = 0LL;
  v15 = v4;
  while ( v10 != v5 )
  {
    ++v11;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v15);
    v10 = v15;
  }
  v15 = v4;
  if ( v4 != *v2 || *((_BYTE *)v5 + 25) == v3 )
  {
    while ( v4 != v5 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v15);
      v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Extract(
              &CPointerDeviceCache::s_deviceCache,
              v13);
      std::_Deallocate<16,0>(v14, 0x60uLL);
      v4 = v15;
    }
  }
  else
  {
    std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear();
  }
  return v11;
}
