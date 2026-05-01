/*
 * XREFs of ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801A0268
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x18019CDF0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 * Callees:
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800C7B78 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x18019C15C (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x18019C3D0 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1804687D8 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateDefaultLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  _OWORD *v4; // rcx
  __int64 v5; // rdx
  _OWORD *v6; // rdx
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  _OWORD *v12; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+8h]

  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)&v10 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  *((_QWORD *)&v10 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
      &v11,
      0LL,
      &v10);
    *(_QWORD *)&v10 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    *((_QWORD *)&v10 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
    v4 = v12;
    v5 = *((_QWORD *)&v11 + 1);
    if ( v12 == *((_OWORD **)&v11 + 1) )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        &v11,
        *((_OWORD **)&v11 + 1),
        &v10);
      v4 = v12;
      v6 = (_OWORD *)*((_QWORD *)&v11 + 1);
    }
    else
    {
      **((_OWORD **)&v11 + 1) = v10;
      v6 = (_OWORD *)(v5 + 16);
      *((_QWORD *)&v11 + 1) = v6;
    }
    *(_QWORD *)&v10 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    *((_QWORD *)&v10 + 1) = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
    if ( v4 == v6 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        &v11,
        v6,
        &v10);
    }
    else
    {
      *v6 = v10;
      *((_QWORD *)&v11 + 1) = v6 + 1;
    }
  }
  catch ( ... )
  {
    v14 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x2D3,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<tagRECT>::~vector<tagRECT>((__int64)&v11);
    return v14;
  }
  v7 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v10,
         &v11);
  v8 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(v7, a2);
  std::vector<tagRECT>::~vector<tagRECT>((__int64)&v11);
  return v8;
}
