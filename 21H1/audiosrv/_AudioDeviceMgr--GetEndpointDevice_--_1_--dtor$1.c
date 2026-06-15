/*
 * XREFs of _AudioDeviceMgr::GetEndpointDevice_::_1_::dtor$1 @ 0x18013E66D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::GetEndpointDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
