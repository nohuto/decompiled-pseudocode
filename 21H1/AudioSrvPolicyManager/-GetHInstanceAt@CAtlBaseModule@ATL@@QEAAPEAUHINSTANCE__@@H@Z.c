/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18003BF20
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18001D510 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001F9D4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int16 *__fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int16 *v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_180055248);
  v3 = 0LL;
  if ( (int)v2 <= dword_180055278 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_180055278 )
    {
      v3 = off_180055230;
    }
    else
    {
      if ( (int)v2 >= dword_180055278 )
      {
        ATL::_AtlRaiseException();
        JUMPOUT(0x18003BF91LL);
      }
      v3 = (__int16 *)*((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_180055248);
  return v3;
}
