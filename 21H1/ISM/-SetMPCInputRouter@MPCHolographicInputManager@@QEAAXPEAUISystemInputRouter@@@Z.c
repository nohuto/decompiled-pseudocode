/*
 * XREFs of ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180078C84
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180077ACC (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800B85B0 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z @ 0x18002AEAC (--4-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEAAAEAV012@PEAUISystemInputRouter@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x18007630C (-InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ.c)
 */

void __fastcall MPCHolographicInputManager::SetMPCInputRouter(
        MPCHolographicInputManager *this,
        struct ISystemInputRouter *a2,
        __int64 a3,
        const char *a4)
{
  struct ISystemInputRouter **v4; // rsi
  struct ISystemInputRouter *v6; // rsi
  __int64 (__fastcall *v7)(struct ISystemInputRouter *, GUID *, char *); // rdi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct ISystemInputRouter **)((char *)this + 2288);
  if ( *((_QWORD *)this + 286) )
  {
    if ( *v4 != a2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        1422LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        a4);
      __debugbreak();
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<ISystemInputRouter>::operator=((__int64 *)this + 286, (__int64)a2);
    v6 = *v4;
    v7 = **(__int64 (__fastcall ***)(struct ISystemInputRouter *, GUID *, char *))v6;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 287);
    v8 = v7(v6, &GUID_1c93908d_d1c5_4ac5_9269_0398fe8ab53e, (char *)this + 2296);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1427LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    MPCHolographicInputManager::InitializeCursor3D(this);
  }
}
