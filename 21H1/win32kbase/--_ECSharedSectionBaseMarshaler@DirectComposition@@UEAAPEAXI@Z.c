/*
 * XREFs of ??_ECSharedSectionBaseMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0042B30 (--1CSharedSectionBaseMarshaler@DirectComposition@@UEAA@XZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CSharedSectionBaseMarshaler *__fastcall DirectComposition::CSharedSectionBaseMarshaler::`vector deleting destructor'(
        DirectComposition::CSharedSectionBaseMarshaler *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  DirectComposition::CSharedSectionBaseMarshaler::~CSharedSectionBaseMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this, v4, v5);
  return this;
}
