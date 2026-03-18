/*
 * XREFs of SmmSwapDomains @ 0x1C03C04D4
 * Callers:
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C01D4 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03C028C (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     SmmAttachDomainToAllDevices @ 0x1C03BFEC0 (SmmAttachDomainToAllDevices.c)
 *     SmmDetachDomainFromAllDevices @ 0x1C03C0024 (SmmDetachDomainFromAllDevices.c)
 */

__int64 __fastcall SmmSwapDomains(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2, struct _IOMMU_DMA_DOMAIN *a3)
{
  int v6; // edi
  int v7; // eax

  if ( *(_QWORD *)(a1 + 336) )
    (*(void (**)(void))(a1 + 320))();
  if ( a3 )
    SmmDetachDomainFromAllDevices(a1, a3);
  v6 = SmmAttachDomainToAllDevices(a1, a2);
  if ( v6 < 0 )
  {
    if ( a3 )
    {
      v7 = SmmAttachDomainToAllDevices(a1, a3);
      v6 = v7;
      if ( v7 < 0 )
        WdLogSingleEntry5(0LL, 484LL, 10LL, a1, a2, v7);
    }
    WdLogSingleEntry3(3LL, a1, *(_QWORD *)(a1 + 96), v6);
  }
  if ( *(_QWORD *)(a1 + 336) )
    (*(void (__fastcall **)(__int64))(a1 + 328))(a1);
  return (unsigned int)v6;
}
