/*
 * XREFs of ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01F0990
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01F0964 (--1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CInteractionTrackerMarshaler *__fastcall DirectComposition::CInteractionTrackerMarshaler::`vector deleting destructor'(
        DirectComposition::CInteractionTrackerMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl
  __int64 v5; // rdx
  __int64 v6; // r8

  v3 = a2;
  DirectComposition::CInteractionTrackerMarshaler::~CInteractionTrackerMarshaler(this, a2, a3);
  if ( (v3 & 1) != 0 )
    Win32FreePool((__int64)this, v5, v6);
  return this;
}
