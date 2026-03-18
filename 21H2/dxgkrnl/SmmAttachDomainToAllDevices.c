/*
 * XREFs of SmmAttachDomainToAllDevices @ 0x1C03BFEC0
 * Callers:
 *     SmmSwapDomains @ 0x1C03C04D4 (SmmSwapDomains.c)
 * Callees:
 *     ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C09DC (-SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C0A8C (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

__int64 __fastcall SmmAttachDomainToAllDevices(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r14

  v2 = 0LL;
  LODWORD(v5) = 0;
  v6 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 360) + 16LL * v6;
      v8 = SysMmIommuAttach(*(struct _DEVICE_OBJECT **)(v7 + 8), a2, *(struct _IOMMU_DMA_DEVICE **)v7);
      v5 = v8;
      if ( v8 < 0 )
        break;
      if ( ++v6 >= *(_DWORD *)(a1 + 24) )
        return (unsigned int)v5;
    }
    if ( v6 )
    {
      v9 = v6;
      do
      {
        SysMmIommuDetach(
          *(struct _DEVICE_OBJECT **)(v2 + *(_QWORD *)(a1 + 360) + 8),
          a2,
          *(struct _IOMMU_DMA_DEVICE **)(v2 + *(_QWORD *)(a1 + 360)));
        v2 += 16LL;
        --v9;
      }
      while ( v9 );
    }
    WdLogSingleEntry2(3LL, v6, v5);
  }
  return (unsigned int)v5;
}
