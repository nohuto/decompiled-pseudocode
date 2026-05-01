/*
 * XREFs of ??1_variant_t@@QEAA@XZ @ 0x18019C530
 * Callers:
 *     _TaskbarLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18019F6F1 (_TaskbarLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _PWSLayoutPolicyManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180226151 (_PWSLayoutPolicyManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$3 @ 0x180467F9E (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_180467F9E.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$4 @ 0x180468354 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$4.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue_::_1_::dtor$0 @ 0x180468633 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetBoolAttributeValue_--_1_--dtor$.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue_::_1_::dtor$1 @ 0x180468773 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetStringAttributeValue_--_1_--dto.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue_::_1_::dtor$0 @ 0x180468954 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--GetUintAttributeValue_--_1_--dtor$.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x18013C714 (-_com_issue_error@@YAXJ@Z.c)
 */

void __fastcall _variant_t::~_variant_t(VARIANTARG *this)
{
  HRESULT v1; // eax

  v1 = VariantClear(this);
  if ( v1 < 0 )
    _com_issue_error((char *)(unsigned int)v1);
}
