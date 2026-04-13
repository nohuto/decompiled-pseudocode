/*
 * XREFs of ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x180087280
 * Callers:
 *     ??$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartProperties@23@@std@@YA?AV?$shared_ptr@VAddTileToCollectionService@Actions@CreativeFramework@@@0@$$QEAPEB_WAEAUPinToStartProperties@Actions@CreativeFramework@@@Z @ 0x18008974C (--$make_shared@VAddTileToCollectionService@Actions@CreativeFramework@@PEB_WAEAUPinToStartPropert.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180068AD4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180084F80 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800877D8 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ??$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180089178 (--$GetActivationFactory@UITargetedContentUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsI.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
CreativeFramework::Actions::AddTileToCollectionService *__fastcall CreativeFramework::Actions::AddTileToCollectionService::AddTileToCollectionService(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        wchar_t *a2,
        void **a3)
{
  char *v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  const wchar_t *v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, PVOID, HSTRING, _QWORD **); // rsi
  HSTRING v18; // rdi
  const WCHAR *v19; // rcx
  HSTRING_HEADER *v20; // rax
  int v21; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rdx
  _QWORD *v26; // [rsp+38h] [rbp-59h] BYREF
  int v27; // [rsp+40h] [rbp-51h]
  HSTRING string; // [rsp+48h] [rbp-49h] BYREF
  __int64 v29; // [rsp+50h] [rbp-41h] BYREF
  const WCHAR *v30[3]; // [rsp+58h] [rbp-39h] BYREF
  void *v31[3]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-9h]
  HSTRING_HEADER v33; // [rsp+90h] [rbp-1h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v30[1] = (const WCHAR *)-2LL;
  v30[2] = (const WCHAR *)this;
  v27 = 0;
  *(_QWORD *)this = &CreativeFramework::Actions::AddTileToCollectionService::`vftable';
  v6 = (char *)this + 16;
  *((_QWORD *)v6 + 3) = 7LL;
  *((_QWORD *)v6 + 2) = 0LL;
  *(_WORD *)v6 = 0;
  std::wstring::assign((void **)v6, a3, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 9) = 7LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_WORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 7LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_WORD *)this + 40) = 0;
  std::wstring::assign((void **)this + 10, a3 + 8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = (_QWORD *)((char *)this + 112);
  *((_QWORD *)this + 17) = 7LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_WORD *)this + 56) = 0;
  std::wstring::assign((void **)this + 14, a3 + 12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v8 = (_QWORD *)((char *)this + 144);
  *((_QWORD *)this + 21) = 7LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_WORD *)this + 72) = 0;
  std::wstring::assign((void **)this + 18, a3 + 16, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 40);
  v9 = a3 + 4;
  v10 = aHidden[0] != 0 ? 6 : 0;
  v11 = v9[2];
  if ( v9[3] >= 8uLL )
    v9 = (_QWORD *)*v9;
  v12 = aHidden[0] != 0 ? 6 : 0;
  if ( v11 < v10 )
    v12 = v11;
  if ( v12 )
  {
    v13 = L"hidden";
    while ( *(_WORD *)v9 == *v13 )
    {
      v9 = (_QWORD *)((char *)v9 + 2);
      ++v13;
      if ( !--v12 )
        goto LABEL_9;
    }
    v14 = *(_WORD *)v9 < *v13 ? -1 : 1;
  }
  else
  {
LABEL_9:
    v14 = 0LL;
  }
  v15 = v11 != (aHidden[0] != 0 ? 6 : 0);
  if ( v11 < v10 )
    v15 = -1;
  if ( (_DWORD)v14 )
    v15 = v14;
  *((_BYTE *)this + 8) = v15 == 0;
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v8 = (_QWORD *)*v8;
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v7 = (_QWORD *)*v7;
  CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(v14, &string, v7, v8);
  CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v31, (char *)a2);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::ITargetedContentUnifiedTileIdentifierFactory>(&v29);
  v26 = 0LL;
  v27 = 1;
  v16 = v29;
  v17 = *(__int64 (__fastcall **)(__int64, PVOID, HSTRING, _QWORD **))(*(_QWORD *)v29 + 48LL);
  v26 = 0LL;
  v18 = string;
  v19 = (const WCHAR *)v31;
  if ( v32 >= 8 )
    v19 = (const WCHAR *)v31[0];
  v30[0] = v19;
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, v30);
  v21 = v17(v16, v20[1].Reserved.Reserved1, v18, &v26);
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1FF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v21);
    JUMPOUT(0x18008757ELL);
  }
  v34 = 0LL;
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v32 >= 8 )
    operator delete(v31[0]);
  v32 = 7LL;
  v31[2] = 0LL;
  LOWORD(v31[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  v22 = v26;
  v23 = 0LL;
  v26 = 0LL;
  v24 = *((_QWORD *)this + 22);
  *((_QWORD *)this + 22) = v22;
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    v23 = v26;
  }
  if ( v23 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v23 + 16LL))(v23, *v23);
  return this;
}
