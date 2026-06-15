/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x18005468C
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x180001BA0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800114E8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  ATL::_AtlComModule = 0;
  *(&stru_18019F6C0 + 4) = 0LL;
  qword_18019F6A8 = (__int64)&_ImageBase;
  qword_18019F6B0 = (__int64)&_pobjMap_CAPOWrapperSrv;
  qword_18019F6B8 = (__int64)&_pobjMapEntryLast;
  stru_18019F6C0 = 0LL;
  *(&stru_18019F6C0 + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_18019F6C0) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
