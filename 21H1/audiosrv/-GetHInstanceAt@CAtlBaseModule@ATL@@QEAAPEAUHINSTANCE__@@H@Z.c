/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x1801333CC
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800C7324 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBC68 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_18019F718);
  v3 = 0LL;
  if ( (int)v2 <= dword_18019F748 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_18019F748 )
    {
      v3 = qword_18019F700;
    }
    else
    {
      if ( (int)v2 >= dword_18019F748 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        JUMPOUT(0x180133442LL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_18019F718);
  return v3;
}
