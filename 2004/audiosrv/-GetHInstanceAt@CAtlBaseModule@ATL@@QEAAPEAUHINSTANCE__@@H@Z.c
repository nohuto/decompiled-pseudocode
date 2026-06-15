/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x18013307C
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800C7414 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800BBD58 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_18019F708);
  v3 = 0LL;
  if ( (int)v2 <= dword_18019F738 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_18019F738 )
    {
      v3 = qword_18019F6F0;
    }
    else
    {
      if ( (int)v2 >= dword_18019F738 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        JUMPOUT(0x1801330F2LL);
      }
      v3 = *((_QWORD *)Block + v2);
    }
  }
  LeaveCriticalSection(&stru_18019F708);
  return v3;
}
