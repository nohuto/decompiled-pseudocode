/*
 * XREFs of powf @ 0x1800E3D78
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801F347C (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x1801FDE40 (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18020C810 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x18020CA28 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x18020CC70 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x18021C914 (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
