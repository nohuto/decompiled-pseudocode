/*
 * XREFs of ??_ECInteractionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C006A5C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ??1CInteractionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C006A878 (--1CInteractionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInteractionMarshaler *__fastcall DirectComposition::CInteractionMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionMarshaler *this,
        char a2)
{
  DirectComposition::CInteractionMarshaler::~CInteractionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
