/*
 * XREFs of Win32UserInitialize @ 0x1C0291A10
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C0294600 (Win32kBaseDriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C00375B0 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     Initialize @ 0x1C008F34C (Initialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C008F4BC (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     UserAddAtomToAtomTableEx @ 0x1C008F720 (UserAddAtomToAtomTableEx.c)
 *     IsIMMEnabledSystem @ 0x1C008FAA0 (IsIMMEnabledSystem.c)
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C008FACC (ApiSetEditionBaseDriverEntryInitialize.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0095760 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateSharedSection @ 0x1C029169C (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C02917F4 (InitKernelHandleTable.c)
 *     InitQEntryLookaside @ 0x1C0291870 (InitQEntryLookaside.c)
 *     HMInitHandleTable @ 0x1C02929AC (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C0292A58 (InitCreateUserSubsystem.c)
 *     InitSecurity @ 0x1C0292D1C (InitSecurity.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  void *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int inited; // esi
  int v33; // eax
  int v34; // eax
  int AtomTable; // eax
  int v36; // esi
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // edx
  __int64 v42; // rcx
  unsigned int v43; // r8d
  __int64 v44; // r9
  _DWORD *v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  void *v54; // rbx
  void *v55; // rbx
  int v56; // eax
  int v57; // edi
  void *v58; // rbx
  int v59; // eax
  int *v60; // rbx
  int v61; // esi
  void *v62; // rdi
  _DWORD *v63; // rbx
  void *v64; // rdi
  _DWORD *v65; // rbx
  void *v66; // rdi
  _DWORD *v67; // rbx
  void *v68; // rdi
  _DWORD *v69; // rbx
  void *v70; // rdi
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  _QWORD *PoolWithTag; // rax
  void *v76; // rbx
  int v77; // eax
  __int64 v79; // rax
  unsigned int v80; // r8d
  PERESOURCE *DomainLockRef; // rax
  PERESOURCE *v82; // rbx
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 *v86; // r12
  __int64 v87; // rax
  PERESOURCE *v88; // rdi
  int v89; // [rsp+38h] [rbp-D0h] BYREF
  int v90; // [rsp+3Ch] [rbp-CCh] BYREF
  int v91; // [rsp+40h] [rbp-C8h] BYREF
  int v92; // [rsp+44h] [rbp-C4h] BYREF
  int v93; // [rsp+48h] [rbp-C0h] BYREF
  int v94; // [rsp+4Ch] [rbp-BCh] BYREF
  int v95; // [rsp+50h] [rbp-B8h] BYREF
  int v96; // [rsp+54h] [rbp-B4h] BYREF
  int v97; // [rsp+58h] [rbp-B0h] BYREF
  int v98; // [rsp+5Ch] [rbp-ACh] BYREF
  int v99; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v101; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG v102; // [rsp+70h] [rbp-98h] BYREF
  ULONG v103; // [rsp+74h] [rbp-94h] BYREF
  ULONG v104; // [rsp+78h] [rbp-90h] BYREF
  ULONG v105; // [rsp+7Ch] [rbp-8Ch] BYREF
  ULONG v106; // [rsp+80h] [rbp-88h] BYREF
  ULONG v107; // [rsp+84h] [rbp-84h] BYREF
  int *v108; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v111; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING v112; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v113; // [rsp+D0h] [rbp-38h] BYREF
  struct _UNICODE_STRING v114; // [rsp+E0h] [rbp-28h] BYREF
  struct _UNICODE_STRING v115; // [rsp+F0h] [rbp-18h] BYREF
  struct _UNICODE_STRING v116; // [rsp+100h] [rbp-8h] BYREF
  __int64 v117; // [rsp+110h] [rbp+8h]
  unsigned __int8 v118; // [rsp+118h] [rbp+10h]
  GUID ActivityId; // [rsp+11Ch] [rbp+14h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v120; // [rsp+130h] [rbp+28h] BYREF
  int *v121; // [rsp+150h] [rbp+48h]
  __int64 v122; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v123; // [rsp+160h] [rbp+58h] BYREF
  int *v124; // [rsp+180h] [rbp+78h]
  __int64 v125; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+190h] [rbp+88h] BYREF
  int *v127; // [rsp+1B0h] [rbp+A8h]
  __int64 v128; // [rsp+1B8h] [rbp+B0h]
  _BYTE KeyValueInformation[12]; // [rsp+1C0h] [rbp+B8h] BYREF
  int v130; // [rsp+1CCh] [rbp+C4h]
  _BYTE v131[12]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v132; // [rsp+1E4h] [rbp+DCh]
  _BYTE v133[12]; // [rsp+1F0h] [rbp+E8h] BYREF
  int v134; // [rsp+1FCh] [rbp+F4h]
  _BYTE v135[12]; // [rsp+208h] [rbp+100h] BYREF
  int v136; // [rsp+214h] [rbp+10Ch]
  _BYTE v137[12]; // [rsp+220h] [rbp+118h] BYREF
  int v138; // [rsp+22Ch] [rbp+124h]
  _BYTE v139[12]; // [rsp+238h] [rbp+130h] BYREF
  int v140; // [rsp+244h] [rbp+13Ch]
  _BYTE v141[12]; // [rsp+250h] [rbp+148h] BYREF
  int v142; // [rsp+25Ch] [rbp+154h]
  _BYTE v143[12]; // [rsp+268h] [rbp+160h] BYREF
  int v144; // [rsp+274h] [rbp+16Ch]

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      24,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  v1 = -1073741637;
  if ( qword_1C0250828 )
    v2 = qword_1C0250828();
  else
    v2 = -1073741637;
  if ( v2 < 0 || (!qword_1C0250830 ? (result = 3221225659LL) : (result = qword_1C0250830()), (int)result >= 0) )
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
            v118 = 1;
            v79 = PsGetCurrentThreadWin32Thread(v6);
            v117 = v79;
            if ( v79 && (*(int *)(v79 + 24) > 0 || *(_DWORD *)(v117 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
              {
                v97 = v118;
                v122 = 4LL;
                v121 = &v97;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0244A70,
                  (unsigned __int8 *)dword_1C0211E87,
                  &ActivityId,
                  0LL,
                  3u,
                  &v120);
              }
            }
          }
          else
          {
            v117 = 0LL;
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
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v117
            && (*(_DWORD *)(v117 + 48) || *(int *)(v117 + 24) > 0) )
          {
            *(_DWORD *)(v117 + 44) = 1;
            *(GUID *)(v117 + 28) = ActivityId;
            if ( (unsigned int)dword_1C0244A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
              {
                v98 = v118;
                v125 = 4LL;
                v124 = &v98;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0244A70,
                  (unsigned __int8 *)dword_1C0211E30,
                  &ActivityId,
                  0LL,
                  3u,
                  &v123);
                v80 = dword_1C0244A70;
              }
              if ( v80 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
              {
                v99 = v118;
                v128 = 4LL;
                v127 = &v99;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0244A70,
                  (unsigned __int8 *)dword_1C0211E5D,
                  &ActivityId,
                  0LL,
                  3u,
                  &v126);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v8;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v17 = PsGetCurrentProcess(v16, v15),
                ProcessSessionId = PsGetProcessSessionIdEx(v17),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            CurrentThread = KeGetCurrentThread();
            v21 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v21 = *ThreadWin32Thread;
            }
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22);
            if ( v21
              && CurrentProcessWin32Process
              && (*(_DWORD *)(v21 + 488) & 0x1000000) != 0
              && (*(_DWORD *)(v21 + 1232) & 0x80u) == 0
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v26, v27);
              v82 = DomainLockRef;
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              if ( ExIsResourceAcquiredExclusiveLite(*v82) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v82);
              v86 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v86[2];
                  v87 = *v86;
                  v86[2] = 0LL;
                  if ( !*(_DWORD *)(v87 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  v88 = (PERESOURCE *)GetDomainLockRef(12LL, v83, v84, v85);
                  if ( v88 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  ExReleaseResourceAndLeaveCriticalRegion(*v88);
                  HMUnlockObject(*v86);
                  tagDomLock::LockExclusive(v88);
                  v86 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v0 = 0;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v82);
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
            if ( qword_1C0250838 )
              v33 = qword_1C0250838();
            else
              v33 = -1073741637;
            if ( v33 >= 0 )
            {
              if ( qword_1C0250840 )
                v34 = qword_1C0250840();
              else
                v34 = -1073741637;
              inited |= v34;
            }
            if ( UserAtomTableHandle )
              AtomTable = 0;
            else
              AtomTable = RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
            v36 = AtomTable | inited;
            if ( UserLibmgmtAtomTableHandle )
              v37 = 0;
            else
              v37 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
            v5 = v37 | v36;
            if ( v5 < 0 )
              goto LABEL_222;
            atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1);
            gatomFirstPinned = atomUSER32;
            if ( atomUSER32 )
            {
              if ( (unsigned int)InitCreateUserSubsystem() )
              {
                if ( qword_1C0250848 )
                  v38 = qword_1C0250848();
                else
                  v38 = -1073741637;
                if ( v38 >= 0 && qword_1C0250850 )
                  qword_1C0250850();
                v39 = qword_1C024FA20 ? qword_1C024FA20() : -1073741637;
                if ( v39 < 0 || (!qword_1C024FA28 ? (v40 = -1073741637) : (v40 = qword_1C024FA28()), v40 >= 0) )
                {
                  gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1BB0uLL);
                  if ( gpsi )
                  {
                    v41 = 2;
                    v42 = 2524LL;
                    do
                    {
                      v43 = 0;
                      v44 = v42;
                      do
                      {
                        ++v43;
                        *(_DWORD *)((char *)gpsi + v44) = -1;
                        v44 += 4LL;
                      }
                      while ( v43 < 0x1E );
                      ++v41;
                      v42 += 120LL;
                    }
                    while ( v41 < 0x12 );
                    v45 = gpsi;
                    *((_DWORD *)gpsi + 1282) = 8;
                    v45[1283] = 16;
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
                        v46 = Win32AllocPoolZInit(0x100uLL, 0x646B7355u);
                        gpkdiStatic = (__int64)v46;
                        if ( v46 )
                        {
                          v29 = &diStatic;
                          *v46 = &diStatic;
                          if ( qword_1C0250858 )
                            v47 = qword_1C0250858();
                          else
                            v47 = -1073741637;
                          if ( v47 >= 0 && qword_1C0250860 )
                            qword_1C0250860();
                          if ( qword_1C0250868 )
                            v48 = qword_1C0250868();
                          else
                            v48 = -1073741637;
                          if ( v48 >= 0 && qword_1C0250870 )
                            qword_1C0250870();
                          if ( qword_1C0250878 )
                            v49 = qword_1C0250878();
                          else
                            v49 = -1073741637;
                          if ( v49 >= 0 && qword_1C0250880 )
                            qword_1C0250880();
                          v50 = qword_1C0250888 ? qword_1C0250888() : -1073741637;
                          if ( v50 < 0 || (!qword_1C0250890 ? (v51 = 0) : (v51 = qword_1C0250890()), v51) )
                          {
                            v52 = qword_1C0250898 ? qword_1C0250898() : -1073741637;
                            if ( v52 < 0 || (!qword_1C02508A0 ? (v53 = 0) : (v53 = qword_1C02508A0()), v53) )
                            {
                              if ( (unsigned int)HMInitHandleTable() )
                              {
                                gSharedInfo = (__int64)gpsi;
                                ResultLength = 0;
                                DestinationString = 0LL;
                                qword_1C0248D58 = *(_QWORD *)gpDispInfo;
                                v89 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v54 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v89);
                                  if ( !v54 )
                                    break;
                                  RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                                  if ( ZwQueryValueKey(
                                         v54,
                                         &DestinationString,
                                         KeyValuePartialInformation,
                                         KeyValueInformation,
                                         0x14u,
                                         &ResultLength) < 0 )
                                  {
                                    if ( !v89 )
                                      v0 = 10000;
                                  }
                                  else
                                  {
                                    v0 = v130;
                                    v89 = 0;
                                  }
                                  ZwClose(v54);
                                  if ( !v89 )
                                    goto LABEL_113;
                                }
                                v0 = 10000;
LABEL_113:
                                ValueName = 0LL;
                                gUserProcessHandleQuota = v0;
                                v101 = 0;
                                v90 = gdwPolicyFlags;
                                do
                                {
                                  v55 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v90);
                                  if ( !v55 )
                                  {
                                    v0 = 10000;
                                    goto LABEL_119;
                                  }
                                  RtlInitUnicodeString(&ValueName, L"USERPostMessageLimit");
                                  if ( ZwQueryValueKey(v55, &ValueName, KeyValuePartialInformation, v131, 0x14u, &v101) < 0 )
                                  {
                                    if ( !v90 )
                                      v0 = 10000;
                                  }
                                  else
                                  {
                                    v0 = v132;
                                    v90 = 0;
                                  }
                                  ZwClose(v55);
                                }
                                while ( v90 );
                                if ( v0 )
                                {
LABEL_119:
                                  v56 = v0;
                                  goto LABEL_120;
                                }
                                v56 = -1;
LABEL_120:
                                v57 = gNestedWindowLimit;
                                gUserPostMessageLimit = v56;
                                v111 = 0LL;
                                v91 = gdwPolicyFlags;
                                v102 = 0;
                                while ( 1 )
                                {
                                  v58 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v91);
                                  if ( !v58 )
                                    break;
                                  RtlInitUnicodeString(&v111, L"USERNestedWindowLimit");
                                  if ( ZwQueryValueKey(v58, &v111, KeyValuePartialInformation, v133, 0x14u, &v102) < 0 )
                                  {
                                    if ( !v91 )
                                      v0 = v57;
                                  }
                                  else
                                  {
                                    v0 = v134;
                                    v91 = 0;
                                  }
                                  ZwClose(v58);
                                  if ( !v91 )
                                    goto LABEL_134;
                                }
                                v0 = v57;
LABEL_134:
                                if ( (unsigned int)(v0 - 50) <= 0x32 )
                                  gNestedWindowLimit = v0;
                                if ( qword_1C0250988 )
                                  v59 = qword_1C0250988();
                                else
                                  v59 = -1073741637;
                                if ( v59 >= 0 )
                                {
                                  v60 = 0LL;
                                  v108 = 0LL;
                                  if ( qword_1C0250990 )
                                  {
                                    qword_1C0250990(&v108);
                                    v60 = v108;
                                  }
                                  v61 = *v60;
                                  v112 = 0LL;
                                  v103 = 0;
                                  v92 = gdwPolicyFlags;
                                  while ( 1 )
                                  {
                                    v62 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v92);
                                    if ( !v62 )
                                      break;
                                    RtlInitUnicodeString(&v112, L"USERKCCTimeout");
                                    if ( ZwQueryValueKey(v62, &v112, KeyValuePartialInformation, v135, 0x14u, &v103) >= 0 )
                                    {
                                      *v60 = v136;
                                      v92 = 0;
                                    }
                                    else if ( !v92 )
                                    {
                                      *v60 = v61;
                                    }
                                    ZwClose(v62);
                                    if ( !v92 )
                                      goto LABEL_150;
                                  }
                                  *v60 = v61;
                                }
LABEL_150:
                                v63 = gpsi;
                                v113 = 0LL;
                                v104 = 0;
                                v93 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v64 = OpenCacheKeyEx(0LL, 40LL, 0x20019u, &v93);
                                  if ( !v64 )
                                    break;
                                  RtlInitUnicodeString(&v113, L"Installed");
                                  if ( ZwQueryValueKey(v64, &v113, KeyValuePartialInformation, v137, 0x14u, &v104) >= 0 )
                                  {
                                    v63[560] = v138;
                                    v93 = 0;
                                  }
                                  else if ( !v93 )
                                  {
                                    v63[560] = 0;
                                  }
                                  ZwClose(v64);
                                  if ( !v93 )
                                    goto LABEL_159;
                                }
                                v63[560] = 0;
LABEL_159:
                                v65 = gpsi;
                                v114 = 0LL;
                                v105 = 0;
                                v94 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v66 = OpenCacheKeyEx(0LL, 41LL, 0x20019u, &v94);
                                  if ( !v66 )
                                    break;
                                  RtlInitUnicodeString(&v114, L"Installed");
                                  if ( ZwQueryValueKey(v66, &v114, KeyValuePartialInformation, v139, 0x14u, &v105) >= 0 )
                                  {
                                    v65[561] = v140;
                                    v94 = 0;
                                  }
                                  else if ( !v94 )
                                  {
                                    v65[561] = 0;
                                  }
                                  ZwClose(v66);
                                  if ( !v94 )
                                    goto LABEL_168;
                                }
                                v65[561] = 0;
LABEL_168:
                                v67 = gpsi;
                                v115 = 0LL;
                                v106 = 0;
                                v95 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v68 = OpenCacheKeyEx(0LL, 45LL, 0x20019u, &v95);
                                  if ( !v68 )
                                    break;
                                  RtlInitUnicodeString(&v115, L"R2BuildNumber");
                                  if ( ZwQueryValueKey(v68, &v115, KeyValuePartialInformation, v141, 0x14u, &v106) >= 0 )
                                  {
                                    v67[563] = v142;
                                    v95 = 0;
                                  }
                                  else if ( !v95 )
                                  {
                                    v67[563] = 0;
                                  }
                                  ZwClose(v68);
                                  if ( !v95 )
                                    goto LABEL_177;
                                }
                                v67[563] = 0;
LABEL_177:
                                v69 = gpsi;
                                v116 = 0LL;
                                v107 = 0;
                                v96 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v70 = OpenCacheKeyEx(0LL, 46LL, 0x20019u, &v96);
                                  if ( !v70 )
                                    break;
                                  RtlInitUnicodeString(&v116, L"StarterBuildNumber");
                                  if ( ZwQueryValueKey(v70, &v116, KeyValuePartialInformation, v143, 0x14u, &v107) >= 0 )
                                  {
                                    v69[562] = v144;
                                    v96 = 0;
                                  }
                                  else if ( !v96 )
                                  {
                                    v69[562] = 0;
                                  }
                                  ZwClose(v70);
                                  if ( !v96 )
                                    goto LABEL_186;
                                }
                                v69[562] = 0;
LABEL_186:
                                Initialize();
                                if ( UIPrivelegeIsolation::fEnforce )
                                {
                                  if ( qword_1C02508A8 )
                                    v71 = qword_1C02508A8();
                                  else
                                    v71 = -1073741637;
                                  if ( v71 >= 0 && qword_1C02508B0 )
                                    qword_1C02508B0();
                                  if ( qword_1C02508B8 )
                                    v72 = qword_1C02508B8();
                                  else
                                    v72 = -1073741637;
                                  if ( v72 >= 0 && qword_1C02508C0 )
                                    qword_1C02508C0();
                                }
                                gdwMDAQThreshold = 5000;
                                gdwMDAQTimeoutDefenseInDepth = 30000;
                                *((_DWORD *)gpsi + 559) &= ~0x20u;
                                if ( qword_1C02508C8 )
                                  v73 = qword_1C02508C8();
                                else
                                  v73 = -1073741637;
                                if ( v73 >= 0 && qword_1C02508D0 )
                                  qword_1C02508D0();
                                if ( qword_1C02508D8 )
                                  v74 = qword_1C02508D8();
                                else
                                  v74 = -1073741637;
                                if ( v74 >= 0 && qword_1C02508E0 )
                                  qword_1C02508E0();
                                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x44535042u);
                                v76 = PoolWithTag;
                                if ( PoolWithTag )
                                {
                                  *PoolWithTag = 0LL;
                                  *((_BYTE *)PoolWithTag + 8) = 0;
                                  PoolWithTag[2] = -50000000LL;
                                  DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)PoolWithTag);
                                }
                                else
                                {
                                  v76 = 0LL;
                                }
                                DispBroker::DispBrokerClient::s_pSessionBroker = v76;
                                if ( !v76 )
                                {
                                  v5 = -1073741801;
LABEL_222:
                                  UserSessionSwitchLeaveCrit((__int64)v29, v28, v30, v31);
                                  return (unsigned int)v5;
                                }
                                v5 = 0;
                                if ( qword_1C024FC40 )
                                  v77 = qword_1C024FC40();
                                else
                                  v77 = -1073741637;
                                if ( v77 >= 0 )
                                {
                                  v5 = qword_1C024FC48 ? qword_1C024FC48() : -1073741637;
                                  if ( v5 < 0 )
                                    goto LABEL_222;
                                }
                                if ( qword_1C0250908 )
                                  v1 = qword_1C0250908();
                                if ( v1 < 0 )
                                  goto LABEL_222;
                                if ( qword_1C0250910 ? qword_1C0250910(&gSMWP, 4LL) : 0 )
                                  goto LABEL_222;
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        Win32FreePool(gpDispInfo);
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
