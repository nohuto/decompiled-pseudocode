/*
 * XREFs of _CConstraintModelResourceManager::ReacquireResourceHandle_::_1_::dtor$1 @ 0x1800F47C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CConstraintModelResourceManager::ReacquireResourceHandle_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
