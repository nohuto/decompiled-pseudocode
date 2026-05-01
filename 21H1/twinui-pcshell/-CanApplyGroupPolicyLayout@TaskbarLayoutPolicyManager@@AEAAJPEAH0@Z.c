/*
 * XREFs of ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180178ABC
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180178EC0 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18017B0B0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002F620 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180177EA4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18017809C (--$GetActivationFactory@V-$ComPtr@UICuratedCollectionInitializationStatics@CuratedTileCollection.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180179470 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18017A7C0 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18017A8C0 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18017C498 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18017C874 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
        TaskbarLayoutPolicyManager *this,
        int *a2,
        int *a3)
{
  signed int v6; // ebx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // edi
  int v12; // eax
  int ValueW; // eax
  bool v14; // sf
  TaskbarLayoutPolicyManager *v15; // rcx
  int v16; // eax
  TaskbarLayoutPolicyManager *v17; // rcx
  struct IXMLDOMDocument2 *v18; // rbx
  int v19; // eax
  int v20; // eax
  struct _SECURITY_ATTRIBUTES *pcbData; // [rsp+30h] [rbp-79h]
  DWORD v22[2]; // [rsp+40h] [rbp-69h] BYREF
  struct IXMLDOMDocument2 *v23; // [rsp+48h] [rbp-61h] BYREF
  FILETIME FileTime1; // [rsp+50h] [rbp-59h] BYREF
  __int64 v25; // [rsp+58h] [rbp-51h] BYREF
  FILETIME v26; // [rsp+60h] [rbp-49h] BYREF
  FILETIME v27; // [rsp+68h] [rbp-41h] BYREF
  FILETIME FileTime2; // [rsp+70h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-29h] BYREF
  __int64 v30; // [rsp+98h] [rbp-11h]
  HSTRING_HEADER v31; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  *a2 = 0;
  *a3 = 0;
  if ( (unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    v6 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(this);
    if ( v6 < 0 )
    {
      v7 = 255LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v25 = 0LL;
    v30 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"WindowsInternal.Shell.UnifiedTile.CuratedTileCollections.CuratedCollectionInitializationStatics",
      0x60u,
      0x5Fu);
    v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedCollectionInitializationStatics>>(
           v30,
           &v25);
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      return v11;
    }
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)this + 4, v10);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, FILETIME *))(*(_QWORD *)v25 + 72LL))(v25, v32, &v27);
    v11 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x107,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_25:
      v32 = 0LL;
      goto LABEL_26;
    }
    v26 = v27;
    FileTime1 = 0LL;
    v22[0] = 8;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
               L"LayoutXMLLastModified",
               8u,
               0LL,
               &FileTime1,
               v22);
    v14 = ValueW < 0;
    if ( ValueW > 0 )
    {
      ValueW = (unsigned __int16)ValueW | 0x80070000;
      v14 = ValueW < 0;
    }
    if ( v14 )
      goto LABEL_15;
    if ( v22[0] != 8 )
      ValueW = -2147467259;
    if ( ValueW < 0 )
LABEL_15:
      FileTime1 = 0LL;
    FileTime2 = 0LL;
    if ( !CompareFileTime(&FileTime1, &FileTime2) || CompareFileTime(&FileTime1, &v26) )
    {
      v23 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      v16 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
              v15,
              (struct Microsoft::WRL::Wrappers::HStringReference *)&v31,
              &v23);
      v11 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x114,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v16);
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        goto LABEL_25;
      }
      v18 = v23;
      if ( v23 && (int)TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v17, v23) >= 0 )
      {
        *(_QWORD *)v22 = 0LL;
        hstringHeader = *(HSTRING_HEADER *)((char *)this + 104);
        v19 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v18->lpVtbl->setProperty)(
                v18,
                *((_QWORD *)this + 16),
                &hstringHeader);
        v11 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x11A,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)v19);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
          goto LABEL_24;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
        if ( ((int (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, DWORD *))v18->lpVtbl->selectSingleNode)(
               v18,
               *((_QWORD *)this + 18),
               v22) >= 0 )
        {
          if ( *(_QWORD *)v22 )
          {
            *a3 = TaskbarLayoutPolicyManager::IsOverrideLayout(this, *(struct IXMLDOMNode **)v22);
            *a2 = 1;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    }
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  }
  else
  {
    v26 = 0LL;
    v20 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"LayoutXMLLastModified",
            3u,
            &v26,
            8u,
            pcbData);
    v6 = v20;
    if ( v20 > 0 )
      v6 = (unsigned __int16)v20 | 0x80070000;
    if ( v6 < 0 )
    {
      v7 = 295LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
