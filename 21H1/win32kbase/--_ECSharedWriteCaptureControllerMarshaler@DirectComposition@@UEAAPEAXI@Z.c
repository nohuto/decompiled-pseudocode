/*
 * XREFs of ??_ECSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01FADF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedWriteCaptureControllerMarshaler *__fastcall DirectComposition::CSharedWriteCaptureControllerMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedWriteCaptureControllerMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSharedWriteCaptureControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
