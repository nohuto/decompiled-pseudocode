/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18004125C
 * Callers:
 *     _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::dtor$0 @ 0x18004F6F0 (_InputSiteManager--GetInputSiteListFromDITCallbackStruct_--_1_--dtor$0.c)
 *     _InputSiteHierarchyManager::GetAllInputSites_::_1_::dtor$0 @ 0x1800F176F (_InputSiteHierarchyManager--GetAllInputSites_--_1_--dtor$0.c)
 *     _InputSiteHierarchyManager::GetInputSiteListToRoot_::_1_::dtor$0 @ 0x1800F1878 (_InputSiteHierarchyManager--GetInputSiteListToRoot_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  return std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(a1, a2, a3);
}
