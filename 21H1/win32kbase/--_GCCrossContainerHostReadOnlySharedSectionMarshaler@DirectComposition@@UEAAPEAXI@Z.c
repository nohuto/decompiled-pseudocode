/*
 * XREFs of ??_GCCrossContainerHostReadOnlySharedSectionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01EB3C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0042B30 (--1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *__fastcall DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::`scalar deleting destructor'(
        DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  *(_QWORD *)this = &DirectComposition::CCrossContainerHostReadOnlySharedSectionMarshaler::`vftable';
  DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
