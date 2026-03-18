/*
 * XREFs of SmmMapIommu @ 0x1C002FBA0
 * Callers:
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002FBC8 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     SmmIommuMapStagingMdl @ 0x1C006DEC4 (SmmIommuMapStagingMdl.c)
 * Callees:
 *     SmmIommuMapIdentityRange @ 0x1C002FB4C (SmmIommuMapIdentityRange.c)
 *     SmmIommuMapLogicalRange @ 0x1C006DDEC (SmmIommuMapLogicalRange.c)
 */

__int64 __fastcall SmmMapIommu(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 32);
  if ( a2 )
    return SmmIommuMapLogicalRange(v3, a2, a3, a2);
  else
    return SmmIommuMapIdentityRange(v3);
}
