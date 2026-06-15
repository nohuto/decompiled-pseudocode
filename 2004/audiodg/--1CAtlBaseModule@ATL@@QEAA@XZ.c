/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001C6A0
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x1400230A0 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x14001DB94 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&stru_140084FE8);
  if ( qword_140085010 )
  {
    free(qword_140085010);
    qword_140085010 = 0LL;
  }
  dword_140085018 = 0;
  dword_14008501C = 0;
}
