/*
 * XREFs of ??$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPolicyConfig@@@12@XZ @ 0x180065E20
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063C30 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x180065E88 (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

CPolicyConfig **__fastcall Microsoft::WRL::Details::Make<CPolicyConfig,>(CPolicyConfig **a1)
{
  CPolicyConfig *v2; // rax
  CPolicyConfig *v3; // rbx
  CPolicyConfig *v4; // rbx

  *a1 = 0LL;
  v2 = (CPolicyConfig *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x58uLL);
    v4 = CPolicyConfig::CPolicyConfig(v3);
    if ( *a1 )
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
  }
  return a1;
}
