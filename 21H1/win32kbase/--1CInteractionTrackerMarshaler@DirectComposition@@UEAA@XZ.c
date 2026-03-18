/*
 * XREFs of ??1CInteractionTrackerMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01F0964
 * Callers:
 *     ??_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01F0990 (--_ECInteractionTrackerMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CInteractionTrackerMarshaler::~CInteractionTrackerMarshaler(
        DirectComposition::CInteractionTrackerMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx

  *(_QWORD *)this = &DirectComposition::CInteractionTrackerMarshaler::`vftable';
  v3 = *((_QWORD *)this + 46);
  if ( v3 )
    Win32FreePool(v3, a2, a3);
}
