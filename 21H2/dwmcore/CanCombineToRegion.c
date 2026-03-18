/*
 * XREFs of CanCombineToRegion @ 0x180190594
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ @ 0x18026062C (-Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_NXZ.c)
 */

char __fastcall CanCombineToRegion(__int64 a1, __int64 a2, __int64 a3, CMILMatrix *a4)
{
  char v6; // bl

  v6 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1) == 2
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3) == 2
    && (!a4 || CMILMatrix::Is2DAxisAlignedIntegerPreserving(a4)) )
  {
    return 1;
  }
  return v6;
}
