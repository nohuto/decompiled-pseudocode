/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x180036660
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180017BB0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x18001A074 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int16 *__fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int16 *v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_18004F0F8);
  v3 = 0LL;
  if ( (int)v2 <= dword_18004F128 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_18004F128 )
    {
      v3 = off_18004F0E0;
    }
    else
    {
      if ( (int)v2 >= dword_18004F128 )
      {
        ATL::_AtlRaiseException();
        JUMPOUT(0x1800366D1LL);
      }
      v3 = (__int16 *)*((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_18004F0F8);
  return v3;
}
