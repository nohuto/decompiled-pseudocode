/*
 * XREFs of ?CreateDataProviderProxy@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataProviderProxy@@@Z @ 0x1800D24B0
 * Callers:
 *     ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800D23C0 (-Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@1@AEBV?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@1@@Z @ 0x18002E1E8 (--0-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$hash@.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CreateDataProviderProxy(
        struct dataprovider_AutoBamos::BamoPeer *a1,
        struct BamoDataProviderProxy **a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct dataprovider_AutoBamos::BamoPeer *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v3 = (char *)DefaultHeap::AllocClear(0x90uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v3 + 24, 0, 0x78uLL);
  *((_DWORD *)v4 + 6) = 0;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 11) = 0;
  *((_QWORD *)v4 + 2) = &BamoImpl::BamoDataProviderProxyImpl::`vftable';
  *((_QWORD *)v4 + 6) = 0LL;
  *((_DWORD *)v4 + 14) = 0;
  *(_QWORD *)v4 = &DataProviderProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v4 + 1) = &DataProviderProxy::`vftable'{for `IDataProviderProxy'};
  LODWORD(v7) = 0;
  std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>(
    (__int64)(v4 + 80),
    &v7);
  *a2 = (struct BamoDataProviderProxy *)v4;
  return 0LL;
}
