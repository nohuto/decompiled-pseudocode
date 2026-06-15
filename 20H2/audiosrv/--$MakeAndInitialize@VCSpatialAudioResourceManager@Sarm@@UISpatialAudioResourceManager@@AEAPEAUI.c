/*
 * XREFs of ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x180055644
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063590 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180027D10 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x180066D50 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioResourceManager@@UIAudioAppVolumePolicyChange@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180068A80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioRes.c)
 *     ?RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z @ 0x180068F28 (-RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Sarm::CSpatialAudioResourceManager,ISpatialAudioResourceManager,IAudioPolicyManager * &>(
        __int64 a1,
        struct IAudioPolicyManager **a2)
{
  Sarm::CSpatialAudioResourceManager *v3; // rax
  __int64 v4; // rdi
  signed int v5; // ebx
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  __int64 v8; // rcx
  BOOL IsEqualGUID; // eax

  g_SpatialAudioResourceManager = 0LL;
  v3 = (Sarm::CSpatialAudioResourceManager *)operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
    return (unsigned int)-2147024882;
  v4 = Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager(v3);
  v5 = Sarm::CSpatialAudioResourceManager::RuntimeClassInitialize((Sarm::CSpatialAudioResourceManager *)v4, *a2);
  if ( v5 >= 0 )
  {
    g_SpatialAudioResourceManager = 0LL;
    if ( InlineIsEqualGUID(&GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_SpatialAudioResourceManager = (struct ISpatialAudioResourceManager *)v4;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v6, v6) )
      {
        g_SpatialAudioResourceManager = (struct ISpatialAudioResourceManager *)v4;
        v5 = 0;
        v8 = v4;
      }
      else
      {
        IsEqualGUID = InlineIsEqualGUID(v7, &GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b);
        v8 = 0LL;
        if ( IsEqualGUID )
        {
          v8 = v4 + 8;
          g_SpatialAudioResourceManager = (struct ISpatialAudioResourceManager *)(v4 + 8);
        }
        v5 = !IsEqualGUID ? 0x80004002 : 0;
        if ( !IsEqualGUID )
          goto LABEL_7;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
LABEL_7:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioResourceManager,IAudioAppVolumePolicyChange>::Release(v4);
  return (unsigned int)v5;
}
