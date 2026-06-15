/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x1800695E8
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x18007CF60 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     free @ 0x18006ACF4 (free.c)
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&stru_18019E6C8);
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_18019E6F8 = 0;
  dword_18019E6FC = 0;
}
