/*
 * XREFs of ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180468874
 * Callers:
 *     ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x180469480 (-ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsIn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x18013C714 (-_com_issue_error@@YAXJ@Z.c)
 *     ?ChangeType@_variant_t@@QEAAXGPEBV1@@Z @ 0x180468508 (-ChangeType@_variant_t@@QEAAXGPEBV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *this,
        struct IXMLDOMElement *a2,
        const struct _bstr_t *a3,
        unsigned int *a4)
{
  struct IXMLDOMElementVtbl *lpVtbl; // rdx
  int v8; // eax
  const struct _variant_t *v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  HRESULT v13; // eax
  VARIANTARG pvarg; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  VariantInit(&pvarg);
  lpVtbl = a2->lpVtbl;
  if ( a2->lpVtbl )
    lpVtbl = (struct IXMLDOMElementVtbl *)lpVtbl->QueryInterface;
  v8 = (*(__int64 (__fastcall **)(WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *, struct IXMLDOMElementVtbl *, VARIANTARG *))(*(_QWORD *)this + 352LL))(
         this,
         lpVtbl,
         &pvarg);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
    v12 = 26LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\xmlhelpers.cpp",
      (const char *)v11);
    goto LABEL_11;
  }
  if ( pvarg.vt == 1 )
  {
    v10 = -2147023728;
    goto LABEL_11;
  }
  _variant_t::ChangeType(&pvarg, 0x17u, v9);
  if ( pvarg.vt != 23 )
  {
    v10 = -2147418113;
    v11 = 2147549183LL;
    v12 = 30LL;
    goto LABEL_9;
  }
  *(_DWORD *)a3 = pvarg.lVal;
  v10 = 0;
LABEL_11:
  v13 = VariantClear(&pvarg);
  if ( v13 < 0 )
    _com_issue_error((char *)(unsigned int)v13);
  return v10;
}
