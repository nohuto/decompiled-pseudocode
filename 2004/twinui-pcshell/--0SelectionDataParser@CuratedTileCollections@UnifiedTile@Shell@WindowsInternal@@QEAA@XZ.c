/*
 * XREFs of ??0SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1804692B8
 * Callers:
 *     ??$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@12@XZ @ 0x1801A0D50 (--$Make@VSelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@$$V@Detai.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??4_bstr_t@@QEAAAEAV0@PEBG@Z @ 0x180469530 (--4_bstr_t@@QEAAAEAV0@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=10
WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *__fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::SelectionDataParser(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *this)
{
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *v1; // rax
  _bstr_t *v2; // rbx
  _bstr_t *v3; // rdi
  _bstr_t *v4; // rsi
  _bstr_t *v5; // r14
  _bstr_t *v6; // r15
  _bstr_t *v7; // rbp
  _bstr_t *v8; // r12
  _bstr_t *v9; // r13
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rax
  unsigned __int16 *v16; // rax
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rax

  v1 = this;
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ISelectionDataParser>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 8LL))(
      Microsoft::WRL::Details::ModuleBase::module_,
      0LL);
    v1 = this;
  }
  *(_QWORD *)v1 = &WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::`vftable';
  v2 = (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)v1 + 16);
  *((_QWORD *)v1 + 2) = 0LL;
  v3 = (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)v1 + 24);
  *((_QWORD *)v1 + 3) = 0LL;
  v4 = (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)v1 + 32);
  *((_QWORD *)v1 + 4) = 0LL;
  v5 = (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)v1 + 40);
  *((_QWORD *)v1 + 5) = 0LL;
  v6 = (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)v1 + 48);
  *((_QWORD *)v1 + 6) = 0LL;
  v7 = (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)v1 + 56);
  *((_QWORD *)v1 + 7) = 0LL;
  v8 = (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)v1 + 64);
  *((_QWORD *)v1 + 8) = 0LL;
  v9 = (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)v1 + 72);
  *((_QWORD *)v1 + 9) = 0LL;
  *((_QWORD *)v1 + 10) = 0LL;
  v10 = SysAllocString(L"GroupCellWidth");
  _bstr_t::operator=(v2, v10);
  v11 = SysAllocString(L"PreInstalledAppsEnabled");
  _bstr_t::operator=(v3, v11);
  v12 = SysAllocString(L"TargetedContentTilesEnabled");
  _bstr_t::operator=(v4, v12);
  v13 = SysAllocString(L"EducationModeEnabled");
  _bstr_t::operator=(v5, v13);
  v14 = SysAllocString(L"CommercialDevice");
  _bstr_t::operator=(v6, v14);
  v15 = SysAllocString(L"Region");
  _bstr_t::operator=(v7, v15);
  v16 = SysAllocString(L"DualSim");
  _bstr_t::operator=(v8, v16);
  v17 = SysAllocString(L"SKU");
  _bstr_t::operator=(v9, v17);
  v18 = SysAllocString(L"OfficeSKU");
  _bstr_t::operator=(
    (WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser *)((char *)this + 80),
    v18);
  return this;
}
