/*
 * XREFs of ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0076BCC
 * Callers:
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C002E380 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     vConvertXformToMatrix @ 0x1C00775F0 (vConvertXformToMatrix.c)
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C0077750 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C0147000 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIsZero(EFLOAT *this)
{
  return *(float *)this == 0.0;
}
