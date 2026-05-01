/*
 * XREFs of ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180225648
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x180225340 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 *     ?PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180225CE0 (-PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWor.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18019BBBC (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollection.c)
 *     ?XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18022646C (-XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PE.c)
 */

__int64 __fastcall PWSLayoutPolicyManager::GetDefaultLayoutXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  struct Windows::Storage::Streams::IRandomAccessStream *v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *a2 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
    0x60u,
    0x5Fu);
  v3 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
         v12,
         &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v9 = 0LL;
    v5 = v10;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    v6 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::Streams::IRandomAccessStream **))(*(_QWORD *)v5 + 48LL))(
           v5,
           &v9);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = PWSLayoutPolicyManager::XMLDocFromStream(v9, a2);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v7 = 164LL;
    }
    else
    {
      v7 = 162LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v6);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9F,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v4;
}
