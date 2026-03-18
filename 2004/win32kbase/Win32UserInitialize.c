/*
 * XREFs of Win32UserInitialize @ 0x1C0293AF8
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C002B650 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C002C2BC (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     Initialize @ 0x1C002C3BC (Initialize.c)
 *     UserAddAtomToAtomTableEx @ 0x1C002F460 (UserAddAtomToAtomTableEx.c)
 *     IsIMMEnabledSystem @ 0x1C002F7E0 (IsIMMEnabledSystem.c)
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C002F80C (ApiSetEditionBaseDriverEntryInitialize.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     OpenCacheKeyEx @ 0x1C007AF00 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitQEntryLookaside @ 0x1C02931B0 (InitQEntryLookaside.c)
 *     InitCreateSharedSection @ 0x1C0293218 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C0293370 (InitKernelHandleTable.c)
 *     HMInitHandleTable @ 0x1C0294A94 (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C0294B40 (InitCreateUserSubsystem.c)
 *     InitSecurity @ 0x1C0294E04 (InitSecurity.c)
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
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  void *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int inited; // esi
  int v35; // eax
  int v36; // eax
  int AtomTable; // eax
  int v38; // esi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rcx
  unsigned int v45; // r8d
  __int64 v46; // r9
  _DWORD *v47; // rax
  _QWORD *v48; // rax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  void *v56; // rbx
  void *v57; // rbx
  int v58; // eax
  int v59; // edi
  void *v60; // rbx
  int v61; // eax
  int *v62; // rbx
  int v63; // esi
  void *v64; // rdi
  _DWORD *v65; // rbx
  void *v66; // rdi
  _DWORD *v67; // rbx
  void *v68; // rdi
  _DWORD *v69; // rbx
  void *v70; // rdi
  _DWORD *v71; // rbx
  void *v72; // rdi
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  _QWORD *PoolWithTag; // rax
  void *v78; // rbx
  int v79; // eax
  __int64 v81; // rax
  unsigned int v82; // r8d
  PERESOURCE *DomainLockRef; // rax
  PERESOURCE *v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 *v88; // r12
  __int64 v89; // rax
  PERESOURCE *v90; // rdi
  int v91; // [rsp+38h] [rbp-D0h] BYREF
  int v92; // [rsp+3Ch] [rbp-CCh] BYREF
  int v93; // [rsp+40h] [rbp-C8h] BYREF
  int v94; // [rsp+44h] [rbp-C4h] BYREF
  int v95; // [rsp+48h] [rbp-C0h] BYREF
  int v96; // [rsp+4Ch] [rbp-BCh] BYREF
  int v97; // [rsp+50h] [rbp-B8h] BYREF
  int v98; // [rsp+54h] [rbp-B4h] BYREF
  int v99; // [rsp+58h] [rbp-B0h] BYREF
  int v100; // [rsp+5Ch] [rbp-ACh] BYREF
  int v101; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v103; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG v104; // [rsp+70h] [rbp-98h] BYREF
  ULONG v105; // [rsp+74h] [rbp-94h] BYREF
  ULONG v106; // [rsp+78h] [rbp-90h] BYREF
  ULONG v107; // [rsp+7Ch] [rbp-8Ch] BYREF
  ULONG v108; // [rsp+80h] [rbp-88h] BYREF
  ULONG v109; // [rsp+84h] [rbp-84h] BYREF
  int *v110; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v113; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING v114; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v115; // [rsp+D0h] [rbp-38h] BYREF
  struct _UNICODE_STRING v116; // [rsp+E0h] [rbp-28h] BYREF
  struct _UNICODE_STRING v117; // [rsp+F0h] [rbp-18h] BYREF
  struct _UNICODE_STRING v118; // [rsp+100h] [rbp-8h] BYREF
  __int64 v119; // [rsp+110h] [rbp+8h]
  unsigned __int8 v120; // [rsp+118h] [rbp+10h]
  GUID ActivityId; // [rsp+11Ch] [rbp+14h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+130h] [rbp+28h] BYREF
  int *v123; // [rsp+150h] [rbp+48h]
  __int64 v124; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+160h] [rbp+58h] BYREF
  int *v126; // [rsp+180h] [rbp+78h]
  __int64 v127; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+190h] [rbp+88h] BYREF
  int *v129; // [rsp+1B0h] [rbp+A8h]
  __int64 v130; // [rsp+1B8h] [rbp+B0h]
  _BYTE KeyValueInformation[12]; // [rsp+1C0h] [rbp+B8h] BYREF
  int v132; // [rsp+1CCh] [rbp+C4h]
  _BYTE v133[12]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v134; // [rsp+1E4h] [rbp+DCh]
  _BYTE v135[12]; // [rsp+1F0h] [rbp+E8h] BYREF
  int v136; // [rsp+1FCh] [rbp+F4h]
  _BYTE v137[12]; // [rsp+208h] [rbp+100h] BYREF
  int v138; // [rsp+214h] [rbp+10Ch]
  _BYTE v139[12]; // [rsp+220h] [rbp+118h] BYREF
  int v140; // [rsp+22Ch] [rbp+124h]
  _BYTE v141[12]; // [rsp+238h] [rbp+130h] BYREF
  int v142; // [rsp+244h] [rbp+13Ch]
  _BYTE v143[12]; // [rsp+250h] [rbp+148h] BYREF
  int v144; // [rsp+25Ch] [rbp+154h]
  _BYTE v145[12]; // [rsp+268h] [rbp+160h] BYREF
  int v146; // [rsp+274h] [rbp+16Ch]

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      24,
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
  v1 = -1073741637;
  if ( qword_1C0252828 )
    v2 = qword_1C0252828();
  else
    v2 = -1073741637;
  if ( v2 < 0 || (!qword_1C0252830 ? (result = 3221225659LL) : (result = qword_1C0252830()), (int)result >= 0) )
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
            v120 = 1;
            v81 = PsGetCurrentThreadWin32Thread(v6);
            v119 = v81;
            if ( v81 && (*(int *)(v81 + 24) > 0 || *(_DWORD *)(v119 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v99 = v120;
                v124 = 4LL;
                v123 = &v99;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E87,
                  &ActivityId,
                  0LL,
                  3u,
                  &v122);
              }
            }
          }
          else
          {
            v119 = 0LL;
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
            if ( v119 )
            {
              v14 = *(unsigned int *)(v119 + 24);
              if ( *(_DWORD *)(v119 + 48) || (int)v14 > 0 )
              {
                *(_DWORD *)(v119 + 44) = 1;
                *(GUID *)(v119 + 28) = ActivityId;
                if ( (unsigned int)dword_1C0246A70 > 6 )
                {
                  if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                  {
                    v100 = v120;
                    v127 = 4LL;
                    v126 = &v100;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C0246A70,
                      (unsigned __int8 *)dword_1C0213E30,
                      &ActivityId,
                      0LL,
                      3u,
                      &v125);
                    v82 = dword_1C0246A70;
                  }
                  if ( v82 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                  {
                    v101 = v120;
                    v130 = 4LL;
                    v129 = &v101;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C0246A70,
                      (unsigned __int8 *)dword_1C0213E5D,
                      &ActivityId,
                      0LL,
                      3u,
                      &v128);
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
              && (*(_DWORD *)(v23 + 1224) & 0x80u) == 0
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v28, v29);
              v84 = DomainLockRef;
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              if ( ExIsResourceAcquiredExclusiveLite(*v84) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM();
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v84);
              v88 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v88[2];
                  v89 = *v88;
                  v88[2] = 0LL;
                  if ( !*(_DWORD *)(v89 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  v90 = (PERESOURCE *)GetDomainLockRef(12LL, v85, v86, v87);
                  if ( v90 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  ExReleaseResourceAndLeaveCriticalRegion(*v90);
                  HMUnlockObject(*v88);
                  tagDomLock::LockExclusive(v90);
                  v88 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
                v0 = 0;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v84);
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
            if ( qword_1C0252838 )
              v35 = qword_1C0252838();
            else
              v35 = -1073741637;
            if ( v35 >= 0 )
            {
              if ( qword_1C0252840 )
                v36 = qword_1C0252840();
              else
                v36 = -1073741637;
              inited |= v36;
            }
            if ( UserAtomTableHandle )
              AtomTable = 0;
            else
              AtomTable = RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
            v38 = AtomTable | inited;
            if ( UserLibmgmtAtomTableHandle )
              v39 = 0;
            else
              v39 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
            v5 = v39 | v38;
            if ( v5 < 0 )
              goto LABEL_222;
            atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1, 2LL);
            gatomFirstPinned = atomUSER32;
            if ( atomUSER32 )
            {
              if ( (unsigned int)InitCreateUserSubsystem() )
              {
                if ( qword_1C0252848 )
                  v40 = qword_1C0252848();
                else
                  v40 = -1073741637;
                if ( v40 >= 0 && qword_1C0252850 )
                  qword_1C0252850();
                v41 = qword_1C0251A20 ? qword_1C0251A20() : -1073741637;
                if ( v41 < 0 || (!qword_1C0251A28 ? (v42 = -1073741637) : (v42 = qword_1C0251A28()), v42 >= 0) )
                {
                  gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1BB0uLL);
                  if ( gpsi )
                  {
                    v43 = 2;
                    v44 = 2524LL;
                    do
                    {
                      v45 = 0;
                      v46 = v44;
                      do
                      {
                        ++v45;
                        *(_DWORD *)((char *)gpsi + v46) = -1;
                        v46 += 4LL;
                      }
                      while ( v45 < 0x1E );
                      ++v43;
                      v44 += 120LL;
                    }
                    while ( v43 < 0x12 );
                    v47 = gpsi;
                    *((_DWORD *)gpsi + 1282) = 8;
                    v47[1283] = 16;
                    gpDispInfo = (__int64)Win32AllocPoolZInit(0xA8uLL, 1885629269LL);
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
                        v48 = Win32AllocPoolZInit(0x100uLL, 1684763477LL);
                        gpkdiStatic = (__int64)v48;
                        if ( v48 )
                        {
                          v31 = &diStatic;
                          *v48 = &diStatic;
                          if ( qword_1C0252858 )
                            v49 = qword_1C0252858();
                          else
                            v49 = -1073741637;
                          if ( v49 >= 0 && qword_1C0252860 )
                            qword_1C0252860();
                          if ( qword_1C0252868 )
                            v50 = qword_1C0252868();
                          else
                            v50 = -1073741637;
                          if ( v50 >= 0 && qword_1C0252870 )
                            qword_1C0252870();
                          if ( qword_1C0252878 )
                            v51 = qword_1C0252878();
                          else
                            v51 = -1073741637;
                          if ( v51 >= 0 && qword_1C0252880 )
                            qword_1C0252880();
                          v52 = qword_1C0252888 ? qword_1C0252888() : -1073741637;
                          if ( v52 < 0 || (!qword_1C0252890 ? (v53 = 0) : (v53 = qword_1C0252890()), v53) )
                          {
                            v54 = qword_1C0252898 ? qword_1C0252898() : -1073741637;
                            if ( v54 < 0 || (!qword_1C02528A0 ? (v55 = 0) : (v55 = qword_1C02528A0()), v55) )
                            {
                              if ( (unsigned int)HMInitHandleTable() )
                              {
                                gSharedInfo = (__int64)gpsi;
                                ResultLength = 0;
                                DestinationString = 0LL;
                                qword_1C024AD58 = *(_QWORD *)gpDispInfo;
                                v91 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v56 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v91);
                                  if ( !v56 )
                                    break;
                                  RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                                  if ( ZwQueryValueKey(
                                         v56,
                                         &DestinationString,
                                         KeyValuePartialInformation,
                                         KeyValueInformation,
                                         0x14u,
                                         &ResultLength) < 0 )
                                  {
                                    if ( !v91 )
                                      v0 = 10000;
                                  }
                                  else
                                  {
                                    v0 = v132;
                                    v91 = 0;
                                  }
                                  ZwClose(v56);
                                  if ( !v91 )
                                    goto LABEL_113;
                                }
                                v0 = 10000;
LABEL_113:
                                ValueName = 0LL;
                                gUserProcessHandleQuota = v0;
                                v103 = 0;
                                v92 = gdwPolicyFlags;
                                do
                                {
                                  v57 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v92);
                                  if ( !v57 )
                                  {
                                    v0 = 10000;
                                    goto LABEL_119;
                                  }
                                  RtlInitUnicodeString(&ValueName, L"USERPostMessageLimit");
                                  if ( ZwQueryValueKey(v57, &ValueName, KeyValuePartialInformation, v133, 0x14u, &v103) < 0 )
                                  {
                                    if ( !v92 )
                                      v0 = 10000;
                                  }
                                  else
                                  {
                                    v0 = v134;
                                    v92 = 0;
                                  }
                                  ZwClose(v57);
                                }
                                while ( v92 );
                                if ( v0 )
                                {
LABEL_119:
                                  v58 = v0;
                                  goto LABEL_120;
                                }
                                v58 = -1;
LABEL_120:
                                v59 = gNestedWindowLimit;
                                gUserPostMessageLimit = v58;
                                v113 = 0LL;
                                v93 = gdwPolicyFlags;
                                v104 = 0;
                                while ( 1 )
                                {
                                  v60 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v93);
                                  if ( !v60 )
                                    break;
                                  RtlInitUnicodeString(&v113, L"USERNestedWindowLimit");
                                  if ( ZwQueryValueKey(v60, &v113, KeyValuePartialInformation, v135, 0x14u, &v104) < 0 )
                                  {
                                    if ( !v93 )
                                      v0 = v59;
                                  }
                                  else
                                  {
                                    v0 = v136;
                                    v93 = 0;
                                  }
                                  ZwClose(v60);
                                  if ( !v93 )
                                    goto LABEL_134;
                                }
                                v0 = v59;
LABEL_134:
                                if ( (unsigned int)(v0 - 50) <= 0x32 )
                                  gNestedWindowLimit = v0;
                                if ( qword_1C0252988 )
                                  v61 = qword_1C0252988();
                                else
                                  v61 = -1073741637;
                                if ( v61 >= 0 )
                                {
                                  v62 = 0LL;
                                  v110 = 0LL;
                                  if ( qword_1C0252990 )
                                  {
                                    qword_1C0252990(&v110);
                                    v62 = v110;
                                  }
                                  v63 = *v62;
                                  v114 = 0LL;
                                  v105 = 0;
                                  v94 = gdwPolicyFlags;
                                  while ( 1 )
                                  {
                                    v64 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v94);
                                    if ( !v64 )
                                      break;
                                    RtlInitUnicodeString(&v114, L"USERKCCTimeout");
                                    if ( ZwQueryValueKey(v64, &v114, KeyValuePartialInformation, v137, 0x14u, &v105) >= 0 )
                                    {
                                      *v62 = v138;
                                      v94 = 0;
                                    }
                                    else if ( !v94 )
                                    {
                                      *v62 = v63;
                                    }
                                    ZwClose(v64);
                                    if ( !v94 )
                                      goto LABEL_150;
                                  }
                                  *v62 = v63;
                                }
LABEL_150:
                                v65 = gpsi;
                                v115 = 0LL;
                                v106 = 0;
                                v95 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v66 = OpenCacheKeyEx(0LL, 40LL, 0x20019u, &v95);
                                  if ( !v66 )
                                    break;
                                  RtlInitUnicodeString(&v115, L"Installed");
                                  if ( ZwQueryValueKey(v66, &v115, KeyValuePartialInformation, v139, 0x14u, &v106) >= 0 )
                                  {
                                    v65[560] = v140;
                                    v95 = 0;
                                  }
                                  else if ( !v95 )
                                  {
                                    v65[560] = 0;
                                  }
                                  ZwClose(v66);
                                  if ( !v95 )
                                    goto LABEL_159;
                                }
                                v65[560] = 0;
LABEL_159:
                                v67 = gpsi;
                                v116 = 0LL;
                                v107 = 0;
                                v96 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v68 = OpenCacheKeyEx(0LL, 41LL, 0x20019u, &v96);
                                  if ( !v68 )
                                    break;
                                  RtlInitUnicodeString(&v116, L"Installed");
                                  if ( ZwQueryValueKey(v68, &v116, KeyValuePartialInformation, v141, 0x14u, &v107) >= 0 )
                                  {
                                    v67[561] = v142;
                                    v96 = 0;
                                  }
                                  else if ( !v96 )
                                  {
                                    v67[561] = 0;
                                  }
                                  ZwClose(v68);
                                  if ( !v96 )
                                    goto LABEL_168;
                                }
                                v67[561] = 0;
LABEL_168:
                                v69 = gpsi;
                                v117 = 0LL;
                                v108 = 0;
                                v97 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v70 = OpenCacheKeyEx(0LL, 45LL, 0x20019u, &v97);
                                  if ( !v70 )
                                    break;
                                  RtlInitUnicodeString(&v117, L"R2BuildNumber");
                                  if ( ZwQueryValueKey(v70, &v117, KeyValuePartialInformation, v143, 0x14u, &v108) >= 0 )
                                  {
                                    v69[563] = v144;
                                    v97 = 0;
                                  }
                                  else if ( !v97 )
                                  {
                                    v69[563] = 0;
                                  }
                                  ZwClose(v70);
                                  if ( !v97 )
                                    goto LABEL_177;
                                }
                                v69[563] = 0;
LABEL_177:
                                v71 = gpsi;
                                v118 = 0LL;
                                v109 = 0;
                                v98 = gdwPolicyFlags;
                                while ( 1 )
                                {
                                  v72 = OpenCacheKeyEx(0LL, 46LL, 0x20019u, &v98);
                                  if ( !v72 )
                                    break;
                                  RtlInitUnicodeString(&v118, L"StarterBuildNumber");
                                  if ( ZwQueryValueKey(v72, &v118, KeyValuePartialInformation, v145, 0x14u, &v109) >= 0 )
                                  {
                                    v71[562] = v146;
                                    v98 = 0;
                                  }
                                  else if ( !v98 )
                                  {
                                    v71[562] = 0;
                                  }
                                  ZwClose(v72);
                                  if ( !v98 )
                                    goto LABEL_186;
                                }
                                v71[562] = 0;
LABEL_186:
                                Initialize();
                                if ( UIPrivelegeIsolation::fEnforce )
                                {
                                  if ( qword_1C02528A8 )
                                    v73 = qword_1C02528A8();
                                  else
                                    v73 = -1073741637;
                                  if ( v73 >= 0 && qword_1C02528B0 )
                                    qword_1C02528B0();
                                  if ( qword_1C02528B8 )
                                    v74 = qword_1C02528B8();
                                  else
                                    v74 = -1073741637;
                                  if ( v74 >= 0 && qword_1C02528C0 )
                                    qword_1C02528C0();
                                }
                                gdwMDAQThreshold = 5000;
                                gdwMDAQTimeoutDefenseInDepth = 30000;
                                *((_DWORD *)gpsi + 559) &= ~0x20u;
                                if ( qword_1C02528C8 )
                                  v75 = qword_1C02528C8();
                                else
                                  v75 = -1073741637;
                                if ( v75 >= 0 && qword_1C02528D0 )
                                  qword_1C02528D0();
                                if ( qword_1C02528D8 )
                                  v76 = qword_1C02528D8();
                                else
                                  v76 = -1073741637;
                                if ( v76 >= 0 && qword_1C02528E0 )
                                  qword_1C02528E0();
                                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x44535042u);
                                v78 = PoolWithTag;
                                if ( PoolWithTag )
                                {
                                  *PoolWithTag = 0LL;
                                  *((_BYTE *)PoolWithTag + 8) = 0;
                                  PoolWithTag[2] = -50000000LL;
                                  DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)PoolWithTag);
                                }
                                else
                                {
                                  v78 = 0LL;
                                }
                                DispBroker::DispBrokerClient::s_pSessionBroker = v78;
                                if ( !v78 )
                                {
                                  v5 = -1073741801;
LABEL_222:
                                  UserSessionSwitchLeaveCrit((__int64)v31, v30, v32, v33);
                                  return (unsigned int)v5;
                                }
                                v5 = 0;
                                if ( qword_1C0251C40 )
                                  v79 = qword_1C0251C40();
                                else
                                  v79 = -1073741637;
                                if ( v79 >= 0 )
                                {
                                  v5 = qword_1C0251C48 ? qword_1C0251C48() : -1073741637;
                                  if ( v5 < 0 )
                                    goto LABEL_222;
                                }
                                if ( qword_1C0252908 )
                                  v1 = qword_1C0252908();
                                if ( v1 < 0 )
                                  goto LABEL_222;
                                if ( qword_1C0252910 ? qword_1C0252910(&gSMWP, 4LL) : 0 )
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
