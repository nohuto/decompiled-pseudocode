/*
 * XREFs of ??1ParsedTaskbarLayout@@QEAA@XZ @ 0x1801A18AC
 * Callers:
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$3 @ 0x1801A2D15 (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$3.c)
 *     _TaskbarLayoutParser::ParseTaskbarLayoutCollectionNode_::_1_::dtor$4 @ 0x1801A2D5D (_TaskbarLayoutParser--ParseTaskbarLayoutCollectionNode_--_1_--dtor$4.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$2 @ 0x180227BE7 (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$2.c)
 *     _PWSLayoutParser::ParsePWSLayoutCollectionNode_::_1_::dtor$8 @ 0x180227C5A (_PWSLayoutParser--ParsePWSLayoutCollectionNode_--_1_--dtor$8.c)
 * Callees:
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1801A18D4 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 */

void __fastcall ParsedTaskbarLayout::~ParsedTaskbarLayout(ParsedTaskbarLayout *this)
{
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((ParsedTaskbarLayout *)((char *)this + 32));
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll((__int64)this);
}
