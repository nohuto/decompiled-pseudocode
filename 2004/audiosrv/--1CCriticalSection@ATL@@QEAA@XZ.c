/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800B7634
 * Callers:
 *     _AudioJournal::AudioJournal_::_1_::dtor$0 @ 0x18007A88C (_AudioJournal--AudioJournal_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x18007AB43 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x18007AC0B (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x18007AC21 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x18007AC37 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18007ACAB (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18007AE51 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$3 @ 0x18007AE7D (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$3.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18007B18A (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$5 @ 0x18007BCC0 (_CAudioStream--CAudioStream_--_1_--dtor$5.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$12 @ 0x18007BDA0 (_CAudioStream--CAudioStream_--_1_--dtor$12.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x18007C269 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18007CFB0 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18007CFDC (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18007D250 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18007D37D (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18007D393 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18007D3A9 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$1 @ 0x1800CEA32 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$3 @ 0x1800CEA52 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$3.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x1800FA3BD (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x180106407 (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
