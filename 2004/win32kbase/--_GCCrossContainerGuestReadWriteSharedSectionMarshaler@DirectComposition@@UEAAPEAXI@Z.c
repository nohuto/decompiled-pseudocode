/*
 * XREFs of ??_GCCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0050170
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00501B0 (--1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *__fastcall DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler::`scalar deleting destructor'(
        DirectComposition::CCrossContainerGuestReadWriteSharedSectionMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CDCompMappedSharedSectionMarshaler::`vftable';
  DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
