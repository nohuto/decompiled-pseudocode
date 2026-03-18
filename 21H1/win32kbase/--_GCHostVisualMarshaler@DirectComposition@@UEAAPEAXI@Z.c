/*
 * XREFs of ??_GCHostVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C002BD10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00928CC (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CHostVisualMarshaler *__fastcall DirectComposition::CHostVisualMarshaler::`scalar deleting destructor'(
        DirectComposition::CHostVisualMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CHostVisualMarshaler::`vftable';
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
