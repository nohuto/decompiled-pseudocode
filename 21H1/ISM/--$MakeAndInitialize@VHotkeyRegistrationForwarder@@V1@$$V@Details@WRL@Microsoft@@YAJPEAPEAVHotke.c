/*
 * XREFs of ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x18002DA94
 * Callers:
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x18002DA50 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x18002DD90 (-RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ.c)
 *     ??0HotkeyRegistrationForwarder@@QEAA@XZ @ 0x18002E4DC (--0HotkeyRegistrationForwarder@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D280 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyRegistrationForwarder,HotkeyRegistrationForwarder,>(
        HotkeyRegistrationForwarder **a1)
{
  HotkeyRegistrationForwarder *v2; // rax
  HotkeyRegistrationForwarder *v3; // rbx
  int v4; // edi
  HotkeyRegistrationForwarder *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (HotkeyRegistrationForwarder *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = HotkeyRegistrationForwarder::HotkeyRegistrationForwarder(v2);
    v6 = v3;
    v7 = 0LL;
    v4 = HotkeyRegistrationForwarder::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(HotkeyRegistrationForwarder *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
