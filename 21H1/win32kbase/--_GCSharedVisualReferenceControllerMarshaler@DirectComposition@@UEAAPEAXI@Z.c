/*
 * XREFs of ??_GCSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01F9910
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedVisualReferenceControllerMarshaler *__fastcall DirectComposition::CSharedVisualReferenceControllerMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedVisualReferenceControllerMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSharedVisualReferenceControllerMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
