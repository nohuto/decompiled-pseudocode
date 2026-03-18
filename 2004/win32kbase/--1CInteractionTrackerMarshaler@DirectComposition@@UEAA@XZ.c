/*
 * XREFs of ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01EAF24
 * Callers:
 *     ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01EAF50 (--_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::~CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  v1 = *((_QWORD *)this + 46);
  if ( v1 )
    Win32FreePool(v1);
}
