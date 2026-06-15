/*
 * XREFs of ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800E87D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800E855C (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDevice(CDeviceGraphObjectsStore *this, struct ISaDeviceProxy **a2)
{
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v3[0] = off_180156628;
  v3[7] = v3;
  return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v3, (__int64 *)a2);
}
