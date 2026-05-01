/*
 * XREFs of ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x18044484C
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180444968 (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800B4DA4 (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXMLDOMSchemaCollection@@@Z @ 0x1804445FC (-AddSchemaToCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEBG0PEAUIXM.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema(
        __int64 *a1,
        unsigned __int16 **a2)
{
  HRESULT Instance; // eax
  struct IXMLDOMSchemaCollection *v5; // r9
  unsigned int v6; // ebx
  __int64 i; // rbx
  int v8; // eax
  int v9; // esi
  unsigned __int16 *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int16 *ppv; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &GUID_88d96a07_f192_11d4_a65f_0040963251e5,
               0LL,
               1u,
               &GUID_373984c8_b845_449b_91e7_45ac83036ade,
               (LPVOID *)&ppv);
  v6 = Instance;
  if ( Instance >= 0 )
  {
    for ( i = *a1; i != a1[1]; i += 16LL )
    {
      v8 = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::AddSchemaToCollection(
             *(WindowsInternal::Shell::UnifiedTile::CuratedTileCollections **)i,
             *(const unsigned __int16 **)(i + 8),
             ppv,
             v5);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
          (const char *)(unsigned int)v8);
        v6 = v9;
        goto LABEL_11;
      }
    }
    v10 = ppv;
    if ( ppv )
    {
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)ppv + 8LL))(ppv);
      v10 = ppv;
    }
    *a2 = v10;
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)Instance);
  }
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  std::vector<tagRECT>::~vector<tagRECT>((__int64)a1);
  return v6;
}
