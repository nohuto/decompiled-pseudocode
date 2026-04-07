/*
 * XREFs of PixelAligningFactor @ 0x18009895C
 * Callers:
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001DD60 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001EAC0 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PixelAligningFactor(double a1, int a2, double *a3, double *a4)
{
  double v6; // xmm6_8
  double v7; // xmm0_8
  float v8; // xmm2_4
  double v9; // xmm2_8

  v6 = (double)a2 * a1;
  v7 = modf(v6, a3);
  v8 = v7;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 0.0) & _xmm) <= 0.0000011920929 )
  {
    v9 = v7;
  }
  else
  {
    if ( v7 > 0.4900000095367432 )
      *a3 = *a3 + 1.0;
    v9 = 1.0 - v7;
  }
  *a4 = v9 / v6;
}
