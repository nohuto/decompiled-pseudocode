/*
 * XREFs of VideoPortCallout @ 0x1C0127000
 * Callers:
 *     Win32kBaseVideoPortCallout @ 0x1C0128350 (Win32kBaseVideoPortCallout.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C0015350 (CreateKernelEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z @ 0x1C0125678 (-SendVideoPortCalloutRequest@@YAJPEAU_POWER_INIT@@PEAH@Z.c)
 *     CSTRemove @ 0x1C0129E90 (CSTRemove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall VideoPortCallout(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r14d
  __int64 v6; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v8; // rax
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int ProcessSessionId; // ebx
  __int64 v22; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *i; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  LARGE_INTEGER *v40; // rbx
  __int64 v41; // rax
  struct tagTHREADINFO *v42; // rbx
  struct tagTHREADINFO **v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  PVOID v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rcx
  __int64 v56; // rax
  struct _KTHREAD *v57; // rdi
  __int64 v58; // rbx
  __int64 v59; // rcx
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  PERESOURCE *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rcx
  PERESOURCE *v69; // rdi
  __int64 v70; // rcx
  int v71; // [rsp+48h] [rbp-C0h] BYREF
  int v72; // [rsp+4Ch] [rbp-BCh] BYREF
  int v73; // [rsp+50h] [rbp-B8h] BYREF
  int v74; // [rsp+54h] [rbp-B4h] BYREF
  int v75; // [rsp+58h] [rbp-B0h] BYREF
  int v76; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v77; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+68h] [rbp-A0h] BYREF
  PVOID KernelEvent; // [rsp+70h] [rbp-98h]
  __int64 v80; // [rsp+78h] [rbp-90h]
  PVOID Object[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v82; // [rsp+90h] [rbp-78h]
  unsigned __int8 v83; // [rsp+98h] [rbp-70h]
  GUID ActivityId; // [rsp+9Ch] [rbp-6Ch] BYREF
  __int64 v85; // [rsp+B0h] [rbp-58h]
  unsigned __int8 v86; // [rsp+B8h] [rbp-50h]
  GUID v87; // [rsp+BCh] [rbp-4Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+D0h] [rbp-38h] BYREF
  int *v89; // [rsp+F0h] [rbp-18h]
  __int64 v90; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+100h] [rbp-8h] BYREF
  int *v92; // [rsp+120h] [rbp+18h]
  __int64 v93; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+130h] [rbp+28h] BYREF
  int *v95; // [rsp+150h] [rbp+48h]
  __int64 v96; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+160h] [rbp+58h] BYREF
  int *v98; // [rsp+180h] [rbp+78h]
  __int64 v99; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+190h] [rbp+88h] BYREF
  int *v101; // [rsp+1B0h] [rbp+A8h]
  __int64 v102; // [rsp+1B8h] [rbp+B0h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 *v104; // [rsp+1E0h] [rbp+D8h]
  __int64 v105; // [rsp+1E8h] [rbp+E0h]

  v80 = a1;
  v1 = a1;
  v78 = a1;
  v71 = 0;
  KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
  if ( KernelEvent )
  {
    if ( *(_BYTE *)(v78 + 31) )
    {
      Object[0] = gpevtVideoInitialized;
      Object[1] = gpevtQueueReadyForCallout;
      KeWaitForMultipleObjects(2u, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
    }
    if ( gbVideoInitialized )
    {
      if ( CsrApiPort )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v83 = 1;
          v8 = PsGetCurrentThreadWin32Thread(v6);
          v82 = v8;
          if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v82 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v72 = v83;
              v90 = 4LL;
              v89 = &v72;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &ActivityId,
                0LL,
                3u,
                &v88);
            }
          }
        }
        else
        {
          v82 = 0LL;
        }
        v9 = 0LL;
        while ( 1 )
        {
          v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v10 )
            v9 = *v10;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v9 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          if ( v82 )
          {
            v15 = *(unsigned int *)(v82 + 24);
            if ( *(_DWORD *)(v82 + 48) || (int)v15 > 0 )
            {
              *(_DWORD *)(v82 + 44) = 1;
              *(GUID *)(v82 + 28) = ActivityId;
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v73 = v83;
                  v93 = 4LL;
                  v92 = &v73;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199A0,
                    &ActivityId,
                    0LL,
                    3u,
                    &v91);
                  v16 = dword_1C024C960;
                }
                if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v74 = v83;
                  v96 = 4LL;
                  v95 = &v74;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199CD,
                    &ActivityId,
                    0LL,
                    3u,
                    &v94);
                }
              }
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit(v15);
        gptiCurrent = v9;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess(v17)
          || (v20 = PsGetCurrentProcess(v19, v18),
              ProcessSessionId = PsGetProcessSessionIdEx(v20),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v22),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v25 = 0LL;
          if ( !IsThreadCrossSessionAttached(v19) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v25 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
          if ( v25
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v25 + 480) & 0x1000000) != 0
            && (*(_DWORD *)(v25 + 1216) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
              v34 = *i;
              i[2] = 0LL;
              if ( !*(_DWORD *)(v34 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
              v36 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v36 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
              ExReleaseResourceAndLeaveCriticalRegion(*v36);
              HMUnlockObject(*i);
              tagDomLock::LockExclusive(v36);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        v5 = SendVideoPortCalloutRequest((struct _POWER_INIT *)&v78, &v71);
        UserSessionSwitchLeaveCrit(v37);
        if ( v5 < 0 )
        {
          if ( v71 )
          {
            v40 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v38);
            if ( v40 )
              v40[1] = KeQueryPerformanceCounter(0LL);
            v87 = 0LL;
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              v86 = 1;
              v41 = PsGetCurrentThreadWin32Thread(v39);
              v85 = v41;
              if ( v41 && (*(int *)(v41 + 24) > 0 || *(_DWORD *)(v85 + 48)) )
              {
                EtwActivityIdControl(3u, &v87);
                if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v75 = v86;
                  v99 = 4LL;
                  v98 = &v75;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199F7,
                    &v87,
                    0LL,
                    3u,
                    &v97);
                }
              }
            }
            else
            {
              v85 = 0LL;
            }
            v42 = 0LL;
            while ( 1 )
            {
              v43 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
              if ( v43 )
                v42 = *v43;
              v46 = (PVOID)PsGetCurrentProcess(v45, v44);
              if ( v46 )
              {
                if ( v46 == g_pepDwm )
                  break;
              }
              if ( (PVOID)PsGetCurrentProcess(v48, v47) == gpepCSRSS && v42 != (struct tagTHREADINFO *)gptiTSRequest
                || gbDITInHitTest != 1
                || v42 == gptiRit )
              {
                break;
              }
              ++gcDITHitTestWaiters;
              ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
              KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
            }
            if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
            {
              if ( v85 )
              {
                v48 = *(unsigned int *)(v85 + 24);
                if ( *(_DWORD *)(v85 + 48) || (int)v48 > 0 )
                {
                  *(_DWORD *)(v85 + 44) = 1;
                  *(GUID *)(v85 + 28) = v87;
                  if ( (unsigned int)dword_1C024C960 > 6 )
                  {
                    if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                    {
                      v76 = v86;
                      v102 = 4LL;
                      v101 = &v76;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C024C960,
                        (unsigned __int8 *)dword_1C02199A0,
                        &v87,
                        0LL,
                        3u,
                        &v100);
                      v49 = dword_1C024C960;
                    }
                    if ( v49 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                    {
                      LODWORD(v77) = v86;
                      v105 = 4LL;
                      v104 = &v77;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C024C960,
                        (unsigned __int8 *)dword_1C02199CD,
                        &v87,
                        0LL,
                        3u,
                        &v103);
                    }
                  }
                }
              }
            }
            EtwTraceAcquiredExclusiveUserCrit(v48);
            gptiCurrent = v42;
            gbValidateHandleForIL = 1;
            if ( !(unsigned __int8)KeIsAttachedProcess(v50)
              || (v53 = PsGetCurrentProcess(v52, v51),
                  v54 = PsGetProcessSessionIdEx(v53),
                  v56 = PsGetCurrentThreadProcess(v55),
                  v54 == (unsigned int)PsGetProcessSessionIdEx(v56)) )
            {
              v57 = KeGetCurrentThread();
              v58 = 0LL;
              if ( !IsThreadCrossSessionAttached(v52) )
              {
                v60 = (__int64 *)PsGetThreadWin32Thread(v57);
                if ( v60 )
                  v58 = *v60;
              }
              v61 = PsGetCurrentProcessWin32Process(v59);
              if ( v58
                && v61
                && (*(_DWORD *)(v58 + 480) & 0x1000000) != 0
                && (*(_DWORD *)(v58 + 1216) & 0x80u) == 0
                && (*(_DWORD *)(v61 + 12) & 0x8000) != 0 )
              {
                v63 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v63 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v62);
                if ( ExIsResourceAcquiredExclusiveLite(*v63) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v64);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v63);
                v66 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v66[2];
                    v67 = *v66;
                    v66[2] = 0LL;
                    if ( !*(_DWORD *)(v67 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v65);
                    v69 = (PERESOURCE *)GetDomainLockRef(12LL);
                    if ( v69 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v68);
                    ExReleaseResourceAndLeaveCriticalRegion(*v69);
                    HMUnlockObject(*v66);
                    tagDomLock::LockExclusive(v69);
                    v66 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v1 = v80;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v63);
              }
            }
            CSTRemove(4LL, &v78);
            UserSessionSwitchLeaveCrit(v70);
          }
        }
        else
        {
          KeWaitForSingleObject(KernelEvent, WrUserRequest, 0, 0, 0LL);
          v5 = *(_DWORD *)(v1 + 24);
        }
      }
      else
      {
        v5 = -1073741816;
      }
    }
    else
    {
      v5 = -1073741823;
    }
    Win32FreePool((__int64)KernelEvent, v2, v4);
    *(_DWORD *)(v1 + 24) = v5;
  }
  else
  {
    *(_DWORD *)(v1 + 24) = -1073741801;
  }
}
