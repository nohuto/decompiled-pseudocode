/*
 * XREFs of ??1?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAA@XZ @ 0x1800F2F14
 * Callers:
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$5 @ 0x18007AC4D (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$5.c)
 *     _CMonitor::CMonitor_::_1_::dtor$20 @ 0x1800FA521 (_CMonitor--CMonitor_--_1_--dtor$20.c)
 *     _CMonitor::CMonitor_::_1_::dtor$21 @ 0x1800FA534 (_CMonitor--CMonitor_--_1_--dtor$21.c)
 *     _DynamicAudioEndpointManager::AddRule_::_1_::dtor$3 @ 0x18011240F (_DynamicAudioEndpointManager--AddRule_--_1_--dtor$3.c)
 *     _DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies_::_1_::dtor$0 @ 0x180114776 (_DynamicAudioEndpointManager--VerifyListIntegrityAndRefreshDependencies_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::~CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>(
        __int64 *a1)
{
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll(a1);
}
