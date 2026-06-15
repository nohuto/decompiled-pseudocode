/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@@Z @ 0x1800565D8
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063D30 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@@Z @ 0x180056670 (-RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@@Z.c)
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x180056714 (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &>(
        __int64 a1,
        struct IPolicyConfigInternal **a2)
{
  CEndpointCharacteristicsCache *v3; // rax
  CEndpointCharacteristicsCache *v4; // rbx
  int v5; // edi

  g_pEndpointCharacteristicsCache = 0LL;
  v3 = (CEndpointCharacteristicsCache *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache(v3);
    v5 = CEndpointCharacteristicsCache::RuntimeClassInitialize(v4, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CEndpointCharacteristicsCache *, GUID *, PVOID *))v4)(
             v4,
             &GUID_b436cff3_d73b_4d4f_8bec_cb7440eeb656,
             &g_pEndpointCharacteristicsCache);
    if ( v4 )
      (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
