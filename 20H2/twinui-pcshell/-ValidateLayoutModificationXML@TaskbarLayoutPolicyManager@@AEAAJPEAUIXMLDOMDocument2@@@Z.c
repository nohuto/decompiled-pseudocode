/*
 * XREFs of ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18019FFB8
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18019C5DC (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18019C9E0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 * Callees:
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800C9658 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x18019BD4C (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18019BFC0 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1804680D8 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  _OWORD *v4; // rcx
  __int64 v5; // rdx
  _OWORD *v6; // rdx
  _OWORD *v7; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  _OWORD *v13; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v15; // [rsp+60h] [rbp+8h]

  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
      &v12,
      0LL,
      &v11);
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
    v4 = v13;
    v5 = *((_QWORD *)&v12 + 1);
    if ( v13 == *((_OWORD **)&v12 + 1) )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        &v12,
        *((_OWORD **)&v12 + 1),
        &v11);
      v4 = v13;
      v6 = (_OWORD *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      **((_OWORD **)&v12 + 1) = v11;
      v6 = (_OWORD *)(v5 + 16);
      *((_QWORD *)&v12 + 1) = v6;
    }
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
    if ( v4 == v6 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        &v12,
        v6,
        &v11);
      v4 = v13;
      v7 = (_OWORD *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      *v6 = v11;
      v7 = v6 + 1;
      *((_QWORD *)&v12 + 1) = v7;
    }
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
    *((_QWORD *)&v11 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::LayoutModificationSchema;
    if ( v4 == v7 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        &v12,
        v7,
        &v11);
    }
    else
    {
      *v7 = v11;
      *((_QWORD *)&v12 + 1) = v7 + 1;
    }
  }
  catch ( ... )
  {
    v15 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x2E3,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<tagRECT>::~vector<tagRECT>((__int64)&v12);
    return v15;
  }
  v8 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v11,
         &v12);
  v9 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(v8, a2);
  std::vector<tagRECT>::~vector<tagRECT>((__int64)&v12);
  return v9;
}
