/*
 * XREFs of ?SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002FD90
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002FBC8 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall SysMmMapIommuRange(struct SYSMM_ADAPTER *a1, __int64 a2, struct _MDL *a3, char a4)
{
  KIRQL v8; // al
  unsigned __int8 v9; // r10
  KIRQL v10; // r15
  unsigned int v11; // ebx

  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)a1 + 18);
  v9 = 0;
  v10 = v8;
  if ( a4 || (dword_1C0130B08 & 4) != 0 )
    v9 = 1;
  v11 = SmmMapMdlToIommu((struct SYSMM_ADAPTER *)((char *)a1 + 64), a2, a3, v9);
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)a1 + 18, v10);
  return v11;
}
