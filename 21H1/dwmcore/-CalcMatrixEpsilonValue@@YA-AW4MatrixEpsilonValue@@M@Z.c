/*
 * XREFs of ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x180012ABC
 * Callers:
 *     ?RecordTransformAndColorSpace@CFlipExSwapchainStatistics@@UEAA_NAEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180012720 (-RecordTransformAndColorSpace@CFlipExSwapchainStatistics@@UEAA_NAEBVCMILMatrix@@W4DXGI_COLOR_SPA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcMatrixEpsilonValue(float a1)
{
  __int64 result; // rax

  if ( COERCE_FLOAT(LODWORD(a1) & _xmm) < 0.000081380211 )
    return 0LL;
  result = 0xFFFFFFFFLL;
  if ( a1 > 0.0 )
    return 1LL;
  return result;
}
