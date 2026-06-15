/*
 * XREFs of ??$MakeAndInitialize@VCVolumeProvider@@UIVolumeProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeProvider@@@Z @ 0x180056118
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063D30 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180028390 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??0CVolumeProvider@@QEAA@XZ @ 0x18006926C (--0CVolumeProvider@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069470 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 Microsoft::WRL::Details::MakeAndInitialize<CVolumeProvider,IVolumeProvider,>()
{
  CVolumeProvider *v0; // rax
  CVolumeProvider *v1; // rax
  struct IVolumeProvider *v2; // rbx
  const struct _GUID *v3; // rcx
  unsigned int v4; // edi

  g_pVolumeProvider = 0LL;
  v0 = (CVolumeProvider *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
  {
    v1 = CVolumeProvider::CVolumeProvider(v0);
    g_pVolumeProvider = 0LL;
    v2 = v1;
    if ( InlineIsEqualGUID(&GUID_20b2a72d_4632_4a08_bd47_6aca4e517f6a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      g_pVolumeProvider = v2;
      (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)v2 + 8LL))(v2);
      v4 = 0;
    }
    else if ( InlineIsEqualGUID(v3, v3) )
    {
      g_pVolumeProvider = v2;
      v4 = 0;
      (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    else
    {
      v4 = -2147467262;
    }
    if ( v2 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::Release(v2);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
