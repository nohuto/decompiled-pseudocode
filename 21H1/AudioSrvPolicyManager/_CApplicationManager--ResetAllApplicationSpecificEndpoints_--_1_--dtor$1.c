/*
 * XREFs of _CApplicationManager::ResetAllApplicationSpecificEndpoints_::_1_::dtor$1 @ 0x180041309
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ResetAllApplicationSpecificEndpoints_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 32));
}
