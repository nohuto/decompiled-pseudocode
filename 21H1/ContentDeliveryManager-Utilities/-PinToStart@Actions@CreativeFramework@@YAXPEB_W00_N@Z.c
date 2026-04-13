/*
 * XREFs of ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180085664
 * Callers:
 *     ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x180086F60 (-Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007228 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004E758 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800853D0 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_1800853D0.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180085568 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088FE0 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CreativeFramework::Actions::PinToStart(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  char v4; // si
  wchar_t **v6; // rbx
  unsigned int v7; // edi
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, HSTRING, __int64 *); // rsi
  HRESULT v10; // eax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 (__fastcall **v20)(_QWORD, _QWORD, _QWORD); // rax
  int v21; // eax
  DWORD v22; // edx
  int v23; // r8d
  wil::details::in1diag3 *v24; // rcx
  int v25; // eax
  char v26[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v27; // [rsp+40h] [rbp-21h] BYREF
  void (__fastcall ***v28)(__int64, GUID *, __int64 *); // [rsp+48h] [rbp-19h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp-11h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp-9h] BYREF
  __int64 v31; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v32[2]; // [rsp+68h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp+17h] BYREF
  HSTRING string; // [rsp+90h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v32[1] = -2LL;
  v4 = (char)a4;
  CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v31, this, a2);
  v6 = &off_180192890;
  while ( CompareStringOrdinal(*v6, -1, a3, -1, 1) != 2 )
  {
    v6 += 2;
    if ( v6 == &off_1801928B0 )
    {
      v7 = 0;
      goto LABEL_6;
    }
  }
  v7 = *((_DWORD *)v6 + 2);
LABEL_6:
  if ( v4 )
  {
    wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(&v29);
    v27 = 0LL;
    v8 = v29;
    v9 = (__int64 (__fastcall *)(_QWORD, HSTRING, __int64 *))(*v29)[7];
    string = 0LL;
    v10 = WindowsCreateStringReference(L"AllTiles", 8u, &hstringHeader, &string);
    if ( v10 < 0 )
    {
LABEL_33:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
      goto LABEL_34;
    }
    v11 = v9(v8, string, &v27);
    v12 = retaddr;
    if ( v11 < 0 )
    {
LABEL_34:
      wil::details::in1diag3::Throw_Hr(
        v12,
        (void *)0x7E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_35;
    }
    v26[0] = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v27 + 112LL))(v27, v31, 0LL, v26);
    v14 = retaddr;
    if ( v13 < 0 )
    {
LABEL_35:
      wil::details::in1diag3::Throw_Hr(
        v14,
        (void *)0x80,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_36;
    }
    if ( !v26[0] )
    {
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      v15 = v29;
      goto LABEL_27;
    }
    if ( v27 )
      (*(void (**)(void))(*(_QWORD *)v27 + 16LL))();
    if ( v29 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v29)[2])(v29);
  }
  CreativeFramework::Actions::GetStartGridCollection(&v30);
  v16 = (**v30)(v30, &GUID_adbf8965_6056_4126_ab26_6660af4661ce, v32);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v16);
    goto LABEL_37;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v32[0] + 48LL))(v32[0], v31, v7);
  v19 = retaddr;
  if ( v18 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x89,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_38;
  }
  v28 = 0LL;
  v20 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v30;
  v28 = 0LL;
  v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), void (__fastcall ****)(__int64, GUID *, __int64 *)))v20[28])(
          v30,
          &v28);
  v24 = retaddr;
  if ( v21 < 0 )
  {
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v21);
    JUMPOUT(0x180085968LL);
  }
  v25 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v28, v22, v23);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x632,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v25);
    goto LABEL_33;
  }
  if ( v28 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v28)[2])(v28);
  if ( v32[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 16LL))(v32[0]);
  v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v30;
LABEL_27:
  if ( v15 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v15)[2])(v15);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
}
