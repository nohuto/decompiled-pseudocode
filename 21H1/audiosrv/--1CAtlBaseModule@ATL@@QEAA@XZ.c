/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x180069E48
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18007D920 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x18006B554 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&stru_18019F718);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_18019F748 = 0;
  dword_18019F74C = 0;
}
