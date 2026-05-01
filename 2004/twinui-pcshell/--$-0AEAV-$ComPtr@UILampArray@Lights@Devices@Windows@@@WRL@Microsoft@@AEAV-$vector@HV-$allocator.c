/*
 * XREFs of ??$?0AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV34@@?$_Ref_count_obj@VAssistantLightStrip@Lighting@TwinUI@@@std@@QEAA@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@1@1@Z @ 0x18044FB20
 * Callers:
 *     ??$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YA?AV?$shared_ptr@VAssistantLightStrip@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@1@Z @ 0x1804504FC (--$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801A1610 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 *     ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x1804512F8 (--0AssistantLightStrip@Lighting@TwinUI@@QEAA@V-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v12[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v14; // [rsp+90h] [rbp+18h]

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<TwinUI::Lighting::AssistantLightStrip>::`vftable';
  v14 = v11;
  v7 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
         v11,
         a4);
  v8 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
         v12,
         a3);
  v9 = *a2;
  v13 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip(a1 + 16, &v13, v8, v7);
  return a1;
}
