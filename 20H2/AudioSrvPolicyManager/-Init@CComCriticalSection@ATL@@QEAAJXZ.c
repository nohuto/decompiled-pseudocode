/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800366D8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001F60 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001F90 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
