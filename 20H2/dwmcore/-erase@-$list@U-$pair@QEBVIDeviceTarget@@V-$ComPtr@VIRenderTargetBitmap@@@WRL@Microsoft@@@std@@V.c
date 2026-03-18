/*
 * XREFs of ?erase@?$list@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1801F7924
 * Callers:
 *     ??$_Insert_unverified@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@V?$_Uhash_compare@PEBVIDeviceTarget@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@3@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180018420 (--$_Insert_unverified@U-$pair@QEBVIDeviceTarget@@V-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@.c)
 *     ??$_Insert_unverified@AEAU?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@V?$_Uhash_compare@PEBVIDeviceTarget@@U?$hash@PEBVIDeviceTarget@@@std@@U?$equal_to@PEBVIDeviceTarget@@@3@@std@@V?$allocator@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1801F7674 (--$_Insert_unverified@AEAU-$pair@QEBVIDeviceTarget@@V-$ComPtr@VIRenderTargetBitmap@@@WRL@Microso.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>>::erase(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  _QWORD *v3; // rbx

  v3 = *(_QWORD **)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --*(_QWORD *)(a1 + 8);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)a3 + 3);
  std::_Deallocate<16,0>(a3, 0x20uLL);
  *a2 = v3;
  return a2;
}
