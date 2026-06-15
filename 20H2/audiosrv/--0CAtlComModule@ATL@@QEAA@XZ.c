/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x180053FEC
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001700 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180010FA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  ATL::_AtlComModule = 0;
  *(&stru_18019E670 + 4) = 0LL;
  qword_18019E658 = (__int64)&_ImageBase;
  qword_18019E660 = (__int64)&_pobjMap_CAPOWrapperSrv;
  qword_18019E668 = (__int64)&_pobjMapEntryLast;
  stru_18019E670 = 0LL;
  *(&stru_18019E670 + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_18019E670) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
