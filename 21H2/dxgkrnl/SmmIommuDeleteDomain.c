/*
 * XREFs of SmmIommuDeleteDomain @ 0x1C03C01B0
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03BFF78 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C01D4 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03C028C (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 SmmIommuDeleteDomain()
{
  SmmUseIommuV2Interface();
  return ((__int64 (*)(void))qword_1C0130A58)();
}
