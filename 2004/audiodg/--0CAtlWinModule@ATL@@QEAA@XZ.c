/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140013B20
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140001220 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400125C0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_140085058 = 0LL;
  dword_140085060 = 0;
  dword_140085064 = 0;
  qword_140085050 = 0LL;
  stru_140085028 = 0LL;
  *(&stru_140085028 + 4) = 0LL;
  *(&stru_140085028 + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_140085028) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
