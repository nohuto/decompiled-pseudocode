/*
 * XREFs of ??0CAtlComModule@ATL@@QEAA@XZ @ 0x140013A9C
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x140001180 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400125C0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlComModule::CAtlComModule(ATL::CAtlComModule *this)
{
  ATL::_AtlComModule = 0;
  *(&CriticalSection + 4) = 0LL;
  qword_140084F78 = (__int64)&_ImageBase;
  qword_140084F80 = (__int64)_pobjMap_CAudioDeviceGraph;
  qword_140084F88 = (__int64)&_pobjMapEntryLast;
  CriticalSection = 0LL;
  *(&CriticalSection + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&CriticalSection) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  else
    ATL::_AtlComModule = 72;
  return &ATL::_AtlComModule;
}
