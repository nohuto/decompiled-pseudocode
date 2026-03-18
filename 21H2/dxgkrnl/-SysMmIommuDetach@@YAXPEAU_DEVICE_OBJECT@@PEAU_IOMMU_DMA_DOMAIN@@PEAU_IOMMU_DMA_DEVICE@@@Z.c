/*
 * XREFs of ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03C0A8C
 * Callers:
 *     SmmAttachDomainToAllDevices @ 0x1C03BFEC0 (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x1C03C0024 (SmmDetachDomainFromAllDevices.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C0025FEC (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SysMmIommuDetach(struct _DEVICE_OBJECT *a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DEVICE *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax

  if ( SmmUseIommuV2Interface() )
    v7 = qword_1C0130A68(v5, v3, v5);
  else
    v7 = qword_1C0130A68(v6, v4, 0LL);
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(1LL, 2808LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"(((NTSTATUS)(Status)) >= 0)", 2808LL, 0LL, 0LL, 0LL, 0LL);
  }
}
