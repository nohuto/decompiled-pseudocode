/*
 * XREFs of ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180085214
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008597C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180085FC8 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088E80 (--$GetActivationFactory@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@@wil@@.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(_QWORD *a1, const WCHAR **a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, PVOID, _QWORD *); // rdi
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  _QWORD v9[3]; // [rsp+28h] [rbp-60h] BYREF
  HSTRING_HEADER v10; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9[1] = -2LL;
  v9[2] = a1;
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifierStatics>(v9);
  *a1 = 0LL;
  v4 = v9[0];
  v5 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v9[0] + 48LL);
  *a1 = 0LL;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, a2);
  v7 = v5(v4, v6[1].Reserved.Reserved1, a1);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x1800852E9LL);
  }
  if ( v9[0] )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0], *(_QWORD *)v9[0]);
  return a1;
}
