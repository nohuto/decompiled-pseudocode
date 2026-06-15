/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x1400137E0
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001250 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012460 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_140090088 = 0LL;
  dword_140090090 = 0;
  dword_140090094 = 0;
  qword_140090080 = 0LL;
  stru_140090058 = 0LL;
  *(&stru_140090058 + 4) = 0LL;
  *(&stru_140090058 + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_140090058) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
