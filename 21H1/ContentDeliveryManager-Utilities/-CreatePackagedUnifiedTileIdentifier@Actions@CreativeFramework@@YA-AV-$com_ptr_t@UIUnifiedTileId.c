/*
 * XREFs of ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W@Z @ 0x1800852F0
 * Callers:
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008597C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088F30 (--$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
const WCHAR *__fastcall CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(
        const WCHAR *a1,
        const WCHAR *a2)
{
  _QWORD *v3; // rbx
  __int64 (__fastcall *v4)(_QWORD *, PVOID, const WCHAR *); // rdi
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  _QWORD *v8; // [rsp+28h] [rbp-50h] BYREF
  const WCHAR *v9[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9[1] = (const WCHAR *)-2LL;
  v9[2] = a1;
  v9[0] = a2;
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>(&v8);
  *(_QWORD *)a1 = 0LL;
  v3 = v8;
  v4 = *(__int64 (__fastcall **)(_QWORD *, PVOID, const WCHAR *))(*v8 + 48LL);
  *(_QWORD *)a1 = 0LL;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, v9);
  v6 = v4(v3, v5[1].Reserved.Reserved1, a1);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x1800853C7LL);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
  return a1;
}
