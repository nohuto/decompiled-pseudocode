/*
 * XREFs of ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180088628
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x180087FDC (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800875E0 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180087874 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180088200 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008B728 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     ??2@YAPEAX_K@Z @ 0x1800B03B8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800B05A8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(_QWORD *a1, _QWORD *a2)
{
  char *v4; // rdx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, char *); // rdi
  const WCHAR *v7; // rcx
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, PVOID, _QWORD, WCHAR **); // rdi
  void **v13; // rcx
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  char *v17; // rax
  HSTRING_HEADER *v18; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  char v23[8]; // [rsp+38h] [rbp-49h] BYREF
  WCHAR *v24; // [rsp+40h] [rbp-41h] BYREF
  _QWORD *v25; // [rsp+48h] [rbp-39h] BYREF
  __int64 v26; // [rsp+50h] [rbp-31h] BYREF
  __int128 v27; // [rsp+58h] [rbp-29h] BYREF
  __int64 v28; // [rsp+68h] [rbp-19h]
  void *v29[3]; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp+7h]
  HSTRING_HEADER v31; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING_HEADER *v32; // [rsp+A8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v28 = -2LL;
  *(_QWORD *)&v27 = a2;
  if ( !a1[3] )
  {
    v25 = 0LL;
    wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v26);
    v4 = (char *)(a1 + 21);
    if ( a1[24] >= 8uLL )
      v4 = *(char **)v4;
    CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(v29, v4);
    v5 = v26;
    v6 = *(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v26 + 56LL);
    v7 = (const WCHAR *)v29;
    if ( v30 >= 8 )
      v7 = (const WCHAR *)v29[0];
    v24 = (WCHAR *)v7;
    v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&v24);
    v9 = v6(v5, v8[1].Reserved.Reserved1, v23);
    v10 = retaddr;
    if ( v9 >= 0 )
    {
      if ( v23[0] )
      {
        v24 = 0LL;
        v11 = v26;
        v12 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, WCHAR **))(*(_QWORD *)v26 + 64LL);
        v24 = 0LL;
        v13 = v29;
        if ( v30 >= 8 )
          v13 = (void **)v29[0];
        *(_QWORD *)&v27 = v13;
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v31, (const WCHAR **)&v27);
        v15 = v12(v11, v14[1].Reserved.Reserved1, 0LL, &v24);
        v16 = retaddr;
        if ( v15 < 0 )
          goto LABEL_30;
        *(_QWORD *)&v27 = a1;
        *((_QWORD *)&v27 + 1) = &v25;
        v32 = 0LL;
        v17 = (char *)operator new(0x20uLL);
        if ( !v17 )
          goto LABEL_31;
        *(_QWORD *)v17 = &std::_Func_impl<std::_Callable_obj<_lambda_84d899b7d93de90bfed2062708934b25_,0>,std::allocator<std::_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
        *(_OWORD *)(v17 + 8) = v27;
        v32 = (HSTRING_HEADER *)v17;
        CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
          (__int64)&std::_Func_impl<std::_Callable_obj<_lambda_84d899b7d93de90bfed2062708934b25_,0>,std::allocator<std::_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable',
          (__int64 *)v24,
          (__int64)&v31);
        v18 = v32;
        if ( v32 )
        {
          (*((void (__fastcall **)(HSTRING_HEADER *, _QWORD))v32->Reserved.Reserved1 + 5))(v32, 0LL);
          if ( v18 != &v31 )
            operator delete(v18);
        }
        if ( v24 )
          (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v19 = v25;
      if ( v25 )
      {
        v20 = 0LL;
        v25 = 0LL;
        *a2 = v19;
        if ( v30 >= 8 )
        {
          operator delete(v29[0]);
          v20 = v25;
        }
        v30 = 7LL;
        v29[2] = 0LL;
        LOWORD(v29[0]) = 0;
        if ( v26 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          v20 = v25;
        }
        if ( v20 )
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v20 + 16LL))(v20, *v20);
        return a2;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)0x80070490LL);
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x138,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9);
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x13C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v15);
LABEL_31:
    std::_Xbad_alloc();
  }
  v21 = a1 + 1;
  if ( a1[4] >= 8uLL )
    v21 = (_QWORD *)*v21;
  *(_QWORD *)&v27 = v21;
  CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(a2, (const WCHAR **)&v27);
  return a2;
}
