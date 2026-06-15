/*
 * XREFs of ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800CE614
 * Callers:
 *     _CDeviceGraphStore::GetOffloadStreamGroups_::_1_::dtor$0 @ 0x18006FAFA (_CDeviceGraphStore--GetOffloadStreamGroups_--_1_--dtor$0.c)
 *     _CAudioResourceManager::DisconnectOffloadStreams_::_1_::dtor$0 @ 0x1800709D5 (_CAudioResourceManager--DisconnectOffloadStreams_--_1_--dtor$0.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$8 @ 0x180077654 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$8.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$4 @ 0x180077666 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$4.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$3 @ 0x1800787A0 (_UseSupportedConnectorMode_--_1_--dtor$3.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$0 @ 0x18007AF32 (_CAudioSessionManager--Disconnect_--_1_--dtor$0.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$1 @ 0x18007B00E (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$1.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$2 @ 0x18007B020 (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$2.c)
 *     __lambda_4b3be4062b453557032a0102af949bc6_::operator()_::_1_::dtor$0 @ 0x1800E42C8 (__lambda_4b3be4062b453557032a0102af949bc6_--operator()_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor$0 @ 0x1800E8CA7 (_CDeviceGraphStore--GetAllStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::dtor$0 @ 0x1800E90C7 (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$0 @ 0x1800E9843 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$2 @ 0x1800E985B (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$2.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$3 @ 0x1800E9867 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$3.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$4 @ 0x1800E9873 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$4.c)
 *     __lambda_f3d78743e27405bb129d35bae2d06b95_::operator()_::_1_::dtor$0 @ 0x1800EB229 (__lambda_f3d78743e27405bb129d35bae2d06b95_--operator()_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$3 @ 0x1800EDACD (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$3.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$7 @ 0x1800EDAFD (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$7.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$0 @ 0x1800EE7F8 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CE04C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>(
        __int64 a1)
{
  __int64 *v1; // rdi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
