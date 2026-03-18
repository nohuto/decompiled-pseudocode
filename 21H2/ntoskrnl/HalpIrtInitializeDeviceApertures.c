/*
 * XREFs of HalpIrtInitializeDeviceApertures @ 0x14090A064
 * Callers:
 *     HalpInitializeInterruptRemappingBspLate @ 0x1409098C0 (HalpInitializeInterruptRemappingBspLate.c)
 * Callees:
 *     HalpIrtAllocateDeviceAperture @ 0x1409099C0 (HalpIrtAllocateDeviceAperture.c)
 */

__int64 HalpIrtInitializeDeviceApertures()
{
  __int64 result; // rax
  int v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  qword_140C4ADC8 = (__int64)&HalpIrtAllocatedDeviceAperturesHead;
  HalpIrtAllocatedDeviceAperturesHead = (__int64)&HalpIrtAllocatedDeviceAperturesHead;
  qword_140C4AFF8 = (__int64)&HalpIrtFreeDeviceAperturesHead;
  HalpIrtFreeDeviceAperturesHead = (__int64)&HalpIrtFreeDeviceAperturesHead;
  result = HalpIrtAllocateDeviceAperture(-1, -1, 1, 0, &v1);
  if ( (int)result >= 0 )
    HalpIrtDefaultDeviceAperture = HalpIrtAllocatedDeviceAperturesHead;
  return result;
}
