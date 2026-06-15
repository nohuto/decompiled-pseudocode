/*
 * XREFs of _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$0 @ 0x18013E20F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
