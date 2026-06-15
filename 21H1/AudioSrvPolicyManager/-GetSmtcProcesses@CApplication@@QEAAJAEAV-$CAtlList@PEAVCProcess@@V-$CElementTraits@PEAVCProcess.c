/*
 * XREFs of ?GetSmtcProcesses@CApplication@@QEAAJAEAV?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@@Z @ 0x180018250
 * Callers:
 *     ?GetNotificationDataSize@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEA_K@Z @ 0x18002BE64 (-GetNotificationDataSize@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x18002C014 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x18001D790 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18001D884 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GetSmtcProcesses(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]
  int v14; // [rsp+70h] [rbp+18h]
  _QWORD *v15; // [rsp+78h] [rbp+20h]

  v13 = a2;
  v12 = a1;
  v2 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = 0;
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(v2);
  v5 = *(_QWORD **)(a1 + 72);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    v15 = v5;
    v12 = v6;
    if ( !*(_DWORD *)(v6 + 448) && *(_DWORD *)(v6 + 528) )
    {
      try
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        v4 = 0;
        ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(v2, &v12);
      }
      catch ( ATL::CAtlException *v9 )
      {
        v8 = v9;
        if ( *(_DWORD *)v9 == -1073741571 )
          _o__resetstkoflw();
        v14 = *(_DWORD *)v8;
        v4 = v14;
        if ( v14 < 0 )
          break;
        v2 = v13;
        v5 = v15;
      }
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
