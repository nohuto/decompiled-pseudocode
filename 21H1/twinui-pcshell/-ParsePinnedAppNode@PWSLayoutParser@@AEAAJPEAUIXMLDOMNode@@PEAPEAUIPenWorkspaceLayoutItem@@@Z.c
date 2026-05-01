/*
 * XREFs of ?ParsePinnedAppNode@PWSLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUIPenWorkspaceLayoutItem@@@Z @ 0x180204B04
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1802043A0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180178734 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18017C84C (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180205180 (-PWSLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180444ED8 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PWSLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct IPenWorkspaceLayoutItem **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  bool v11; // bl
  const struct std::nothrow_t *v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  bool v15; // bl
  const struct std::nothrow_t *v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  _bstr_t::Data_t *v19; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v20[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v21[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 v24; // [rsp+88h] [rbp+38h] BYREF

  *a3 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v7 = PWSLayoutItem_CreateInstance(v6, &v23);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v9 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v23)(
           v23,
           &GUID_ec14b3b3_3cd8_428a_a455_490250210fd2,
           &v18);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v9);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      goto LABEL_22;
    }
    v24 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    v10 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v24);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)v10);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      goto LABEL_21;
    }
    *(_OWORD *)v21 = 0LL;
    *(_OWORD *)v20 = 0LL;
    _bstr_t::_bstr_t((_bstr_t *)&v19, this[2]);
    v11 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v24, &v19, v21) >= 0;
    _bstr_t::_Free(&v19, v12);
    if ( v11 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 222LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
          (const char *)(unsigned int)v13);
LABEL_16:
        if ( v20[1] )
          std::_Ref_count_base::_Decref(v20[1]);
        if ( v21[1] )
          std::_Ref_count_base::_Decref(v21[1]);
        goto LABEL_20;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)&v19, this[3]);
      v15 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v24, &v19, v20) >= 0;
      _bstr_t::_Free(&v19, v16);
      if ( !v15 )
      {
        v8 = -2147467259;
        goto LABEL_16;
      }
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 226LL;
        goto LABEL_13;
      }
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    *a3 = (struct IPenWorkspaceLayoutItem *)v23;
    v8 = 0;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return v8;
}
