/*
 * XREFs of ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C0184
 * Callers:
 *     SmmInitializeDmaDevices @ 0x1C01F5D4C (SmmInitializeDmaDevices.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C0EA4 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SmmIommuDeleteDevice(struct _IOMMU_DMA_DEVICE *a1)
{
  if ( SmmUseIommuV2Interface() )
    return ((__int64 (*)(void))qword_1C0130AF8)();
  else
    return 0LL;
}
