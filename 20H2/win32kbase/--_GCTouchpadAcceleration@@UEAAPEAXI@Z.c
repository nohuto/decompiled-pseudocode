/*
 * XREFs of ??_GCTouchpadAcceleration@@UEAAPEAXI@Z @ 0x1C00BE8E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

CTouchpadAcceleration *__fastcall CTouchpadAcceleration::`scalar deleting destructor'(
        CTouchpadAcceleration *this,
        char a2)
{
  *(_QWORD *)this = &CDeviceAcceleration::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
