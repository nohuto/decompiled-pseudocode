/*
 * XREFs of ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800C9658
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged_::_1_::dtor$1 @ 0x1800CCCD2 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--OnTabsChanged_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged_::_1_::dtor$2 @ 0x1800CCCDE (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--OnTabsChanged_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel_::_1_::dtor$0 @ 0x1800CD513 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveWindowTabDataModel_--_1_-.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$1 @ 0x1800CDFEC (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindow_--_1_--dtor.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$2 @ 0x1800CDFF8 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindo_ea_1800CDFF8.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$2 @ 0x1800D3B0F (_winrt--Windows--Internal--Shell--implementation--WindowData--SyncWindowTabDataMode_ea_1800D3B0F.c)
 *     ??1?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ @ 0x18019C3F8 (--1-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18019FE58 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18019FFB8 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18022619C (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1802262F8 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     _WindowRelativePositioning::GetAdjacentPosition_::_1_::dtor$2 @ 0x1803F13F3 (_WindowRelativePositioning--GetAdjacentPosition_--_1_--dtor$2.c)
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x180467FBC (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1804680D8 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089674 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<tagRECT>::~vector<tagRECT>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
