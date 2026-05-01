/*
 * XREFs of ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x180468508
 * Callers:
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180468540 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180468648 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180468874 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x18013C714 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::ChangeType(VARIANTARG *pvarSrc, VARTYPE a2, const struct _variant_t *a3)
{
  HRESULT v3; // eax

  if ( a2 != pvarSrc->vt )
  {
    v3 = VariantChangeType(pvarSrc, pvarSrc, 0, a2);
    if ( v3 < 0 )
      _com_issue_error((char *)(unsigned int)v3);
  }
}
