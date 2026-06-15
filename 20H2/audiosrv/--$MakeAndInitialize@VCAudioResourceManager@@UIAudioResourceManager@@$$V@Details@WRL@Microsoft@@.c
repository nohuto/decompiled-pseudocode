/*
 * XREFs of ??$MakeAndInitialize@VCAudioResourceManager@@UIAudioResourceManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAudioResourceManager@@@Z @ 0x180055260
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063590 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180027D10 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIPropertyStore@@UIAudioSessionStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800464B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@UIP.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAudioResourceManager@@UIWeakReferenceSource@@UIAudioResourceControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800551F0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAudioResourceManager@.c)
 *     ??0CAudioResourceManager@@QEAA@XZ @ 0x18006800C (--0CAudioResourceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x180068E90 (-RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 Microsoft::WRL::Details::MakeAndInitialize<CAudioResourceManager,IAudioResourceManager,>()
{
  CAudioResourceManager *v0; // rax
  CAudioResourceManager *v1; // rbx
  int CanCastTo; // edi
  const struct _GUID *v3; // rcx
  const struct _GUID *v4; // r9

  g_AudioResourceManager = 0LL;
  v0 = (CAudioResourceManager *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CAudioResourceManager::CAudioResourceManager(v0);
    CanCastTo = CAudioResourceManager::RuntimeClassInitialize(v1);
    if ( CanCastTo >= 0 )
    {
      g_AudioResourceManager = 0LL;
      if ( InlineIsEqualGUID(&GUID_d767449e_a522_4bda_bf7e_0665a7a44acb, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
      {
        g_AudioResourceManager = v1;
        (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v1 + 8LL))(v1);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioResourceManager,IWeakReferenceSource,IAudioResourceControl>::CanCastTo(
                      (__int64)v1 + 8,
                      v4);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(struct IAudioResourceManager *))(*(_QWORD *)g_AudioResourceManager + 8LL))(g_AudioResourceManager);
      }
    }
    if ( v1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore,IAudioSessionStore>::Release((__int64)v1);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
