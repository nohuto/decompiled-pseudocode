/*
 * XREFs of ??_GCSharedSectionWrapperMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0D10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CSharedSectionWrapperMarshaler *__fastcall DirectComposition::CSharedSectionWrapperMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
