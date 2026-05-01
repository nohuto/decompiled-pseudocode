/*
 * XREFs of ??$Make@VCImmersiveWindowFactory@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveWindowFactory@@@12@XZ @ 0x180075490
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x180075114 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x18047218C (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ??0CImmersiveWindowFactory@@QEAA@XZ @ 0x1800754E8 (--0CImmersiveWindowFactory@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

CImmersiveWindowFactory **__fastcall Microsoft::WRL::Details::Make<CImmersiveWindowFactory,>(
        CImmersiveWindowFactory **a1)
{
  CImmersiveWindowFactory *v2; // rax
  CImmersiveWindowFactory *v3; // rdi

  *a1 = 0LL;
  v2 = (CImmersiveWindowFactory *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CImmersiveWindowFactory::CImmersiveWindowFactory(v2);
    if ( *a1 )
      (*(void (__fastcall **)(CImmersiveWindowFactory *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
