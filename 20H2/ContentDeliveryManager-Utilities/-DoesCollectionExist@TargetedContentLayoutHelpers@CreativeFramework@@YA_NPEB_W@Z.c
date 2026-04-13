/*
 * XREFs of ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x1800A3A6C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A4074 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008B1F0 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall CreativeFramework::TargetedContentLayoutHelpers::DoesCollectionExist(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        const wchar_t *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, PVOID, bool *); // rdi
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  bool v7; // zf
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, __int64 **); // rdi
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  bool v17; // bl
  bool v19[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v21; // [rsp+30h] [rbp-50h] BYREF
  int v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v24[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v25; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v24[1] = (const WCHAR *)-2LL;
  v24[0] = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v23);
  v2 = v23;
  v3 = *(__int64 (__fastcall **)(__int64, PVOID, bool *))(*(_QWORD *)v23 + 80LL);
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, v24);
  v5 = v3(v2, v4[1].Reserved.Reserved1, v19);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_15;
  v7 = !v19[0];
  if ( !v19[0] )
    goto LABEL_11;
  v21 = 0LL;
  v8 = v23;
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v23 + 56LL);
  v21 = 0LL;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, v24);
  v11 = v9(v8, v10[1].Reserved.Reserved1, &v21);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_16;
  v20 = 0LL;
  v13 = *v21;
  v20 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 104))(v21, &v20);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x1800A3C44LL);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &v22);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v16);
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x87,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_17;
  }
  v19[0] = v22 != 0;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
  v7 = !v19[0];
LABEL_11:
  v17 = !v7;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return v17;
}
