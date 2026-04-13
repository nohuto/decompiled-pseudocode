/*
 * XREFs of ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800875E0
 * Callers:
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180087874 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x180087B8C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008B140 (--$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008C728 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CD9F1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(
        _QWORD *a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  unsigned int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING, _QWORD *); // rdi
  unsigned __int64 v10; // rax
  HRESULT v11; // eax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+24h] [rbp-DCh]
  _QWORD v17[3]; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v17[1] = -2LL;
  v17[2] = a1;
  v16 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a2, a3, &applicationUserModelIdLength, applicationUserModelId);
  v7 = retaddr;
  if ( v6 )
    goto LABEL_13;
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>(v17);
  *a1 = 0LL;
  v16 = 1;
  v8 = v17[0];
  v9 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v17[0] + 48LL);
  *a1 = 0LL;
  v10 = -1LL;
  do
    ++v10;
  while ( applicationUserModelId[v10] );
  if ( v10 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
LABEL_13:
    wil::details::in1diag3::_Throw_Win32(
      v7,
      (void *)0x4D,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength);
LABEL_14:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    goto LABEL_15;
  }
  if ( (int)v10 + 1 < (unsigned int)v10 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v11 = WindowsCreateStringReference(applicationUserModelId, v10, &hstringHeader, &string);
  if ( v11 < 0 )
    goto LABEL_14;
  v12 = v9(v8, string, a1);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18008776ELL);
  }
  if ( v17[0] )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0], *(_QWORD *)v17[0]);
  return a1;
}
