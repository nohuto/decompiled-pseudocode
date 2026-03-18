/*
 * XREFs of SysMmTestDisableIommu @ 0x1C0071350
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C0750 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 */

__int64 __fastcall SysMmTestDisableIommu(__int64 a1)
{
  return SysMmDisableIommu(a1, 64LL);
}
