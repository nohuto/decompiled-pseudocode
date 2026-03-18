/*
 * XREFs of ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x140005674
 * Callers:
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002118 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140003980 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0HotKeyCallback@@QEAA@XZ @ 0x1400057F4 (--0HotKeyCallback@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwner@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1400067F0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyCl.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwner@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140006F20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwn.c)
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x140008220 (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotKeyCallback,HotKeyCallback,>(HotKeyCallback **a1)
{
  HotKeyCallback *v2; // rax
  int v3; // edi
  HotKeyCallback *v4; // rbx

  *a1 = 0LL;
  v2 = (HotKeyCallback *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = HotKeyCallback::HotKeyCallback(v2);
    v3 = HotKeyCallback::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHotKeyClientOwner>::InternalAddRef(v4);
      *a1 = v4;
      v3 = 0;
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHotKeyClientOwner>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
