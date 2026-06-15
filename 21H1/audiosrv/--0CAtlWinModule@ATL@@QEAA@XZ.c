/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x180054620
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001C40 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_18019F788 = 0LL;
  dword_18019F790 = 0;
  dword_18019F794 = 0;
  qword_18019F780 = 0LL;
  stru_18019F758 = 0LL;
  *(&stru_18019F758 + 4) = 0LL;
  *(&stru_18019F758 + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_18019F758) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
