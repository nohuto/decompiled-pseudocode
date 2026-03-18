/*
 * XREFs of powf @ 0x1800E25C8
 * Callers:
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801F7C7C (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Pow@CExpressionValueStack@@QEAAJXZ @ 0x180202640 (-Pow@CExpressionValueStack@@QEAAJXZ.c)
 *     ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x180211010 (-CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ.c)
 *     ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x180211228 (-UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z.c)
 *     ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180211470 (-UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z.c)
 *     ?scRGBTosRGB@@YAMM@Z @ 0x180221144 (-scRGBTosRGB@@YAMM@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl powf(float X, float Y)
{
  return _o_powf(X, Y);
}
