/*
 * XREFs of ??1_bstr_t@@QEAA@XZ @ 0x18019C524
 * Callers:
 *     _TaskbarLayoutPolicyManager::IsOverrideLayout_::_1_::dtor$2 @ 0x18019E3CC (_TaskbarLayoutPolicyManager--IsOverrideLayout_--_1_--dtor$2.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$11 @ 0x1801A23F9 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$11.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$12 @ 0x1801A2405 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$12.c)
 *     _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$13 @ 0x1801A2411 (_TaskbarLayoutParser--ParsePinnedAppNode_--_1_--dtor$13.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$5 @ 0x180227627 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$5.c)
 *     _PWSLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x180227633 (_PWSLayoutParser--ParsePinnedAppNode_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$1 @ 0x180467F86 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_180467F86.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection_::_1_::dtor$4 @ 0x180467FAA (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--AddSchemaToCollection_ea_180467FAA.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile_::_1_::dtor$6 @ 0x18046836C (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--ValidateLayoutFile_--_1_--dtor$6.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$1 @ 0x180468D99 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468D99.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$2 @ 0x180468DA9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468DA9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$3 @ 0x180468DB9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468DB9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$4 @ 0x180468DC9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468DC9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$5 @ 0x180468DD9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468DD9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$6 @ 0x180468DE9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468DE9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$7 @ 0x180468DF9 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468DF9.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$8 @ 0x180468E09 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468E09.c)
 *     _WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser_::_1_::dtor$9 @ 0x180468E19 (_WindowsInternal--Shell--UnifiedTile--CuratedTileCollections--SelectionDataParser--_ea_180468E19.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall _bstr_t::~_bstr_t(_bstr_t *this)
{
  _bstr_t::_Free(this);
}
