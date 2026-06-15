/*
 * XREFs of ??1?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAA@XZ @ 0x1800C282C
 * Callers:
 *     _CVolumeStrip::CVolumeStrip_::_1_::dtor$1 @ 0x18007CA4B (_CVolumeStrip--CVolumeStrip_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800529CC (-RemoveAt@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotific.c)
 *     ??1?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA@XZ @ 0x1800C27D0 (--1-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotificationPr.c)
 */

void __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::~CLockedList<CMasterVolumeNotificationProcess,1,0>(
        LPCRITICAL_SECTION lpCriticalSection)
{
  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::RemoveAt(
      (__int64 *)&lpCriticalSection[1],
      0LL);
  LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&lpCriticalSection[1].SpinCount);
  ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::~CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>((void **)&lpCriticalSection[1].DebugInfo);
  DeleteCriticalSection(lpCriticalSection);
}
