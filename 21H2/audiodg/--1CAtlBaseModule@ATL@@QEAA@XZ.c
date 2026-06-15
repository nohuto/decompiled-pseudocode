/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14001C9D0
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x14002DC30 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x14001DEF4 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&stru_140090018);
  if ( qword_140090040 )
  {
    free(qword_140090040);
    qword_140090040 = 0LL;
  }
  dword_140090048 = 0;
  dword_14009004C = 0;
}
