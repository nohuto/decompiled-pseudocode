/*
 * XREFs of ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C001BB40
 * Callers:
 *     SmmMapNonPagedObjectToIommu @ 0x1C006E278 (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x1C006E424 (SmmMapPagedObjectToIommu.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006E694 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006E7C8 (SmmUnmapPagedObjectFromIommu.c)
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x1C006EF84 (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 *     SmmSetAdlBaseAddress @ 0x1C006F130 (SmmSetAdlBaseAddress.c)
 *     SmmMapLockedPagesToIommu @ 0x1C0070D64 (SmmMapLockedPagesToIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0070E18 (SmmUnmapLockedPagesFromIommu.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C01D99D0 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SmmGetLogicalAddress(const struct SYSMM_LOGICAL_BLOCK *a1)
{
  if ( a1 )
    return *((_QWORD *)a1 + 4) << 12;
  else
    return 0LL;
}
