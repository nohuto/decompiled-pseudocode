/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x1801E3DC8
 * Callers:
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x18003109C (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180013490 (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D060 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@2@@Z @ 0x1801E3B18 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCVisualTree@@UVisualPropertyData@CProjec.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2)
{
  _QWORD *v2; // r10
  __int64 v3; // rsi
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // r11
  __int64 v10; // rax
  __int64 v12; // r9
  __int64 *v13; // rbx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)*a1;
  v3 = 0LL;
  v5 = *a1;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  v8 = v7;
  if ( !*(_BYTE *)(v7 + 25) )
  {
    v9 = *a2;
    do
    {
      if ( *(_QWORD *)(v8 + 32) >= v9 )
      {
        if ( *(_BYTE *)(v6 + 25) && v9 < *(_QWORD *)(v8 + 32) )
          v6 = v8;
        v5 = v8;
        v8 = *(_QWORD *)v8;
      }
      else
      {
        v8 = *(_QWORD *)(v8 + 16);
      }
    }
    while ( !*(_BYTE *)(v8 + 25) );
  }
  if ( !*(_BYTE *)(v6 + 25) )
    v7 = *(_QWORD *)v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *a2 >= *(_QWORD *)(v7 + 32) )
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v6 = v7;
      v7 = *(_QWORD *)v7;
    }
  }
  v10 = v5;
  v14 = v5;
  while ( v10 != v6 )
  {
    ++v3;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v14);
    v10 = v14;
  }
  v14 = v5;
  if ( v5 == *v2 && (_QWORD *)v6 == v2 )
  {
    std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(a1);
  }
  else
  {
    while ( v5 != v6 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v14);
      v13 = std::_Tree_val<std::_Tree_simple_types<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>>::_Extract(
              a1,
              v12);
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v13 + 10);
      std::_Deallocate<16,0>(v13, 0x58uLL);
      v5 = v14;
    }
  }
  return v3;
}
