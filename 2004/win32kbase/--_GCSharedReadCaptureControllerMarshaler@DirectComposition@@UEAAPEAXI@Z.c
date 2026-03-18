/*
 * XREFs of ??_GCSharedReadCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01F5170
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CSharedReadCaptureControllerMarshaler *__fastcall DirectComposition::CSharedReadCaptureControllerMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedReadCaptureControllerMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedReadCaptureControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
