/*
 * XREFs of ReadDefaultAccelerationCurves @ 0x1C0012820
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C0012AFC (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall ReadDefaultAccelerationCurves(int a1, struct _UNICODE_STRING *a2)
{
  CDeviceAcceleration::CreateDefaultAcceleratorCurve(*(&qword_1C0247098 + 3 * a1), a2);
}
