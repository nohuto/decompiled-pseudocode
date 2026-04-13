/*
 * XREFs of ?SetCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18008A490
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800897A0 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18008A798 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::SetCollectionProperties(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, HSTRING *); // rbx
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall *v7)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING); // rdi
  HSTRING v8; // rbx
  HRESULT v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  CreativeFramework::Actions::AddTileToCollectionService *v12; // rcx
  __int64 (__fastcall *v13)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, PVOID); // rbx
  HSTRING v14; // rax
  PVOID Reserved1; // rdi
  HRESULT v16; // eax
  int v17; // eax
  HSTRING v18[2]; // [rsp+20h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v21; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v18[1] = (HSTRING)-2LL;
  if ( *((_QWORD *)this + 12) )
  {
    v13 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, PVOID))(*(_QWORD *)a2 + 288LL);
    v14 = (HSTRING)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v14 = *(HSTRING *)v14;
    v18[0] = v14;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, (const WCHAR **)v18)[1].Reserved.Reserved1;
    string = 0LL;
    v16 = WindowsCreateStringReference(L"Start.Suggestions.Heading", 0x19u, &hstringHeader, &string);
    if ( v16 < 0 )
    {
LABEL_15:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
      JUMPOUT(0x18008A662LL);
    }
    v17 = v13(a2, string, Reserved1);
    v12 = retaddr;
    if ( v17 >= 0 )
      goto LABEL_10;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v17);
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x267,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v18[0] = 0LL;
  v3 = *((_QWORD *)this + 22);
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 56LL);
  WindowsDeleteString(0LL);
  v18[0] = 0LL;
  v5 = v4(v3, v18);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_12;
  v7 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *, HSTRING, HSTRING))(*(_QWORD *)a2 + 288LL);
  v8 = v18[0];
  string = 0LL;
  v9 = WindowsCreateStringReference(L"Start.Suggestions.HiddenTileId", 0x1Eu, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    goto LABEL_14;
  }
  v10 = v7(a2, string, v8);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x268,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_15;
  }
  WindowsDeleteString(v18[0]);
LABEL_10:
  CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v12, a2);
}
