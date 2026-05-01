/*
 * XREFs of ?XMLDocFromStream@TaskbarLayoutPolicyManager@@AEAAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1801A0160
 * Callers:
 *     ?GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1800957BC (-GetCloudDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019D764 (-GetDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019D920 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18019E3E0 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIPersistStream@@@?$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPersistStream@@@WRL@Microsoft@@@Details@12@@Z @ 0x18019BA34 (--$As@UIPersistStream@@@-$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::XMLDocFromStream(
        TaskbarLayoutPolicyManager *this,
        struct Windows::Storage::Streams::IRandomAccessStream *a2,
        struct IXMLDOMDocument2 **a3)
{
  int v4; // ebx
  HRESULT v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  struct IXMLDOMDocument2 *v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID ppv; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0LL;
  ppv = 0LL;
  v13 = 0LL;
  v4 = CreateStreamOverRandomAccessStream(a2, &GUID_0000000c_0000_0000_c000_000000000046, &v13);
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v5 = CoCreateInstance(
           &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
           0LL,
           1u,
           &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
           &ppv);
    v4 = v5;
    if ( v5 < 0 )
    {
      v6 = 631LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_14;
    }
    v5 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
    v4 = v5;
    if ( v5 < 0 )
    {
      v6 = 632LL;
      goto LABEL_6;
    }
    v14 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IXMLDOMDocument2>::As<IPersistStream>(&ppv, &v14);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 40LL))(v14, v13);
      if ( v4 >= 0 )
      {
        v8 = (struct IXMLDOMDocument2 *)ppv;
        if ( ppv )
        {
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
          v8 = (struct IXMLDOMDocument2 *)ppv;
        }
        *a3 = v8;
        v4 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27B,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
LABEL_14:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return (unsigned int)v4;
}
