/*
 * XREFs of ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18008A0D0
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800897A0 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800898A0 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008B2D8 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *a2,
        char a3)
{
  __int64 (__fastcall **v5)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, _QWORD *); // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rdi
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, HSTRING, HSTRING, HSTRING); // r14
  __int64 v22; // rax
  const WCHAR *v23; // rcx
  HRESULT v24; // eax
  HSTRING v25; // rdi
  __int64 v26; // rax
  const WCHAR *v27; // rcx
  HRESULT v28; // eax
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  int v31; // eax
  wil::details::in1diag3 *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  int v36; // eax
  _BYTE v37[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v38; // [rsp+40h] [rbp-41h] BYREF
  HSTRING v39; // [rsp+48h] [rbp-39h] BYREF
  HSTRING v40; // [rsp+50h] [rbp-31h] BYREF
  __int64 *v41; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v42[2]; // [rsp+60h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-11h] BYREF
  HSTRING string; // [rsp+88h] [rbp+7h] BYREF
  HSTRING_HEADER v45; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING v46; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v42[1] = -2LL;
  v5 = *(__int64 (__fastcall ***)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, _QWORD *))a2;
  v42[0] = 0LL;
  v6 = (*v5)(a2, &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a, v42);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x243,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_29;
  }
  v39 = 0LL;
  v8 = v42[0];
  v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42[0] + 48LL);
  WindowsDeleteString(0LL);
  v39 = 0LL;
  v10 = v9(v8, &v39);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x246,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_30;
  }
  v40 = 0LL;
  v12 = v42[0];
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v42[0] + 56LL);
  WindowsDeleteString(0LL);
  v40 = 0LL;
  v14 = v13(v12, &v40);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x248,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x24E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v41);
  if ( !a3 )
  {
    v31 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, _BYTE *))(*v41 + 56))(v41, v39, v37);
    v32 = retaddr;
    if ( v31 < 0 )
    {
LABEL_37:
      wil::details::in1diag3::Throw_Hr(
        v32,
        (void *)0x257,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v31);
      goto LABEL_38;
    }
    if ( !v37[0] )
      goto LABEL_22;
    v38 = 0LL;
    v33 = *v41;
    v38 = 0LL;
    v34 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, _QWORD, __int64 *))(v33 + 64))(v41, v39, 0LL, &v38);
    v35 = retaddr;
    if ( v34 < 0 )
    {
LABEL_38:
      wil::details::in1diag3::Throw_Hr(
        v35,
        (void *)0x25B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v34);
      JUMPOUT(0x18008A486LL);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v38 + 80LL))(v38, v40);
    if ( v36 >= 0 )
      goto LABEL_20;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v36);
    goto LABEL_28;
  }
  v38 = 0LL;
  v17 = *v41;
  v38 = 0LL;
  LOBYTE(v16) = 1;
  v18 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64, __int64 *))(v17 + 64))(v41, v39, v16, &v38);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_31;
  v20 = v38;
  v21 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v38 + 48LL);
  v22 = *((_QWORD *)this + 20);
  v23 = (const WCHAR *)((char *)this + 144);
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v23 = *(const WCHAR **)v23;
  string = 0LL;
  if ( (int)v22 + 1 < (unsigned int)v22 )
    goto LABEL_36;
  v24 = WindowsCreateStringReference(v23, v22, &hstringHeader, &string);
  if ( v24 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28);
    goto LABEL_34;
  }
  v25 = string;
  v26 = *((_QWORD *)this + 16);
  v27 = (const WCHAR *)((char *)this + 112);
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v27 = *(const WCHAR **)v27;
  v46 = 0LL;
  if ( (int)v26 + 1 < (unsigned int)v26 )
    goto LABEL_35;
  v28 = WindowsCreateStringReference(v27, v26, &v45, &v46);
  if ( v28 < 0 )
    goto LABEL_33;
  v29 = v21(v20, v40, v46, v25);
  v30 = retaddr;
  if ( v29 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v30,
      (void *)0x252,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v29);
LABEL_35:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
LABEL_36:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_37;
  }
LABEL_20:
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
LABEL_22:
  if ( v41 )
    (*(void (__fastcall **)(__int64 *))(*v41 + 16))(v41);
  WindowsDeleteString(v40);
  v40 = 0LL;
  WindowsDeleteString(v39);
  v39 = 0LL;
  if ( v42[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v42[0] + 16LL))(v42[0]);
}
