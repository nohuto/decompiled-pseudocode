/*
 * XREFs of VideoPortCallout @ 0x1C0121020
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x1C0122370 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C002C530 (CreateKernelEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C011F6E8 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CSTRemove @ 0x1C0123EB0 (CSTRemove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rcx
  int v3; // r14d
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r8d
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
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 *i; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // rcx
  LARGE_INTEGER *v56; // rbx
  __int64 v57; // rax
  struct tagTHREADINFO *v58; // rbx
  struct tagTHREADINFO **v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  PVOID v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned int v65; // r8d
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  int v70; // ebx
  __int64 v71; // rcx
  __int64 v72; // rax
  struct _KTHREAD *v73; // rdi
  __int64 v74; // rbx
  __int64 v75; // rcx
  __int64 *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  PERESOURCE *v83; // rbx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 *v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  PERESOURCE *v98; // rdi
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // [rsp+48h] [rbp-C0h] BYREF
  int v106; // [rsp+4Ch] [rbp-BCh] BYREF
  int v107; // [rsp+50h] [rbp-B8h] BYREF
  int v108; // [rsp+54h] [rbp-B4h] BYREF
  int v109; // [rsp+58h] [rbp-B0h] BYREF
  int v110; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v111; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v112; // [rsp+68h] [rbp-A0h] BYREF
  PVOID KernelEvent; // [rsp+70h] [rbp-98h]
  __int64 v114; // [rsp+78h] [rbp-90h]
  PVOID Object[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v116; // [rsp+90h] [rbp-78h]
  unsigned __int8 v117; // [rsp+98h] [rbp-70h]
  GUID ActivityId; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v119; // [rsp+B0h] [rbp-58h]
  unsigned __int8 v120; // [rsp+B8h] [rbp-50h]
  GUID v121; // [rsp+BCh] [rbp-4Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v122; // [rsp+D0h] [rbp-38h] BYREF
  int *v123; // [rsp+F0h] [rbp-18h]
  __int64 v124; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v125; // [rsp+100h] [rbp-8h] BYREF
  int *v126; // [rsp+120h] [rbp+18h]
  __int64 v127; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+130h] [rbp+28h] BYREF
  int *v129; // [rsp+150h] [rbp+48h]
  __int64 v130; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+160h] [rbp+58h] BYREF
  int *v132; // [rsp+180h] [rbp+78h]
  __int64 v133; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+190h] [rbp+88h] BYREF
  int *v135; // [rsp+1B0h] [rbp+A8h]
  __int64 v136; // [rsp+1B8h] [rbp+B0h]
  struct _EVENT_DATA_DESCRIPTOR v137; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 *v138; // [rsp+1E0h] [rbp+D8h]
  __int64 v139; // [rsp+1E8h] [rbp+E0h]

  v114 = a1;
  v1 = a1;
  v112 = a1;
  v105 = 0;
  KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
  if ( KernelEvent )
  {
    if ( *(_BYTE *)(v112 + 31) )
    {
      Object[0] = gpevtVideoInitialized;
      Object[1] = gpevtQueueReadyForCallout;
      KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( gbVideoInitialized )
    {
      if ( CsrApiPort )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v117 = 1;
          v6 = PsGetCurrentThreadWin32Thread(v4);
          v116 = v6;
          if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v116 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v106 = v117;
              v124 = 4LL;
              v123 = &v106;
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
          v116 = 0LL;
        }
        v7 = 0LL;
        while ( 1 )
        {
          v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v8 )
            v7 = *v8;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v7 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          if ( v116 )
          {
            v13 = *(unsigned int *)(v116 + 24);
            if ( *(_DWORD *)(v116 + 48) || (int)v13 > 0 )
            {
              *(_DWORD *)(v116 + 44) = 1;
              *(GUID *)(v116 + 28) = ActivityId;
              if ( (unsigned int)dword_1C0246A70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v107 = v117;
                  v127 = 4LL;
                  v126 = &v107;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E30,
                    &ActivityId,
                    0LL,
                    3u,
                    &v125);
                  v14 = dword_1C0246A70;
                }
                if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v108 = v117;
                  v130 = 4LL;
                  v129 = &v108;
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
        EtwTraceAcquiredExclusiveUserCrit(v13);
        gptiCurrent = v7;
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
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              v44 = *i;
              i[2] = 0LL;
              if ( !*(_DWORD *)(v44 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
              v47 = (PERESOURCE *)GetDomainLockRef(12LL, v39, v41, v42);
              if ( v47 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v48, v49);
              ExReleaseResourceAndLeaveCriticalRegion(*v47);
              HMUnlockObject(*i);
              tagDomLock::LockExclusive(v47);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        v3 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v112, &v105);
        UserSessionSwitchLeaveCrit(v51, v50, v52, v53);
        if ( v3 < 0 )
        {
          if ( v105 )
          {
            v56 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v54);
            if ( v56 )
              v56[1] = KeQueryPerformanceCounter(0LL);
            v121 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v120 = 1;
              v57 = PsGetCurrentThreadWin32Thread(v55);
              v119 = v57;
              if ( v57 && (*(int *)(v57 + 24) > 0 || *(_DWORD *)(v119 + 48)) )
              {
                EtwActivityIdControl(3u, &v121);
                if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v109 = v120;
                  v133 = 4LL;
                  v132 = &v109;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E87,
                    &v121,
                    0LL,
                    3u,
                    &v131);
                }
              }
            }
            else
            {
              v119 = 0LL;
            }
            v58 = 0LL;
            while ( 1 )
            {
              v59 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v59 )
                v58 = *v59;
              v62 = (PVOID)PsGetCurrentProcess(v61, v60);
              if ( v62 )
              {
                if ( v62 == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v64, v63) == gpepCSRSS && v58 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v58 == gptiRit )
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
                v64 = *(unsigned int *)(v119 + 24);
                if ( *(_DWORD *)(v119 + 48) || (int)v64 > 0 )
                {
                  *(_DWORD *)(v119 + 44) = 1;
                  *(GUID *)(v119 + 28) = v121;
                  if ( (unsigned int)dword_1C0246A70 > 6 )
                  {
                    if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                    {
                      v110 = v120;
                      v136 = 4LL;
                      v135 = &v110;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C0246A70,
                        (unsigned __int8 *)dword_1C0213E30,
                        &v121,
                        0LL,
                        3u,
                        &v134);
                      v65 = dword_1C0246A70;
                    }
                    if ( v65 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                    {
                      LODWORD(v111) = v120;
                      v139 = 4LL;
                      v138 = &v111;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C0246A70,
                        (unsigned __int8 *)dword_1C0213E5D,
                        &v121,
                        0LL,
                        3u,
                        &v137);
                    }
                  }
                }
              }
            }
            EtwTraceAcquiredExclusiveUserCrit(v64);
            gptiCurrent = v58;
            gbValidateHandleForIL = 1;
            if ( !(unsigned __int8)KeIsAttachedProcess(v66)
              || (v69 = PsGetCurrentProcess(v68, v67),
                  v70 = PsGetProcessSessionIdEx(v69),
                  v72 = PsGetCurrentThreadProcess(v71),
                  v70 == (unsigned int)PsGetProcessSessionIdEx(v72)) )
            {
              v73 = KeGetCurrentThread();
              v74 = 0LL;
              if ( !IsThreadCrossSessionAttached(v68) )
              {
                v76 = (__int64 *)PsGetThreadWin32Thread(v73);
                if ( v76 )
                  v74 = *v76;
              }
              v77 = PsGetCurrentProcessWin32Process(v75);
              if ( v74
                && v77
                && (*(_DWORD *)(v74 + 480) & 0x1000000) != 0
                && (*(_DWORD *)(v74 + 1224) & 0x80u) == 0
                && (*(_DWORD *)(v77 + 12) & 0x8000) != 0 )
              {
                v83 = (PERESOURCE *)GetDomainLockRef(12LL, v78, v79, v80);
                if ( v83 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v82, v81, v84, v85);
                if ( ExIsResourceAcquiredExclusiveLite(*v83) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v87, v86, v88, v89);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v83);
                v94 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v94[2];
                    v95 = *v94;
                    v94[2] = 0LL;
                    if ( !*(_DWORD *)(v95 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v91, v90, v92, v93);
                    v98 = (PERESOURCE *)GetDomainLockRef(12LL, v90, v92, v93);
                    if ( v98 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v97, v96, v99, v100);
                    ExReleaseResourceAndLeaveCriticalRegion(*v98);
                    HMUnlockObject(*v94);
                    tagDomLock::LockExclusive(v98);
                    v94 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v1 = v114;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v83);
              }
            }
            CSTRemove(4LL, &v112);
            UserSessionSwitchLeaveCrit(v102, v101, v103, v104);
          }
        }
        else
        {
          KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
          v3 = *(_DWORD *)(v1 + 24);
        }
      }
      else
      {
        v3 = -1073741816;
      }
    }
    else
    {
      v3 = -1073741823;
    }
    Win32FreePool((__int64)KernelEvent);
    *(_DWORD *)(v1 + 24) = v3;
  }
  else
  {
    *(_DWORD *)(v1 + 24) = -1073741801;
  }
}
