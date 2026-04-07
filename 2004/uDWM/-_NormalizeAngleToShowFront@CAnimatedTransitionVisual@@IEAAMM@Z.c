/*
 * XREFs of ?_NormalizeAngleToShowFront@CAnimatedTransitionVisual@@IEAAMM@Z @ 0x1800A8510
 * Callers:
 *     ?Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z @ 0x1800A78A0 (-Rotate3D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_3D@@@Z.c)
 * Callees:
 *     fmodf_0 @ 0x180056052 (fmodf_0.c)
 */

float __fastcall CAnimatedTransitionVisual::_NormalizeAngleToShowFront(CAnimatedTransitionVisual *this, float a2)
{
  float v2; // xmm2_4
  float v3; // xmm0_4

  v2 = a2;
  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) > 90.0 )
  {
    v3 = fmodf_0(a2, 180.0);
    v2 = v3;
    if ( v3 <= 90.0 )
    {
      if ( v3 < -90.0 )
        return v3 + 180.0;
    }
    else
    {
      return v3 + -180.0;
    }
  }
  return v2;
}
