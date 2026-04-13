/*
 * XREFs of ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x180087FDC
 * Callers:
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x180087FD0 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180029CDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180050DB8 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180087874 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W@Z @ 0x180087950 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180087A30 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_180087A30.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180087BC8 (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180088628 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles(
        CreativeFramework::Actions::SwapStartTileService *this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64); // r14
  const WCHAR *v6; // rax
  const WCHAR *v7; // rdx
  const WCHAR *v8; // r8
  const WCHAR *v9; // rdx
  __int64 v10; // rdi
  _QWORD *SourceTileIdentifier; // rax
  unsigned int v12; // ebx
  __int64 (__fastcall **v14)(__int64, GUID *, __int64 *); // rax
  int v15; // eax
  DWORD v16; // edx
  int v17; // r8d
  wil::details::in1diag3 *v18; // rcx
  int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-20h] BYREF
  const WCHAR *v21; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v24; // [rsp+78h] [rbp+38h] BYREF
  void (__fastcall ***v25)(__int64, GUID *, __int64 *); // [rsp+80h] [rbp+40h] BYREF
  __int64 (__fastcall ***v26)(__int64, GUID *, __int64 *); // [rsp+88h] [rbp+48h] BYREF

  v22[1] = -2LL;
  CreativeFramework::Actions::GetStartGridCollection(&v26);
  v2 = (**v26)((__int64)v26, &GUID_adbf8965_6056_4126_ab26_6660af4661ce, &v20);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_35;
  v4 = v20;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v20 + 72LL);
  if ( *((_QWORD *)this + 7) )
  {
    v6 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    v21 = v6;
    CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(&v24, &v21);
  }
  else if ( *((_QWORD *)this + 11) )
  {
    v7 = (const WCHAR *)((char *)this + 72);
    if ( *((_QWORD *)this + 12) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier((const WCHAR *)&v24, v7);
  }
  else
  {
    v8 = (const WCHAR *)((char *)this + 136);
    if ( *((_QWORD *)this + 20) >= 8uLL )
      v8 = *(const WCHAR **)v8;
    v9 = (const WCHAR *)((char *)this + 104);
    if ( *((_QWORD *)this + 16) >= 8uLL )
      v9 = *(const WCHAR **)v9;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v24, v9, v8);
  }
  v10 = v24;
  SourceTileIdentifier = (_QWORD *)CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(this, v22);
  v12 = v5(v4, *SourceTileIdentifier, v10);
  if ( v22[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2147024811 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)v12);
  v25 = 0LL;
  v14 = *v26;
  v25 = 0LL;
  v15 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), void (__fastcall ****)(__int64, GUID *, __int64 *)))v14[28])(
          v26,
          &v25);
  v18 = retaddr;
  if ( v15 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0xFF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x1800881F7LL);
  }
  v19 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v25, v16, v17);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x632,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v19);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v2);
    goto LABEL_36;
  }
  if ( v25 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v25)[2])(v25);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v26 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v26)[2])(v26);
}
