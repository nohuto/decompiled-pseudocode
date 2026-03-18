/*
 * XREFs of ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01EAF50
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01EAF24 (--1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInteractionTrackerMarshaler *__fastcall DirectComposition::CInteractionTrackerMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionTrackerMarshaler *this,
        char a2)
{
  DirectComposition::CInteractionTrackerMarshaler::~CInteractionTrackerMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
