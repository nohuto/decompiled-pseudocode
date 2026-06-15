/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800B7594
 * Callers:
 *     _AudioJournal::AudioJournal_::_1_::dtor$0 @ 0x18007A78C (_AudioJournal--AudioJournal_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x18007AA43 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x18007AB0B (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x18007AB21 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x18007AB37 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18007ABAB (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18007AD51 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$3 @ 0x18007AD7D (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$3.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18007B08A (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$5 @ 0x18007BBC0 (_CAudioStream--CAudioStream_--_1_--dtor$5.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$12 @ 0x18007BCA0 (_CAudioStream--CAudioStream_--_1_--dtor$12.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x18007C169 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18007CEB0 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18007CEDC (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18007D150 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18007D27D (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18007D293 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18007D2A9 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$1 @ 0x1800CE972 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$3 @ 0x1800CE992 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$3.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x1800FA2FD (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x180106347 (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
