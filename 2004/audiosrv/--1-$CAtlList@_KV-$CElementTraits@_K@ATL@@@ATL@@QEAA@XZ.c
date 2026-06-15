/*
 * XREFs of ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x1800F2F20
 * Callers:
 *     _CConstraintModel::Initialize_::_1_::dtor$6 @ 0x18007D2E4 (_CConstraintModel--Initialize_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::ProcessRevokedResources_::_1_::dtor$0 @ 0x1800F4C3E (_CConstraintModelResourceManager--ProcessRevokedResources_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::~CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>(
        __int64 a1)
{
  return ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(a1);
}
