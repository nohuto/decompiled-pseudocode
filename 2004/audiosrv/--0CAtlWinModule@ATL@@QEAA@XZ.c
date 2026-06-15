/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x180054720
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001C40 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_18019F778 = 0LL;
  dword_18019F780 = 0;
  dword_18019F784 = 0;
  qword_18019F770 = 0LL;
  stru_18019F748 = 0LL;
  *(&stru_18019F748 + 4) = 0LL;
  *(&stru_18019F748 + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_18019F748) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
