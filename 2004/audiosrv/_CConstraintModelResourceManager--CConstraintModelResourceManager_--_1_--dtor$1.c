/*
 * XREFs of _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$1 @ 0x18007ABF5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return ATL::CAutoPtr<CConstraintModel>::~CAutoPtr<CConstraintModel>(*(_QWORD *)(a2 + 48) + 16LL);
}
