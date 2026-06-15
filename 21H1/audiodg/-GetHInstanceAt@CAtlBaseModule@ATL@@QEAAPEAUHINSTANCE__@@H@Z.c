/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140045EBC
 * Callers:
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1400370DC (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x140034118 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  v2 = a2;
  EnterCriticalSection(&stru_140084FE8);
  v3 = 0LL;
  if ( (int)v2 <= dword_140085018 && (int)v2 >= 0 )
  {
    if ( (_DWORD)v2 == dword_140085018 )
    {
      v3 = qword_140084FD0;
    }
    else
    {
      if ( (int)v2 >= dword_140085018 )
      {
        ATL::_AtlRaiseException(0xC000008C);
        JUMPOUT(0x140045F32LL);
      }
      v3 = *((_QWORD *)qword_140085010 + v2);
    }
  }
  LeaveCriticalSection(&stru_140084FE8);
  return v3;
}
