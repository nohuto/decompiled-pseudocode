/*
 * XREFs of ??1?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800CE55C
 * Callers:
 *     _CLockedList_CAudioSessionNotificationProcess_1_0_::ForEachEntry_::_1_::dtor$0 @ 0x180075F76 (_CLockedList_CAudioSessionNotificationProcess_1_0_--ForEachEntry_--_1_--dtor$0.c)
 *     ??1?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800CE5A0 (--1-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAA@XZ.c)
 *     ??1CAudioSessionManager@@EEAA@XZ @ 0x1800CE728 (--1CAudioSessionManager@@EEAA@XZ.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCAudioSessionNotificationProcess@@V?$CElementTraits@VCAudioSessionNotificationProcess@@@ATL@@@ATL@@CAXPEAVCAudioSessionNotificationProcess@@_K@Z @ 0x1800CEFA0 (-CallDestructors@-$CAtlArray@VCAudioSessionNotificationProcess@@V-$CElementTraits@VCAudioSession.c)
 */

void __fastcall ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::~CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>(
        void **a1)
{
  CAudioSessionNotificationProcess *v2; // rcx

  v2 = (CAudioSessionNotificationProcess *)*a1;
  if ( v2 )
  {
    ATL::CAtlArray<CAudioSessionNotificationProcess,ATL::CElementTraits<CAudioSessionNotificationProcess>>::CallDestructors(v2);
    free(*a1);
  }
}
