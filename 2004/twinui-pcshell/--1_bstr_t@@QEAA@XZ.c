/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x18019C934
 * Callers:
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x18019E7DC (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$11 @ 0x1801A2809 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$11.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$12 @ 0x1801A2815 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$12.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$13 @ 0x1801A2821 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$13.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x180227EF7 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x180227F03 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$1 @ 0x180468686 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_180468686.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$4 @ 0x1804686AA (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_1804686AA.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$6 @ 0x180468A6C (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x180469499 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180469499.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x1804694A9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804694A9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x1804694B9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804694B9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x1804694C9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804694C9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x1804694D9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804694D9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x1804694E9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804694E9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$7 @ 0x1804694F9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_1804694F9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$8 @ 0x180469509 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180469509.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$9 @ 0x180469519 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180469519.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _bstr_t::~_bstr_t(_bstr_t *this)
{
  _bstr_t::_Free(this);
}
