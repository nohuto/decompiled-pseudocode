/*
 * XREFs of ??$_Insert_unverified@AEAU?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@V?$_Uhash_compare@PEBVIDeviceTarget@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@3@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1801F94B4
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@V?$_Uhash_compare@PEBVIDeviceTarget@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@3@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801F9664 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEBVIDeviceTarget@@V-$ComPtr@VIRenderTargetBitmap@@@WRL@.c)
 * Callees:
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@V?$_Uhash_compare@PEBVIDeviceTarget@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@3@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXXZ @ 0x18001872C (-_Check_size@-$_Hash@V-$_Umap_traits@PEBVIDeviceTarget@@V-$ComPtr@VIRenderTargetBitmap@@@WRL@Mic.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x1800187A0 (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BFC74 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1801F9764 (-erase@-$list@U-$pair@QEBVIDeviceTarget@@V-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@V.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>,std::_Uhash_compare<IDeviceTarget const *,std::hash<IDeviceTarget const *>,std::equal_to<IDeviceTarget const *>>,std::allocator<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>,0>>::_Insert_unverified<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>>>>(
        _QWORD *a1,
        __int64 a2,
        const unsigned __int8 *a3,
        __int64 *a4)
{
  __int64 appended; // rax
  __int64 *v9; // rax
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 **v17; // rax
  __int64 *v18; // rcx
  __int64 v20; // [rsp+40h] [rbp+8h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 8uLL);
  v9 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
         (__int64)a1,
         &v20,
         a1[6] & appended);
  v11 = 2 * v10;
  v12 = *v9;
  while ( v12 != *(_QWORD *)(a1[3] + 8 * v11) )
  {
    v12 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)a3 == *(_QWORD *)(v12 + 16) )
    {
      std::list<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>::erase(
        a1 + 1,
        &v20,
        a4);
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  v13 = *a4;
  if ( v12 != *a4 )
  {
    *(_QWORD *)a4[1] = v13;
    **(_QWORD **)(v13 + 8) = v12;
    **(_QWORD **)(v12 + 8) = a4;
    v14 = *(_QWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = a4[1];
    a4[1] = v14;
  }
  v15 = a1[3];
  v16 = *(_QWORD *)(v15 + 8 * v11);
  if ( v16 == a1[1] )
  {
    *(_QWORD *)(v15 + 8 * v11) = a4;
    *(_QWORD *)(a1[3] + 8 * v11 + 8) = a4;
  }
  else if ( v16 == v12 )
  {
    *(_QWORD *)(v15 + 8 * v11) = a4;
  }
  else
  {
    v17 = *(__int64 ***)(v15 + 8 * v11 + 8);
    v18 = *v17;
    *(_QWORD *)(v15 + 8 * v11 + 8) = *v17;
    if ( v18 != a4 )
      *(_QWORD *)(a1[3] + 8 * v11 + 8) = *(_QWORD *)(*(_QWORD *)(a1[3] + 8 * v11 + 8) + 8LL);
  }
  std::_Hash<std::_Umap_traits<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>,std::_Uhash_compare<IDeviceTarget const *,std::hash<IDeviceTarget const *>,std::equal_to<IDeviceTarget const *>>,std::allocator<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>,0>>::_Check_size((__int64)a1);
  *(_QWORD *)a2 = a4;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
