/*
 * XREFs of ?AddInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180053E6C
 * Callers:
 *     ?AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x180053E20 (-AddVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ?Add@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z @ 0x180053EF4 (-Add@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAA_KK@Z.c)
 *     ?Add@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAA_KAEBVCMasterVolumeNotificationProcess@@@Z @ 0x180053F40 (-Add@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotification.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  __int64 i; // rdx
  LPCRITICAL_SECTION v5; // r8
  bool v6; // zf
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h]

  v8 = a2;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = lpCriticalSection + 1;
    v6 = (unsigned int)i == *(_QWORD *)&lpCriticalSection[1].LockCount;
    if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&lpCriticalSection[1].LockCount )
      break;
    if ( *((_DWORD *)&v5->DebugInfo->Type + i) == a2 )
    {
      v6 = (unsigned int)i == *(_QWORD *)&lpCriticalSection[1].LockCount;
      break;
    }
  }
  if ( v6 )
  {
    v9 = 0LL;
    v9 = ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::Add(
           &lpCriticalSection[1],
           &v8,
           v5);
    ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::Add(&lpCriticalSection[1].SpinCount);
  }
  else
  {
    if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= lpCriticalSection[2].DebugInfo )
      ATL::AtlThrowImpl(-2147024809);
    ++*(_DWORD *)(lpCriticalSection[1].SpinCount + 4 * i);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
