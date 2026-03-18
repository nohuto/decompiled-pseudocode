/*
 * XREFs of ??_GCSharedManipulationTransformMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0096A90
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedManipulationTransformMarshaler *__fastcall DirectComposition::CSharedManipulationTransformMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedManipulationTransformMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  *(_QWORD *)this = &DirectComposition::CSharedManipulationTransformMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
