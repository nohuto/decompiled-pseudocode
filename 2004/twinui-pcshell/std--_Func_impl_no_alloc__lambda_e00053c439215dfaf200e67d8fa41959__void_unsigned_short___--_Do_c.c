/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___::_Do_call @ 0x180469F30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ParseOfficeSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAJPEBGAEAUSelectionData@2345@@Z @ 0x180469660 (-ParseOfficeSKUAttributeValue@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@Windo.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_e00053c439215dfaf200e67d8fa41959__void_unsigned_short___::_Do_call(
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData **a1,
        const unsigned __int16 **a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseOfficeSKUAttributeValue(
         (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)a1,
         *a2,
         a1[2]);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x77,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\selectiondataparser.cpp",
      (const char *)(unsigned int)v2);
}
