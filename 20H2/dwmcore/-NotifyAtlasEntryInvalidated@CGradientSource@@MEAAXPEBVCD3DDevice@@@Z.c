/*
 * XREFs of ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDevice@@@Z @ 0x18020772C
 * Callers:
 *     ?NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXPEBVCD3DDevice@@@Z @ 0x1801E66E0 (-NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXPEBVCD3DDevice@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std@@@std@@@std@@@2@@Z @ 0x180167334 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEBVCD3DDevice@@UCache@CGradientSource@@@std.c)
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x180189C6C (-find@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-.c)
 */

void __fastcall CGradientSource::NotifyAtlasEntryInvalidated(__int64 **this, const struct CD3DDevice *a2)
{
  __int64 **v2; // r11
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 *v5; // rdi
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  const struct CD3DDevice *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
    this + 1,
    &v6,
    &v7);
  v3 = v6;
  v4 = v6[5];
  if ( v4 )
    *(_QWORD *)(v4 + 56) = 0LL;
  v5 = std::_Tree_val<std::_Tree_simple_types<std::pair<CD3DDevice const * const,CGradientSource::Cache>>>::_Extract(
         v2,
         (__int64)v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v5 + 6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v5 + 5);
  std::_Deallocate<16,0>(v5, 0x38uLL);
}
