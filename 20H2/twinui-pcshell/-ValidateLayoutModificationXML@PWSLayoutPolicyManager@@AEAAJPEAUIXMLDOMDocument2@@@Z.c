/*
 * XREFs of ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1802262F8
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x180225340 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800C9658 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x180225138 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1804680D8 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall PWSLayoutPolicyManager::ValidateLayoutModificationXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v7; // [rsp+30h] [rbp-88h]
  int v8[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v9; // [rsp+50h] [rbp-68h]
  _QWORD v10[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v10[0] = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  v10[1] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::StartLayoutSchema;
  v10[2] = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
  v10[3] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::TaskbarLayoutSchema;
  v10[4] = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
  v10[5] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::FullDefaultLayoutSchema;
  v10[6] = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
  v10[7] = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::Schemas::LayoutModificationSchema;
  *(_QWORD *)v6 = v10;
  *(_QWORD *)&v6[2] = &v11;
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
    v8,
    (__int64)v6);
  *(_OWORD *)v6 = *(_OWORD *)v8;
  v7 = v9;
  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  v3 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(v6, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    std::vector<tagRECT>::~vector<tagRECT>((__int64)v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v3);
    std::vector<tagRECT>::~vector<tagRECT>((__int64)v8);
    return v4;
  }
}
