/*
 * XREFs of Win32UserInitialize @ 0x1C0299728
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029C0C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C00101D8 (ApiSetEditionBaseDriverEntryInitialize.c)
 *     IsIMMEnabledSystem @ 0x1C0010290 (IsIMMEnabledSystem.c)
 *     UserAddAtomToAtomTableEx @ 0x1C00105B0 (UserAddAtomToAtomTableEx.c)
 *     OpenCacheKeyEx @ 0x1C0014290 (OpenCacheKeyEx.c)
 *     Initialize @ 0x1C00153AC (Initialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C001551C (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0055810 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitSecurity @ 0x1C0299470 (InitSecurity.c)
 *     HMInitHandleTable @ 0x1C029967C (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C029A6C4 (InitCreateUserSubsystem.c)
 *     InitQEntryLookaside @ 0x1C029AE28 (InitQEntryLookaside.c)
 *     InitCreateSharedSection @ 0x1C029AE90 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C029AFE8 (InitKernelHandleTable.c)
 */

__int64 Win32UserInitialize()
{
  int v0; // r14d
  int v1; // r15d
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int ProcessSessionId; // ebx
  __int64 v20; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  void *v27; // rcx
  int inited; // esi
  int v29; // eax
  int v30; // eax
  int AtomTable; // eax
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  unsigned int v39; // r8d
  __int64 v40; // r9
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  _QWORD *v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  void *v52; // rbx
  void *v53; // rbx
  int v54; // eax
  int v55; // edi
  void *v56; // rbx
  int v57; // eax
  int *v58; // rbx
  int v59; // esi
  void *v60; // rdi
  _DWORD *v61; // rbx
  void *v62; // rdi
  _DWORD *v63; // rbx
  void *v64; // rdi
  _DWORD *v65; // rbx
  void *v66; // rdi
  _DWORD *v67; // rbx
  void *v68; // rdi
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  _QWORD *PoolWithTag; // rax
  void *v74; // rbx
  int v75; // eax
  __int64 v77; // rax
  unsigned int v78; // r8d
  PERESOURCE *DomainLockRef; // rax
  PERESOURCE *v80; // rbx
  __int64 *v81; // r12
  __int64 v82; // rax
  PERESOURCE *v83; // rdi
  int v84; // [rsp+38h] [rbp-D0h] BYREF
  int v85; // [rsp+3Ch] [rbp-CCh] BYREF
  int v86; // [rsp+40h] [rbp-C8h] BYREF
  int v87; // [rsp+44h] [rbp-C4h] BYREF
  int v88; // [rsp+48h] [rbp-C0h] BYREF
  int v89; // [rsp+4Ch] [rbp-BCh] BYREF
  int v90; // [rsp+50h] [rbp-B8h] BYREF
  int v91; // [rsp+54h] [rbp-B4h] BYREF
  int v92; // [rsp+58h] [rbp-B0h] BYREF
  int v93; // [rsp+5Ch] [rbp-ACh] BYREF
  int v94; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v96; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG v97; // [rsp+70h] [rbp-98h] BYREF
  ULONG v98; // [rsp+74h] [rbp-94h] BYREF
  ULONG v99; // [rsp+78h] [rbp-90h] BYREF
  ULONG v100; // [rsp+7Ch] [rbp-8Ch] BYREF
  ULONG v101; // [rsp+80h] [rbp-88h] BYREF
  ULONG v102; // [rsp+84h] [rbp-84h] BYREF
  int *v103; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v106; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING v107; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v108; // [rsp+D0h] [rbp-38h] BYREF
  struct _UNICODE_STRING v109; // [rsp+E0h] [rbp-28h] BYREF
  struct _UNICODE_STRING v110; // [rsp+F0h] [rbp-18h] BYREF
  struct _UNICODE_STRING v111; // [rsp+100h] [rbp-8h] BYREF
  __int64 v112; // [rsp+110h] [rbp+8h]
  unsigned __int8 v113; // [rsp+118h] [rbp+10h]
  GUID ActivityId; // [rsp+11Ch] [rbp+14h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+130h] [rbp+28h] BYREF
  int *v116; // [rsp+150h] [rbp+48h]
  __int64 v117; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v118; // [rsp+160h] [rbp+58h] BYREF
  int *v119; // [rsp+180h] [rbp+78h]
  __int64 v120; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+190h] [rbp+88h] BYREF
  int *v122; // [rsp+1B0h] [rbp+A8h]
  __int64 v123; // [rsp+1B8h] [rbp+B0h]
  _BYTE KeyValueInformation[12]; // [rsp+1C0h] [rbp+B8h] BYREF
  int v125; // [rsp+1CCh] [rbp+C4h]
  _BYTE v126[12]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v127; // [rsp+1E4h] [rbp+DCh]
  _BYTE v128[12]; // [rsp+1F0h] [rbp+E8h] BYREF
  int v129; // [rsp+1FCh] [rbp+F4h]
  _BYTE v130[12]; // [rsp+208h] [rbp+100h] BYREF
  int v131; // [rsp+214h] [rbp+10Ch]
  _BYTE v132[12]; // [rsp+220h] [rbp+118h] BYREF
  int v133; // [rsp+22Ch] [rbp+124h]
  _BYTE v134[12]; // [rsp+238h] [rbp+130h] BYREF
  int v135; // [rsp+244h] [rbp+13Ch]
  _BYTE v136[12]; // [rsp+250h] [rbp+148h] BYREF
  int v137; // [rsp+25Ch] [rbp+154h]
  _BYTE v138[12]; // [rsp+268h] [rbp+160h] BYREF
  int v139; // [rsp+274h] [rbp+16Ch]

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      24,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  v1 = -1073741637;
  if ( qword_1C02587E8 )
    v2 = qword_1C02587E8();
  else
    v2 = -1073741637;
  if ( v2 < 0 || (!qword_1C02587F0 ? (result = 3221225659LL) : (result = qword_1C02587F0()), (int)result >= 0) )
  {
    result = InitCreateSharedSection();
    if ( (int)result >= 0 )
    {
      result = InitKernelHandleTable();
      if ( (int)result >= 0 )
      {
        result = ApiSetEditionBaseDriverEntryInitialize();
        v5 = result;
        if ( (int)result >= 0 )
        {
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          ActivityId = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v113 = 1;
            v77 = PsGetCurrentThreadWin32Thread(v6);
            v112 = v77;
            if ( v77 && (*(int *)(v77 + 24) > 0 || *(_DWORD *)(v112 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v92 = v113;
                v117 = 4LL;
                v116 = &v92;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199F7,
                  &ActivityId,
                  0LL,
                  3u,
                  &v115);
              }
            }
          }
          else
          {
            v112 = 0LL;
          }
          v8 = 0LL;
          while ( 1 )
          {
            v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v9 )
              v8 = *v9;
            CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v14, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v8 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            if ( v112 )
            {
              v14 = *(unsigned int *)(v112 + 24);
              if ( *(_DWORD *)(v112 + 48) || (int)v14 > 0 )
              {
                *(_DWORD *)(v112 + 44) = 1;
                *(GUID *)(v112 + 28) = ActivityId;
                if ( (unsigned int)dword_1C024C960 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                  {
                    v93 = v113;
                    v120 = 4LL;
                    v119 = &v93;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199A0,
                      &ActivityId,
                      0LL,
                      3u,
                      &v118);
                    v78 = dword_1C024C960;
                  }
                  if ( v78 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                  {
                    v94 = v113;
                    v123 = 4LL;
                    v122 = &v94;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199CD,
                      &ActivityId,
                      0LL,
                      3u,
                      &v121);
                  }
                }
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit(v14);
          gptiCurrent = v8;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess(v15)
            || (v18 = PsGetCurrentProcess(v17, v16),
                ProcessSessionId = PsGetProcessSessionIdEx(v18),
                CurrentThreadProcess = PsGetCurrentThreadProcess(v20),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            CurrentThread = KeGetCurrentThread();
            v23 = 0LL;
            if ( !IsThreadCrossSessionAttached(v17) )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v23 = *ThreadWin32Thread;
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
            if ( v23
              && CurrentProcessWin32Process
              && (*(_DWORD *)(v23 + 480) & 0x1000000) != 0
              && (*(_DWORD *)(v23 + 1216) & 0x80u) == 0
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              v80 = DomainLockRef;
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              if ( ExIsResourceAcquiredExclusiveLite(*v80) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v80);
              v81 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v81[2];
                  v82 = *v81;
                  v81[2] = 0LL;
                  if ( !*(_DWORD *)(v82 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  v83 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v83 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  ExReleaseResourceAndLeaveCriticalRegion(*v83);
                  HMUnlockObject(*v81);
                  tagDomLock::LockExclusive(v83);
                  v81 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v0 = 0;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v80);
            }
          }
          if ( (unsigned int)InitSecurity() )
          {
            *(_DWORD *)(ExWindowStationObjectType + 108LL) = 240;
            *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
            *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
            *(struct _GENERIC_MAPPING *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
            *((_DWORD *)ExDesktopObjectType + 27) = 344;
            *((_DWORD *)ExDesktopObjectType + 26) = 0;
            *((_DWORD *)ExDesktopObjectType + 23) = 983551;
            *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
            *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
            *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
            *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
            *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
            *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
            *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 904;
            *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
            *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
            *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
            gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType, 983043LL);
            inited = InitQEntryLookaside();
            if ( qword_1C02587F8 )
              v29 = qword_1C02587F8();
            else
              v29 = -1073741637;
            if ( v29 >= 0 )
            {
              if ( qword_1C0258800 )
                v30 = qword_1C0258800();
              else
                v30 = -1073741637;
              inited |= v30;
            }
            if ( UserAtomTableHandle )
              AtomTable = 0;
            else
              AtomTable = RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
            v32 = AtomTable | inited;
            if ( UserLibmgmtAtomTableHandle )
              v33 = 0;
            else
              v33 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
            v5 = v33 | v32;
            if ( v5 < 0 )
              goto LABEL_222;
            atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1);
            gatomFirstPinned = atomUSER32;
            if ( atomUSER32 )
            {
              if ( (unsigned int)InitCreateUserSubsystem() )
              {
                if ( qword_1C0258808 )
                  v34 = qword_1C0258808();
                else
                  v34 = -1073741637;
                if ( v34 >= 0 && qword_1C0258810 )
                  qword_1C0258810();
                v35 = qword_1C02579E0 ? qword_1C02579E0() : -1073741637;
                if ( v35 < 0 || (!qword_1C02579E8 ? (v36 = -1073741637) : (v36 = qword_1C02579E8()), v36 >= 0) )
                {
                  gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1BB0uLL);
                  if ( gpsi )
                  {
                    v37 = 2;
                    v38 = 2524LL;
                    do
                    {
                      v39 = 0;
                      v40 = v38;
                      do
                      {
                        ++v39;
                        *(_DWORD *)((char *)gpsi + v40) = -1;
                        v40 += 4LL;
                      }
                      while ( v39 < 0x1E );
                      ++v37;
                      v38 += 120LL;
                    }
                    while ( v37 < 0x12 );
                    v41 = gpsi;
                    *((_DWORD *)gpsi + 1282) = 8;
                    v41[1283] = 16;
                    gpDispInfo = (__int64)Win32AllocPoolZInit(0xA8uLL, 0x70646B55u);
                    if ( gpDispInfo )
                    {
                      *(_QWORD *)gpDispInfo = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
                      if ( *(_QWORD *)gpDispInfo )
                      {
                        if ( (unsigned int)IsDesktopHeapLoggingOn() )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 0x100u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFEFF);
                        if ( (_BYTE)NlsMbCodePageTag )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 2u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFD);
                        if ( (unsigned int)IsIMMEnabledSystem() )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 4u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFB);
                        if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 8u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFF7);
                        *((_DWORD *)gpsi + 231) = gdwDesktopSectionSize << 10;
                        v44 = Win32AllocPoolZInit(0x100uLL, 0x646B7355u);
                        gpkdiStatic = (__int64)v44;
                        if ( v44 )
                        {
                          v27 = &diStatic;
                          *v44 = &diStatic;
                          if ( qword_1C0258818 )
                            v45 = qword_1C0258818();
                          else
                            v45 = -1073741637;
                          if ( v45 >= 0 && qword_1C0258820 )
                            qword_1C0258820();
                          if ( qword_1C0258828 )
                            v46 = qword_1C0258828();
                          else
                            v46 = -1073741637;
                          if ( v46 >= 0 && qword_1C0258830 )
                            qword_1C0258830();
                          if ( qword_1C0258838 )
                            v47 = qword_1C0258838();
                          else
                            v47 = -1073741637;
                          if ( v47 >= 0 && qword_1C0258840 )
                            qword_1C0258840();
                          v48 = qword_1C0258848 ? qword_1C0258848() : -1073741637;
                          if ( v48 < 0 || (!qword_1C0258850 ? (v49 = 0) : (v49 = qword_1C0258850()), v49) )
                          {
                            v50 = qword_1C0258858 ? qword_1C0258858() : -1073741637;
                            if ( v50 < 0 || (!qword_1C0258860 ? (v51 = 0) : (v51 = qword_1C0258860()), v51) )
                            {
                              if ( (unsigned int)HMInitHandleTable() )
                              {
                                gSharedInfo = (__int64)gpsi;
                                ResultLength = 0;
                                DestinationString = 0LL;
                                qword_1C0250D58 = *(_QWORD *)gpDispInfo;
                                v84 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v52 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v84);
                                  if ( !v52 )
                                    break;
                                  RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                                  if ( ZwQueryValueKey(
                                         v52,
                                         &DestinationString,
                                         KeyValuePartialInformation,
                                         KeyValueInformation,
                                         0x14u,
                                         &ResultLength) < 0 )
                                  {
                                    if ( !v84 )
                                      v0 = 10000;
                                  }
                                  else
                                  {
                                    v0 = v125;
                                    v84 = 0;
                                  }
                                  ZwClose(v52);
                                  if ( !v84 )
                                    goto LABEL_113;
                                }
                                v0 = 10000;
LABEL_113:
                                ValueName = 0LL;
                                gUserProcessHandleQuota = v0;
                                v96 = 0;
                                v85 = gdwPolicyFlags;
                                do
                                {
                                  v53 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v85);
                                  if ( !v53 )
                                  {
                                    v0 = 10000;
                                    goto LABEL_119;
                                  }
                                  RtlInitUnicodeString(&ValueName, L"USERPostMessageLimit");
                                  if ( ZwQueryValueKey(v53, &ValueName, KeyValuePartialInformation, v126, 0x14u, &v96) < 0 )
                                  {
                                    if ( !v85 )
                                      v0 = 10000;
                                  }
                                  else
                                  {
                                    v0 = v127;
                                    v85 = 0;
                                  }
                                  ZwClose(v53);
                                }
                                while ( v85 );
                                if ( v0 )
                                {
LABEL_119:
                                  v54 = v0;
                                  goto LABEL_120;
                                }
                                v54 = -1;
LABEL_120:
                                v55 = gNestedWindowLimit;
                                gUserPostMessageLimit = v54;
                                v106 = 0LL;
                                v86 = gdwPolicyFlags;
                                v97 = 0;
                                while ( 1 )
                                {
                                  v56 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v86);
                                  if ( !v56 )
                                    break;
                                  RtlInitUnicodeString(&v106, L"USERNestedWindowLimit");
                                  if ( ZwQueryValueKey(v56, &v106, KeyValuePartialInformation, v128, 0x14u, &v97) < 0 )
                                  {
                                    if ( !v86 )
                                      v0 = v55;
                                  }
                                  else
                                  {
                                    v0 = v129;
                                    v86 = 0;
                                  }
                                  ZwClose(v56);
                                  if ( !v86 )
                                    goto LABEL_134;
                                }
                                v0 = v55;
LABEL_134:
                                if ( (unsigned int)(v0 - 50) <= 0x32 )
                                  gNestedWindowLimit = v0;
                                if ( qword_1C0258948 )
                                  v57 = qword_1C0258948();
                                else
                                  v57 = -1073741637;
                                if ( v57 >= 0 )
                                {
                                  v58 = 0LL;
                                  v103 = 0LL;
                                  if ( qword_1C0258950 )
                                  {
                                    qword_1C0258950(&v103);
                                    v58 = v103;
                                  }
                                  v59 = *v58;
                                  v107 = 0LL;
                                  v98 = 0;
                                  v87 = gdwPolicyFlags;
                                  while ( 1 )
                                  {
                                    v60 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v87);
                                    if ( !v60 )
                                      break;
                                    RtlInitUnicodeString(&v107, L"USERKCCTimeout");
                                    if ( ZwQueryValueKey(v60, &v107, KeyValuePartialInformation, v130, 0x14u, &v98) >= 0 )
                                    {
                                      *v58 = v131;
                                      v87 = 0;
                                    }
                                    else if ( !v87 )
                                    {
                                      *v58 = v59;
                                    }
                                    ZwClose(v60);
                                    if ( !v87 )
                                      goto LABEL_150;
                                  }
                                  *v58 = v59;
                                }
LABEL_150:
                                v61 = gpsi;
                                v108 = 0LL;
                                v99 = 0;
                                v88 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v62 = OpenCacheKeyEx(0LL, 40LL, 0x20019u, &v88);
                                  if ( !v62 )
                                    break;
                                  RtlInitUnicodeString(&v108, L"Installed");
                                  if ( ZwQueryValueKey(v62, &v108, KeyValuePartialInformation, v132, 0x14u, &v99) >= 0 )
                                  {
                                    v61[560] = v133;
                                    v88 = 0;
                                  }
                                  else if ( !v88 )
                                  {
                                    v61[560] = 0;
                                  }
                                  ZwClose(v62);
                                  if ( !v88 )
                                    goto LABEL_159;
                                }
                                v61[560] = 0;
LABEL_159:
                                v63 = gpsi;
                                v109 = 0LL;
                                v100 = 0;
                                v89 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v64 = OpenCacheKeyEx(0LL, 41LL, 0x20019u, &v89);
                                  if ( !v64 )
                                    break;
                                  RtlInitUnicodeString(&v109, L"Installed");
                                  if ( ZwQueryValueKey(v64, &v109, KeyValuePartialInformation, v134, 0x14u, &v100) >= 0 )
                                  {
                                    v63[561] = v135;
                                    v89 = 0;
                                  }
                                  else if ( !v89 )
                                  {
                                    v63[561] = 0;
                                  }
                                  ZwClose(v64);
                                  if ( !v89 )
                                    goto LABEL_168;
                                }
                                v63[561] = 0;
LABEL_168:
                                v65 = gpsi;
                                v110 = 0LL;
                                v101 = 0;
                                v90 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v66 = OpenCacheKeyEx(0LL, 45LL, 0x20019u, &v90);
                                  if ( !v66 )
                                    break;
                                  RtlInitUnicodeString(&v110, L"R2BuildNumber");
                                  if ( ZwQueryValueKey(v66, &v110, KeyValuePartialInformation, v136, 0x14u, &v101) >= 0 )
                                  {
                                    v65[563] = v137;
                                    v90 = 0;
                                  }
                                  else if ( !v90 )
                                  {
                                    v65[563] = 0;
                                  }
                                  ZwClose(v66);
                                  if ( !v90 )
                                    goto LABEL_177;
                                }
                                v65[563] = 0;
LABEL_177:
                                v67 = gpsi;
                                v111 = 0LL;
                                v102 = 0;
                                v91 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v68 = OpenCacheKeyEx(0LL, 46LL, 0x20019u, &v91);
                                  if ( !v68 )
                                    break;
                                  RtlInitUnicodeString(&v111, L"StarterBuildNumber");
                                  if ( ZwQueryValueKey(v68, &v111, KeyValuePartialInformation, v138, 0x14u, &v102) >= 0 )
                                  {
                                    v67[562] = v139;
                                    v91 = 0;
                                  }
                                  else if ( !v91 )
                                  {
                                    v67[562] = 0;
                                  }
                                  ZwClose(v68);
                                  if ( !v91 )
                                    goto LABEL_186;
                                }
                                v67[562] = 0;
LABEL_186:
                                Initialize();
                                if ( UIPrivelegeIsolation::fEnforce )
                                {
                                  if ( qword_1C0258868 )
                                    v69 = qword_1C0258868();
                                  else
                                    v69 = -1073741637;
                                  if ( v69 >= 0 && qword_1C0258870 )
                                    qword_1C0258870();
                                  if ( qword_1C0258878 )
                                    v70 = qword_1C0258878();
                                  else
                                    v70 = -1073741637;
                                  if ( v70 >= 0 && qword_1C0258880 )
                                    qword_1C0258880();
                                }
                                gdwMDAQThreshold = 5000;
                                gdwMDAQTimeoutDefenseInDepth = 30000;
                                *((_DWORD *)gpsi + 559) &= ~0x20u;
                                if ( qword_1C0258888 )
                                  v71 = qword_1C0258888();
                                else
                                  v71 = -1073741637;
                                if ( v71 >= 0 && qword_1C0258890 )
                                  qword_1C0258890();
                                if ( qword_1C0258898 )
                                  v72 = qword_1C0258898();
                                else
                                  v72 = -1073741637;
                                if ( v72 >= 0 && qword_1C02588A0 )
                                  qword_1C02588A0();
                                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x44535042u);
                                v74 = PoolWithTag;
                                if ( PoolWithTag )
                                {
                                  *PoolWithTag = 0LL;
                                  *((_BYTE *)PoolWithTag + 8) = 0;
                                  PoolWithTag[2] = -50000000LL;
                                  DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)PoolWithTag);
                                }
                                else
                                {
                                  v74 = 0LL;
                                }
                                DispBroker::DispBrokerClient::s_pSessionBroker = v74;
                                if ( !v74 )
                                {
                                  v5 = -1073741801;
LABEL_222:
                                  UserSessionSwitchLeaveCrit((__int64)v27);
                                  return (unsigned int)v5;
                                }
                                v5 = 0;
                                if ( qword_1C0257C00 )
                                  v75 = qword_1C0257C00();
                                else
                                  v75 = -1073741637;
                                if ( v75 >= 0 )
                                {
                                  v5 = qword_1C0257C08 ? qword_1C0257C08() : -1073741637;
                                  if ( v5 < 0 )
                                    goto LABEL_222;
                                }
                                if ( qword_1C02588C8 )
                                  v1 = qword_1C02588C8();
                                if ( v1 < 0 )
                                  goto LABEL_222;
                                if ( qword_1C02588D0 ? qword_1C02588D0(&gSMWP, 4LL) : 0 )
                                  goto LABEL_222;
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        Win32FreePool(gpDispInfo, v42, v43);
                        gpDispInfo = 0LL;
                      }
                    }
                  }
                }
              }
            }
          }
          if ( v5 >= 0 )
            v5 = -1073741801;
          goto LABEL_222;
        }
      }
    }
  }
  return result;
}
