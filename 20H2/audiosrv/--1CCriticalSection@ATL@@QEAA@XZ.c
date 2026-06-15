/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800B6984
 * Callers:
 *     _AudioJournal::AudioJournal_::_1_::dtor$0 @ 0x180079DCC (_AudioJournal--AudioJournal_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x18007A083 (_AudioDeviceMgr--AudioDeviceMgr_--_1_--dtor$6.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$2 @ 0x18007A14B (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$2.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$3 @ 0x18007A161 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$3.c)
 *     _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$4 @ 0x18007A177 (_CConstraintModelResourceManager--CConstraintModelResourceManager_--_1_--dtor$4.c)
 *     _PhoneTopology::PhoneTopology_::_1_::dtor$2 @ 0x18007A1EB (_PhoneTopology--PhoneTopology_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$0 @ 0x18007A391 (_CMonitorManager--CMonitorManager_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$3 @ 0x18007A3BD (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$3.c)
 *     _PhoneCallAudio::PhoneCallAudio_::_1_::dtor$4 @ 0x18007A6CA (_PhoneCallAudio--PhoneCallAudio_--_1_--dtor$4.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$5 @ 0x18007B200 (_CAudioStream--CAudioStream_--_1_--dtor$5.c)
 *     _CAudioStream::CAudioStream_::_1_::dtor$12 @ 0x18007B2E0 (_CAudioStream--CAudioStream_--_1_--dtor$12.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$2 @ 0x18007B7A9 (_AtmosCheck--AtmosCheck_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$2 @ 0x18007C4F0 (_CMonitorManager--CMonitorManager_--_1_--dtor$2.c)
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$4 @ 0x18007C51C (_CMonitorManager--CMonitorManager_--_1_--dtor$4.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$1 @ 0x18007C790 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$1 @ 0x18007C8BD (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$2 @ 0x18007C8D3 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$2.c)
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$3 @ 0x18007C8E9 (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$3.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$1 @ 0x1800CDDA2 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$1.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$3 @ 0x1800CDDC2 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$3.c)
 *     _CMonitor::CMonitor_::_1_::dtor$0 @ 0x1800F972D (_CMonitor--CMonitor_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$4 @ 0x180105777 (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
