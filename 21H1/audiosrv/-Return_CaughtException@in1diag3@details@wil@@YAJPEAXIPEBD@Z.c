/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C4E0C
 * Callers:
 *     _CAudioSession::AddDuckingManagerGainStage_::_1_::catch$18 @ 0x18006DDEC (_CAudioSession--AddDuckingManagerGainStage_--_1_--catch$18.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::catch$1 @ 0x18006F212 (_DeriveAudioProcessingModeConfiguration_--_1_--catch$1.c)
 *     _CDeviceGraphStore::GetFilteredSubmixes_::_1_::catch$6 @ 0x18006F791 (_CDeviceGraphStore--GetFilteredSubmixes_--_1_--catch$6.c)
 *     _CDeviceGraphObjectsStore::GetOffloadStreamGroups_::_1_::catch$37 @ 0x18006F91E (_CDeviceGraphObjectsStore--GetOffloadStreamGroups_--_1_--catch$37.c)
 *     _CDeviceGraphStore::GetOffloadStreamGroups_::_1_::catch$53 @ 0x18006FB12 (_CDeviceGraphStore--GetOffloadStreamGroups_--_1_--catch$53.c)
 *     _CAudioSession::ForEachOwningProcess_::_1_::catch$20 @ 0x180075B62 (_CAudioSession--ForEachOwningProcess_--_1_--catch$20.c)
 *     _CAudioSession::GetOwningProcesses_::_1_::catch$25 @ 0x180075BB2 (_CAudioSession--GetOwningProcesses_--_1_--catch$25.c)
 *     _CAudioSession::FinishConstruction_::_1_::catch$23 @ 0x180076010 (_CAudioSession--FinishConstruction_--_1_--catch$23.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::catch$62 @ 0x180076BB0 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--catch$62.c)
 *     _CAudioSessionManagerProvider::GetAudioSessionManagerInternal_::_1_::catch$48 @ 0x180077730 (_CAudioSessionManagerProvider--GetAudioSessionManagerInternal_--_1_--catch$48.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::catch$52 @ 0x180077D30 (_CAudioSessionManager--CreateAudioSession_--_1_--catch$52.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::catch$141 @ 0x18007A3C0 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--catch$141.c)
 *     _CPolicyConfig::GetAudioSessionPropertyStore_::_1_::catch$69 @ 0x18007A84F (_CPolicyConfig--GetAudioSessionPropertyStore_--_1_--catch$69.c)
 *     _EndpointDevice::InitAdapterInformation_::_1_::catch$6 @ 0x18007AE0B (_EndpointDevice--InitAdapterInformation_--_1_--catch$6.c)
 *     _EndpointDevice::InitTopologyIdInfo_::_1_::catch$11 @ 0x18007AE80 (_EndpointDevice--InitTopologyIdInfo_--_1_--catch$11.c)
 *     _CResourcePriorityTracker::AddResourcePriorityToMap_::_1_::catch$17 @ 0x18007BA60 (_CResourcePriorityTracker--AddResourcePriorityToMap_--_1_--catch$17.c)
 *     _CProcessSubmixProxy::AddStream_::_1_::catch$21 @ 0x18007BD90 (_CProcessSubmixProxy--AddStream_--_1_--catch$21.c)
 *     _CVolumeProvider::GetDeviceVolumeStrip_::_1_::catch$34 @ 0x18007BEF0 (_CVolumeProvider--GetDeviceVolumeStrip_--_1_--catch$34.c)
 *     _CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch$41 @ 0x18007C030 (_CProcessSubmixManager--OnNewProcessSubmix_--_1_--catch$41.c)
 *     _CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch$18 @ 0x18007C287 (_CDeviceGraphObjectsStore--GetSaDevices_--_1_--catch$18.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::catch$18 @ 0x18007CC56 (_AtmosCheck--AddArrayToLicenseMap_--_1_--catch$18.c)
 *     _CConstraintModel::Initialize_::_1_::catch$69 @ 0x18007D208 (_CConstraintModel--Initialize_--_1_--catch$69.c)
 *     _CVolumeProvider::CreateDeviceVolumeStrip_::_1_::catch$20 @ 0x18007D421 (_CVolumeProvider--CreateDeviceVolumeStrip_--_1_--catch$20.c)
 *     _CAudioSession::RegisterOwnerProcess_::_1_::catch$23 @ 0x1800CAF6D (_CAudioSession--RegisterOwnerProcess_--_1_--catch$23.c)
 *     _CAudioSessionManager::RegisterDisconnectNotificationClient_::_1_::catch$52 @ 0x1800D05CC (_CAudioSessionManager--RegisterDisconnectNotificationClient_--_1_--catch$52.c)
 *     _CAudioStream::RegisterStreamVolumeNotifications_::_1_::catch$21 @ 0x1800D307C (_CAudioStream--RegisterStreamVolumeNotifications_--_1_--catch$21.c)
 *     AudioServerGetEndpointVpoContext$catch$29 @ 0x1800DF9FC (AudioServerGetEndpointVpoContext$catch$29.c)
 *     AudioServerGetStreamVpoContext$catch$92 @ 0x1800E083C (AudioServerGetStreamVpoContext$catch$92.c)
 *     _CBaseStreamGroupProxy::AddStream_::_1_::catch$21 @ 0x1800E4B01 (_CBaseStreamGroupProxy--AddStream_--_1_--catch$21.c)
 *     _CBaseStreamGroupProxy::EnumerateProcessSubmixes_::_1_::catch$18 @ 0x1800E579C (_CBaseStreamGroupProxy--EnumerateProcessSubmixes_--_1_--catch$18.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::catch$38 @ 0x1800E8AAB (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--catch$38.c)
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::catch$54 @ 0x1800E8CBF (_CDeviceGraphStore--GetAllStreamGroups_--_1_--catch$54.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::catch$39 @ 0x1800E8ED3 (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--catch$39.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::catch$54 @ 0x1800E90DF (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--catch$54.c)
 *     _CDeviceGraphObjectsStore::GetStreamGroupsConnectedToSaDevice_::_1_::catch$20 @ 0x1800E9221 (_CDeviceGraphObjectsStore--GetStreamGroupsConnectedToSaDevice_--_1_--catch$20.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::catch$194 @ 0x1800E988B (_CDeviceGraphStore--GetSubmixHelper_--_1_--catch$194.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::catch$7 @ 0x1800E9995 (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--catch$7.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0 @ 0x1800F150C (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0_0 @ 0x1800F1579 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0_0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch$243 @ 0x1800F1B23 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--catch$243.c)
 *     asm_GetApplicationSubmixFromId$catch$16 @ 0x1800F2ABF (asm_GetApplicationSubmixFromId$catch$16.c)
 *     asm_GetApplicationSubmixes$catch$77 @ 0x1800F2D20 (asm_GetApplicationSubmixes$catch$77.c)
 *     _CMonitorManager::CreateMonitor_::_1_::catch$6 @ 0x1800FB1F9 (_CMonitorManager--CreateMonitor_--_1_--catch$6.c)
 *     _CMonitorManager::CreateStreamConnection_::_1_::catch$31 @ 0x1800FB61A (_CMonitorManager--CreateStreamConnection_--_1_--catch$31.c)
 *     _Sarm::CSpatialAudioResourceManager::RegisterForApplicationPolicyChanges_::_1_::catch$64 @ 0x180108961 (_Sarm--CSpatialAudioResourceManager--RegisterForApplicationPolicyChanges_--_1_--catch$64.c)
 *     _GetRecordFromWnf_::_1_::catch$0 @ 0x18010D52E (_GetRecordFromWnf_--_1_--catch$0.c)
 *     _AtmosCheck::BeginAppSvcCall_::_1_::catch$18 @ 0x180135855 (_AtmosCheck--BeginAppSvcCall_--_1_--catch$18.c)
 *     _AtmosCheck::EndAppSvcCall_::_1_::catch$34 @ 0x180135CFC (_AtmosCheck--EndAppSvcCall_--_1_--catch$34.c)
 *     _AtmosCheck::GetCurrentEndpointsUnderLock_::_1_::catch$54 @ 0x180136109 (_AtmosCheck--GetCurrentEndpointsUnderLock_--_1_--catch$54.c)
 *     _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::catch$21 @ 0x180138853 (_AtmosCheck--UpdateLicenseMapForAllEndpoints_--_1_--catch$21.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800C4D9C (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException((__int64)this, (unsigned int)a2, a3);
}
