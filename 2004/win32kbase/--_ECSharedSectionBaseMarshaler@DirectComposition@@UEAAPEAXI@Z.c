/*
 * XREFs of ??_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D0CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00501B0 (--1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CSharedSectionBaseMarshaler *__fastcall DirectComposition::CSharedSectionBaseMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedSectionBaseMarshaler *this,
        char a2)
{
  DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
