/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800D5A14
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x180031A5C (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@0@@Z @ 0x1800D5960 (--$_Uninitialized_move@PEAV-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuffer@@.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@2@_K1@Z @ 0x1800D59A0 (-_Change_array@-$vector@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuffer@@@s.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CSwapChainBuffer>>>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  CDrawListEntry *v5; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = *(CDrawListEntry **)(v4 + 96);
        if ( v5 )
          CDrawListEntry::Release(v5);
        FastRegion::CRegion::FreeMemory((void **)(v4 + 16));
        operator delete((void *)v4);
      }
      ++v3;
    }
    while ( v3 != a2 );
  }
}
