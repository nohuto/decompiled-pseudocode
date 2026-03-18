/*
 * XREFs of ReadDefaultAccelerationCurves @ 0x1C002D890
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C002DB6C (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadDefaultAccelerationCurves(int a1, struct _UNICODE_STRING *a2)
{
  CDeviceAcceleration::CreateDefaultAcceleratorCurve(*(&qword_1C0241098 + 3 * a1), a2);
}
