/*
 * XREFs of ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C27D0
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066370 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$8 @ 0x18007A5A8 (_CConstraintModel--Initialize_--_1_--dtor$8.c)
 *     ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800C282C (--1-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800C2AB0 (--1CVolumeStrip@@MEAA@XZ.c)
 *     ?ForEachEntry@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800C3234 (-ForEachEntry@-$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     _CLockedList_CMasterVolumeNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x1800C3358 (_CLockedList_CMasterVolumeNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800C6F44 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     _CAudioSession::DisconnectStreamList_::_1_::dtor$0 @ 0x1800C717D (_CAudioSession--DisconnectStreamList_--_1_--dtor$0.c)
 *     ??1?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800CD910 (--1-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800CDA98 (--1CAudioSessionManager@@EEAA@XZ.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$7 @ 0x1800CDE0E (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$7.c)
 *     ?CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z @ 0x1800F29E0 (-CheckEndpointsAreExclusive@CConstraintModelResourceManager@@UEAAJPEBG0PEAH@Z.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F3570 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800F3570.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x1800F39A5 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180138C68 (--1CConstraintModel@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
