/*
 * XREFs of ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C09DC
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x1C03BFEC0 (SmmAttachDomainToAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SysMmIommuAttach(
        struct _DEVICE_OBJECT *a1,
        struct _IOMMU_DMA_DOMAIN *a2,
        struct _IOMMU_DMA_DEVICE *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // ebx

  if ( SmmUseIommuV2Interface() )
    v8 = qword_1C0130A60(v5, v6, v6, v7);
  else
    v8 = qword_1C0130A60(v5, a1, 0LL, 1LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to attach IOMMU_DMA_DOMAIN 0x%.16I64x to DEVICE_OBJECT 0x%.16I64x",
      (__int64)a2,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
  }
  return v9;
}
