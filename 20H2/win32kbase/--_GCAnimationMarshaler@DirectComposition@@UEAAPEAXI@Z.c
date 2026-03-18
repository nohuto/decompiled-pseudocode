/*
 * XREFs of ??_GCAnimationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00A4CFC
 * Callers:
 *     ??_ECAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z @ 0x1C00D58B0 (--_ECAnimationMarshaler@DirectComposition@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CAnimationMarshaler@DirectComposition@@UEAA@XZ @ 0x1C00A4D34 (--1CAnimationMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CAnimationMarshaler *__fastcall DirectComposition::CAnimationMarshaler::`scalar deleting destructor'(
        DirectComposition::CAnimationMarshaler *this,
        char a2)
{
  DirectComposition::CAnimationMarshaler::~CAnimationMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
