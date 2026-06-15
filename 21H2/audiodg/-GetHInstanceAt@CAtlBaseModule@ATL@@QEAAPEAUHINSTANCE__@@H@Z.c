/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1400506CC
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400419A0 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14003E948 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_140090018);
  v3 = 0LL;
  if ( (int)v2 <= dword_140090048 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_140090048 )
    {
      v3 = qword_140090000;
    }
    else
    {
      if ( (int)v2 >= dword_140090048 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        JUMPOUT(0x140050742LL);
      }
      v3 = *((_QWORD *)qword_140090040 + v2);
    }
  }
  LeaveCriticalSection(&stru_140090018);
  return v3;
}
