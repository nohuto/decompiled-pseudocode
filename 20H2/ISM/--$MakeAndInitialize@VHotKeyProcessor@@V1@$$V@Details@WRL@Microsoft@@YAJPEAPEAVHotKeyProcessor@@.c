/*
 * XREFs of ??$MakeAndInitialize@VHotKeyProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@@Z @ 0x18017FAE0
 * Callers:
 *     ?RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ @ 0x180180254 (-RuntimeClassInitialize@HotkeyContextualProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0HotKeyProcessor@@QEAA@XZ @ 0x18019EB1C (--0HotKeyProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801A17A8 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyProcessor,HotKeyProcessor,>(HotKeyProcessor **a1)
{
  HotKeyProcessor *v2; // rax
  int v3; // edi
  HotKeyProcessor *v4; // rbx
  HotKeyProcessor *v6; // [rsp+48h] [rbp+10h] BYREF
  HotKeyProcessor *v7; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = (HotKeyProcessor *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v7 = v2;
    v4 = HotKeyProcessor::HotKeyProcessor(v2);
    v6 = v4;
    v3 = HotKeyProcessor::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(HotKeyProcessor *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
