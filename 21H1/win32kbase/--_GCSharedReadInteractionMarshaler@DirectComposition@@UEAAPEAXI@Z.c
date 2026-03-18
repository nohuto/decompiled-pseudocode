/*
 * XREFs of ??_GCSharedReadInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C002ED00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedReadInteractionMarshaler *__fastcall DirectComposition::CSharedReadInteractionMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedReadInteractionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedReadMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
