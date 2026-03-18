/*
 * XREFs of VideoPortCallout @ 0x1C011ECD0
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x1C0120020 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CreateKernelEvent @ 0x1C008F2F0 (CreateKernelEvent.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C011D398 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CSTRemove @ 0x1C0121B60 (CSTRemove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 *i; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rcx
  LARGE_INTEGER *v54; // rbx
  __int64 v55; // rax
  struct tagTHREADINFO *v56; // rbx
  struct tagTHREADINFO **v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PVOID v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned int v63; // r8d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // ebx
  __int64 v68; // rax
  struct _KTHREAD *v69; // rdi
  __int64 v70; // rbx
  __int64 v71; // rcx
  __int64 *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  PERESOURCE *v79; // rbx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  PERESOURCE *v94; // rdi
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // [rsp+48h] [rbp-C0h] BYREF
  int v102; // [rsp+4Ch] [rbp-BCh] BYREF
  int v103; // [rsp+50h] [rbp-B8h] BYREF
  int v104; // [rsp+54h] [rbp-B4h] BYREF
  int v105; // [rsp+58h] [rbp-B0h] BYREF
  int v106; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v107; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v108; // [rsp+68h] [rbp-A0h] BYREF
  PVOID KernelEvent; // [rsp+70h] [rbp-98h]
  __int64 v110; // [rsp+78h] [rbp-90h]
  PVOID Object[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v112; // [rsp+90h] [rbp-78h]
  unsigned __int8 v113; // [rsp+98h] [rbp-70h]
  GUID ActivityId; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v115; // [rsp+B0h] [rbp-58h]
  unsigned __int8 v116; // [rsp+B8h] [rbp-50h]
  GUID v117; // [rsp+BCh] [rbp-4Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v118; // [rsp+D0h] [rbp-38h] BYREF
  int *v119; // [rsp+F0h] [rbp-18h]
  __int64 v120; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v121; // [rsp+100h] [rbp-8h] BYREF
  int *v122; // [rsp+120h] [rbp+18h]
  __int64 v123; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v124; // [rsp+130h] [rbp+28h] BYREF
  int *v125; // [rsp+150h] [rbp+48h]
  __int64 v126; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v127; // [rsp+160h] [rbp+58h] BYREF
  int *v128; // [rsp+180h] [rbp+78h]
  __int64 v129; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v130; // [rsp+190h] [rbp+88h] BYREF
  int *v131; // [rsp+1B0h] [rbp+A8h]
  __int64 v132; // [rsp+1B8h] [rbp+B0h]
  struct _EVENT_DATA_DESCRIPTOR v133; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 *v134; // [rsp+1E0h] [rbp+D8h]
  __int64 v135; // [rsp+1E8h] [rbp+E0h]

  v110 = a1;
  v1 = a1;
  v108 = a1;
  v101 = 0;
  KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
  if ( KernelEvent )
  {
    if ( *(_BYTE *)(v108 + 31) )
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
          v113 = 1;
          v6 = PsGetCurrentThreadWin32Thread(v4);
          v112 = v6;
          if ( v6 && (*(int *)(v6 + 24) > 0 || *(_DWORD *)(v112 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v102 = v113;
              v120 = 4LL;
              v119 = &v102;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E87,
                &ActivityId,
                0LL,
                3u,
                &v118);
            }
          }
        }
        else
        {
          v112 = 0LL;
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
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v112
          && (*(_DWORD *)(v112 + 48) || *(int *)(v112 + 24) > 0) )
        {
          *(_DWORD *)(v112 + 44) = 1;
          *(GUID *)(v112 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0244A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v103 = v113;
              v123 = 4LL;
              v122 = &v103;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E30,
                &ActivityId,
                0LL,
                3u,
                &v121);
              v14 = dword_1C0244A70;
            }
            if ( v14 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
            {
              v104 = v113;
              v126 = 4LL;
              v125 = &v104;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0244A70,
                (unsigned __int8 *)dword_1C0211E5D,
                &ActivityId,
                0LL,
                3u,
                &v124);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v7;
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
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              v42 = *i;
              i[2] = 0LL;
              if ( !*(_DWORD *)(v42 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
              v45 = (PERESOURCE *)GetDomainLockRef(12LL, v37, v39, v40);
              if ( v45 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
              ExReleaseResourceAndLeaveCriticalRegion(*v45);
              HMUnlockObject(*i);
              tagDomLock::LockExclusive(v45);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        v3 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v108, &v101);
        UserSessionSwitchLeaveCrit(v49, v48, v50, v51);
        if ( v3 < 0 )
        {
          if ( v101 )
          {
            v54 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v52);
            if ( v54 )
              v54[1] = KeQueryPerformanceCounter(0LL);
            v117 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v116 = 1;
              v55 = PsGetCurrentThreadWin32Thread(v53);
              v115 = v55;
              if ( v55 && (*(int *)(v55 + 24) > 0 || *(_DWORD *)(v115 + 48)) )
              {
                EtwActivityIdControl(3u, &v117);
                if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
                {
                  v105 = v116;
                  v129 = 4LL;
                  v128 = &v105;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0244A70,
                    (unsigned __int8 *)dword_1C0211E87,
                    &v117,
                    0LL,
                    3u,
                    &v127);
                }
              }
            }
            else
            {
              v115 = 0LL;
            }
            v56 = 0LL;
            while ( 1 )
            {
              v57 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v57 )
                v56 = *v57;
              v60 = (PVOID)PsGetCurrentProcess(v59, v58);
              if ( v60 )
              {
                if ( v60 == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v62, v61) == gpepCSRSS && v56 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v56 == gptiRit )
              {
                break;
              }
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
              && v115
              && (*(_DWORD *)(v115 + 48) || *(int *)(v115 + 24) > 0) )
            {
              *(_DWORD *)(v115 + 44) = 1;
              *(GUID *)(v115 + 28) = v117;
              if ( (unsigned int)dword_1C0244A70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
                {
                  v106 = v116;
                  v132 = 4LL;
                  v131 = &v106;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0244A70,
                    (unsigned __int8 *)dword_1C0211E30,
                    &v117,
                    0LL,
                    3u,
                    &v130);
                  v63 = dword_1C0244A70;
                }
                if ( v63 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
                {
                  LODWORD(v107) = v116;
                  v135 = 4LL;
                  v134 = &v107;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0244A70,
                    (unsigned __int8 *)dword_1C0211E5D,
                    &v117,
                    0LL,
                    3u,
                    &v133);
                }
              }
            }
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v56;
            gbValidateHandleForIL = 1;
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (v66 = PsGetCurrentProcess(v65, v64),
                  v67 = PsGetProcessSessionIdEx(v66),
                  v68 = PsGetCurrentThreadProcess(),
                  v67 == (unsigned int)PsGetProcessSessionIdEx(v68)) )
            {
              v69 = KeGetCurrentThread();
              v70 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v72 = (__int64 *)PsGetThreadWin32Thread(v69);
                if ( v72 )
                  v70 = *v72;
              }
              v73 = PsGetCurrentProcessWin32Process(v71);
              if ( v70
                && v73
                && (*(_DWORD *)(v70 + 488) & 0x1000000) != 0
                && (*(_DWORD *)(v70 + 1232) & 0x80u) == 0
                && (*(_DWORD *)(v73 + 12) & 0x8000) != 0 )
              {
                v79 = (PERESOURCE *)GetDomainLockRef(12LL, v74, v75, v76);
                if ( v79 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v78, v77, v80, v81);
                if ( ExIsResourceAcquiredExclusiveLite(*v79) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v83, v82, v84, v85);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v79);
                v90 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v90[2];
                    v91 = *v90;
                    v90[2] = 0LL;
                    if ( !*(_DWORD *)(v91 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v87, v86, v88, v89);
                    v94 = (PERESOURCE *)GetDomainLockRef(12LL, v86, v88, v89);
                    if ( v94 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v95, v96);
                    ExReleaseResourceAndLeaveCriticalRegion(*v94);
                    HMUnlockObject(*v90);
                    tagDomLock::LockExclusive(v94);
                    v90 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v1 = v110;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v79);
              }
            }
            CSTRemove(4LL, &v108);
            UserSessionSwitchLeaveCrit(v98, v97, v99, v100);
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
