/*
 * XREFs of ??1?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAA@XZ @ 0x18000E744
 * Callers:
 *     ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x18000E330 (--_ECDuckingManager@@UEAAPEAXI@Z.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$3 @ 0x180040B54 (_CDuckingManager--CDuckingManager_--_1_--dtor$3.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000E9E0 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x18000F088 (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 */

void __fastcall CLockedList<CDuckingNotification,1,0>::~CLockedList<CDuckingNotification,1,0>(
        LPCRITICAL_SECTION lpCriticalSection)
{
  void *SpinCount; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx

  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(&lpCriticalSection[1], 0LL);
  LeaveCriticalSection(lpCriticalSection);
  SpinCount = (void *)lpCriticalSection[1].SpinCount;
  if ( SpinCount )
    free(SpinCount);
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( DebugInfo )
  {
    ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
      DebugInfo,
      *(_QWORD *)&lpCriticalSection[1].LockCount);
    free(lpCriticalSection[1].DebugInfo);
  }
  DeleteCriticalSection(lpCriticalSection);
}
