/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180069F48
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18007DA20 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x18006B654 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&stru_18019F708);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_18019F738 = 0;
  dword_18019F73C = 0;
}
