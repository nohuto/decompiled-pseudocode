/*
 * XREFs of ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC
 * Callers:
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C01F4F64 (-SysMmInitializeGlobal@@YAXXZ.c)
 *     SmmInitializeDmaDevices @ 0x1C01F5D4C (SmmInitializeDmaDevices.c)
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03BFF78 (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C0184 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmIommuDeleteDomain @ 0x1C03C01B0 (SmmIommuDeleteDomain.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03C028C (SmmIommuSwitchToTranslation.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C05BC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C0750 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C09DC (-SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C0A8C (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 * Callees:
 *     <none>
 */

bool SmmUseIommuV2Interface(void)
{
  return dword_1C0130A48 == 2;
}
