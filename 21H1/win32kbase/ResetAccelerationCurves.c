/*
 * XREFs of ResetAccelerationCurves @ 0x1C00A5890
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C00A58B8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(int a1)
{
  CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C0247098 + 3 * a1));
}
