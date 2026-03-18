/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@V?$_Uhash_compare@PEBVIDeviceTarget@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@3@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEBVIDeviceTarget@@@Z @ 0x18000586C
 * Callers:
 *     ?GetRealizationForEffectInput@CWindowBackgroundTreatment@@QEBAPEAVIBitmapRealization@@PEBVIDeviceTarget@@@Z @ 0x1800057D0 (-GetRealizationForEffectInput@CWindowBackgroundTreatment@@QEBAPEAVIBitmapRealization@@PEBVIDevic.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z @ 0x1800058E8 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<IDeviceTarget const *,Microsoft::WRL::ComPtr<IRenderTargetBitmap>,std::_Uhash_compare<IDeviceTarget const *,std::hash<IDeviceTarget const *>,std::equal_to<IDeviceTarget const *>>,std::allocator<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>,0>>::lower_bound(
        unsigned __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 appended; // rax
  _QWORD *v6; // r11
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *i; // r8
  _QWORD *v11; // rax

  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  v7 = v6[3];
  v8 = v6[1];
  v9 = 2 * (v6[6] & appended);
  for ( i = *(_QWORD **)(v7 + 16 * (v6[6] & appended)); ; i = (_QWORD *)*i )
  {
    v11 = *(_QWORD *)(v7 + 8 * v9) == v8 ? (_QWORD *)v6[1] : **(_QWORD ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
      break;
    if ( i[2] == *(_QWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = v8;
  return a2;
}
