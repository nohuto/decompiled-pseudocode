/*
 * XREFs of ResetAccelerationCurves @ 0x1C000FDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C000FDD8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(int a1)
{
  CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C0241098 + 3 * a1));
}
