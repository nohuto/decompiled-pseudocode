/*
 * XREFs of ?_com_issue_error@@YAXJ@Z @ 0x18013C714
 * Callers:
 *     ??0Data_t@_bstr_t@@QEAA@PEBG@Z @ 0x18019C02C (--0Data_t@_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x18019C254 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ??0_variant_t@@QEAA@PEBG@Z @ 0x18019C2C8 (--0_variant_t@@QEAA@PEBG@Z.c)
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x18019C45C (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ??1_variant_t@@QEAA@XZ @ 0x18019C530 (--1_variant_t@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x18019F4A0 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??1PWSLayoutPolicyManager@@UEAA@XZ @ 0x180225258 (--1PWSLayoutPolicyManager@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x180225FEC (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x180467D6C (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1804680D8 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x180468508 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180468540 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180468648 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180468874 (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x180468E30 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall __noreturn _com_issue_error(char *a1)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::in1diag3::Throw_Hr(
    retaddr,
    31LL,
    (__int64)"pcshell\\twinui\\dll\\twinui.cpp",
    (const char *)(unsigned int)a1);
  JUMPOUT(0x18013C731LL);
}
