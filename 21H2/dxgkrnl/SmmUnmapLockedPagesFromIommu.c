/*
 * XREFs of SmmUnmapLockedPagesFromIommu @ 0x1C0070E18
 * Callers:
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03C1D6C (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C001BB40 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmUnmapIommu @ 0x1C002FC9C (SmmUnmapIommu.c)
 *     SmmIommuUnmapReferenced @ 0x1C006DFAC (SmmIommuUnmapReferenced.c)
 */

void __fastcall SmmUnmapLockedPagesFromIommu(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  KIRQL v8; // bp
  __int64 LogicalAddress; // rax

  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  if ( !*(_DWORD *)(a1 + 92) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a3 + 24));
    if ( (*(_DWORD *)(a2 + 44) & 0x200) != 0 || (dword_1C0130B08 & 4) != 0 )
      SmmIommuUnmapReferenced(a1 + 64, LogicalAddress, (__int64)a4);
    else
      SmmUnmapIommu(a1 + 64, LogicalAddress, a4);
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v8);
}
