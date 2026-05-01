/*
 * XREFs of ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18017D78C
 * Callers:
 *     ??$_Emplace_reallocate@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAPEAUParsedTaskbarLayout@@QEAU2@$$QEAU2@@Z @ 0x18017D288 (--$_Emplace_reallocate@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParse.c)
 *     ??$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@PEAU1@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@YAPEAUParsedPenWorkspaceLayout@@QEAU1@0PEAU1@AEAV?$allocator@UParsedPenWorkspaceLayout@@@0@@Z @ 0x18017D4B4 (--$_Uninitialized_move@PEAUParsedPenWorkspaceLayout@@PEAU1@V-$allocator@UParsedPenWorkspaceLayou.c)
 *     ??$emplace_back@UParsedTaskbarLayout@@@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAX$$QEAUParsedTaskbarLayout@@@Z @ 0x18017D58C (--$emplace_back@UParsedTaskbarLayout@@@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskba.c)
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18017E940 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 *     std::_Func_impl_no_alloc__lambda_4e68ad2abbd0bb666338069fbee19963__WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData_ParsedPenWorkspaceLayout_const_&_::_Do_call @ 0x18017F790 (std--_Func_impl_no_alloc__lambda_4e68ad2abbd0bb666338069fbee19963__WindowsInternal-_ea_18017F790.c)
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1802043A0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x18017E004 (-Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z.c)
 */

// Hidden C++ exception states: #wind=3
WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *__fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::SelectionData(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  *(_QWORD *)this = 0LL;
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(this, a2);
  return this;
}
