/*
 * XREFs of DoAccel @ 0x1C01AB600
 * Callers:
 *     <none>
 * Callees:
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0010438 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 */

void __fastcall DoAccel(int a1, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  CDeviceAcceleration::Accelerate(*(&qword_1C0241098 + 3 * a1), a2, a3, a4);
}
