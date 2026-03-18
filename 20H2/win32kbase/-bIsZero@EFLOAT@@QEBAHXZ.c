/*
 * XREFs of ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C005B8CC
 * Callers:
 *     vConvertXformToMatrix @ 0x1C005C330 (vConvertXformToMatrix.c)
 *     ?bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z @ 0x1C005C490 (-bMultiply@EXFORMOBJ@@QEAAHPEAVMATRIX@@0K@Z.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C00A0280 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C013E7F0 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EFLOAT::bIsZero(EFLOAT *this)
{
  return *(float *)this == 0.0;
}
