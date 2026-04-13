/*
 * XREFs of CreativeFramework::EnumerateTargetedContentTiles @ 0x1800A09AC
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A1E64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088FE0 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800ADF70 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
char __fastcall CreativeFramework::EnumerateTargetedContentTiles(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, PVOID, __int64 **); // rdi
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  __int64 v17; // r15
  __int64 (__fastcall *v18)(__int64, _QWORD **); // r12
  _QWORD *v19; // rcx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  const WCHAR *v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  __int64 v31; // rcx
  char v33; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v34[7]; // [rsp+21h] [rbp-C7h] BYREF
  __int64 v35; // [rsp+28h] [rbp-C0h] BYREF
  __int64 *v36; // [rsp+30h] [rbp-B8h] BYREF
  const WCHAR *v37; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-A8h] BYREF
  int v39; // [rsp+48h] [rbp-A0h]
  _QWORD *v40; // [rsp+50h] [rbp-98h] BYREF
  __int64 v41; // [rsp+58h] [rbp-90h] BYREF
  __int64 *v42; // [rsp+60h] [rbp-88h] BYREF
  __int64 v43; // [rsp+68h] [rbp-80h] BYREF
  __int64 v44; // [rsp+70h] [rbp-78h] BYREF
  _QWORD v45[3]; // [rsp+78h] [rbp-70h] BYREF
  HSTRING_HEADER v46; // [rsp+90h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v45[2] = -2LL;
  v45[1] = a2;
  v37 = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v44);
  v42 = 0LL;
  v3 = v44;
  v4 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v44 + 56LL);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v46, &v37);
  v6 = v4(v3, v5[1].Reserved.Reserved1, &v42);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
      (const char *)(unsigned int)v6);
    goto LABEL_48;
  }
  v41 = 0LL;
  v7 = *v42;
  v41 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 104))(v42, &v41);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_48:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x18,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
      (const char *)(unsigned int)v8);
    goto LABEL_49;
  }
  v43 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v41)(
          v41,
          &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
          &v43);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_49:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v10);
LABEL_50:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v38 = 0LL;
  v40 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 48LL))(v43, &v38);
  v13 = retaddr;
  if ( v12 < 0 )
    goto LABEL_50;
  v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v38 + 56LL))(v38, &v33);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v14);
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v20);
LABEL_53:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x22,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
      (const char *)(unsigned int)v23);
LABEL_54:
    wil::details::in1diag3::Throw_Hr(
      v27,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\TargetedContentTileEnumerator.h",
      (const char *)(unsigned int)v26);
LABEL_55:
    std::_Xbad_function_call();
  }
  LOBYTE(v15) = -v33;
  v16 = (v33 != 0) - 1;
  v39 = v16;
  v46.Reserved.Reserved1 = 0LL;
  *(_DWORD *)&v46.Reserved.Reserved2[8] = -1;
  *(_QWORD *)&v46.Reserved.Reserved2[16] = 0LL;
  while ( v16 != -1 )
  {
    v17 = v38;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v38 + 48LL);
    v19 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v19 + 16LL))(v19, *v19);
    }
    v20 = v18(v17, &v40);
    v21 = retaddr;
    if ( v20 < 0 )
      goto LABEL_52;
    v36 = 0LL;
    v22 = *v40;
    v36 = 0LL;
    v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64 **))(v22 + 56))(v40, &v36);
    v24 = retaddr;
    if ( v23 < 0 )
      goto LABEL_53;
    v35 = 0LL;
    v25 = *v36;
    v35 = 0LL;
    v26 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v25 + 48))(v36, &v35);
    v27 = retaddr;
    if ( v26 < 0 )
      goto LABEL_54;
    (**(void (__fastcall ***)(__int64, GUID *, const WCHAR **))v35)(
      v35,
      &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
      &v37);
    v28 = v37;
    if ( v37 )
    {
      v45[0] = v35;
      v29 = *(_QWORD *)(a2 + 24);
      if ( !v29 )
        goto LABEL_55;
      LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v29 + 16LL))(v29, v45);
      if ( !(_BYTE)v15 )
      {
        if ( v37 )
          LOBYTE(v15) = (*(__int64 (__fastcall **)(const WCHAR *))(*(_QWORD *)v37 + 16LL))(v37);
        if ( v35 )
          LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        if ( v36 )
          LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64 *))(*v36 + 16))(v36);
        break;
      }
      v28 = v37;
    }
    if ( v28 )
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    if ( v36 )
      (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
    v15 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v38 + 64LL))(v38, v34);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1577,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v15);
      JUMPOUT(0x1800A0EF4LL);
    }
    if ( v34[0] )
      v16 = v39 + 1;
    else
      v16 = -1;
    v39 = v16;
  }
  v30 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    LOBYTE(v15) = (*(__int64 (__fastcall **)(_QWORD *))(*v30 + 16LL))(v30);
  }
  v31 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  if ( v43 )
    LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  if ( v41 )
    LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v42 )
    LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64 *))(*v42 + 16))(v42);
  if ( v44 )
    LOBYTE(v15) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  return v15;
}
