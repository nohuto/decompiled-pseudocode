/*
 * XREFs of ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180089D88
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800897A0 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800898A0 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008B1F0 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetCollection(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        char a4)
{
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, PVOID, _BYTE *); // rdi
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  void (*v12)(void); // rax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, __int64 *); // rdi
  const WCHAR *v15; // rax
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  __int64 v18; // rax
  _BYTE v20[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h] BYREF
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v23[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v24; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v23[1] = (const WCHAR *)-2LL;
  v23[0] = a3;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(&v22);
  if ( !a4 )
  {
    v7 = v22;
    v8 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v22 + 80LL);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v23);
    v10 = v8(v7, v9[1].Reserved.Reserved1, v20);
    v11 = retaddr;
    if ( v10 < 0 )
    {
LABEL_14:
      wil::details::in1diag3::Throw_Hr(
        v11,
        (void *)0x20B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x180089ED7LL);
    }
    if ( !v20[0] )
    {
      *a2 = 0LL;
      if ( v22 )
      {
        v12 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
LABEL_11:
        v12();
        return a2;
      }
      return a2;
    }
  }
  v21 = 0LL;
  v13 = v22;
  v14 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v22 + 56LL);
  v21 = 0LL;
  v15 = (const WCHAR *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 40) >= 8uLL )
    v15 = *(const WCHAR **)v15;
  v23[0] = v15;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, v23);
  v17 = v14(v13, v16[1].Reserved.Reserved1, &v21);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_14;
  }
  v18 = v21;
  v21 = 0LL;
  *a2 = v18;
  if ( v22 )
  {
    v12 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
    goto LABEL_11;
  }
  return a2;
}
