/*
 * XREFs of SmmMapLockedPagesToIommu @ 0x1C0070D64
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C03C1928 (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C001BB40 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002FBC8 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall SmmMapLockedPagesToIommu(__int64 a1, __int64 a2, __int64 a3, struct _MDL *a4)
{
  unsigned int v8; // ebx
  KIRQL v9; // bp
  __int64 LogicalAddress; // rax

  v8 = 0;
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  if ( !*(_DWORD *)(a1 + 92) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a3 + 24));
    if ( (*(_DWORD *)(a2 + 44) & 0x200) != 0 || (dword_1C0130B08 & 4) != 0 )
      LOBYTE(v8) = 1;
    v8 = SmmMapMdlToIommu((struct SYSMM_IOMMU *)(a1 + 64), LogicalAddress, a4, v8);
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v9);
  return v8;
}
