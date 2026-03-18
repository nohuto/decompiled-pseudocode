/*
 * XREFs of ??_GCSharedReadCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01FABA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedReadCaptureControllerMarshaler *__fastcall DirectComposition::CSharedReadCaptureControllerMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedReadCaptureControllerMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSharedReadCaptureControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
