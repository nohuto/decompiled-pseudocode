/*
 * XREFs of ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x18002C0F4
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x18002D47C (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0KeyboardOverriderDispatcher@@QEAA@XZ @ 0x18002A978 (--0KeyboardOverriderDispatcher@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x18002C190 (-RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV-$ComPtr@UIMessageSession@@@WRL@Mi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardOverriderDispatcher,KeyboardOverriderDispatcher,Microsoft::WRL::ComPtr<IMessageSession> &>(
        KeyboardOverriderDispatcher **a1,
        __int64 a2)
{
  KeyboardOverriderDispatcher *v4; // rax
  KeyboardOverriderDispatcher *v5; // rbx
  int v6; // edi
  KeyboardOverriderDispatcher *v8; // [rsp+50h] [rbp+18h] BYREF
  KeyboardOverriderDispatcher *v9; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (KeyboardOverriderDispatcher *)operator new(0x328uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v9 = v4;
    v5 = KeyboardOverriderDispatcher::KeyboardOverriderDispatcher(v4);
    v8 = v5;
    v6 = KeyboardOverriderDispatcher::RuntimeClassInitialize(v5, a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(KeyboardOverriderDispatcher *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
