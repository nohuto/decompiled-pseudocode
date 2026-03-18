/*
 * XREFs of W32kEtwEnableCallback @ 0x1C00123AC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00112D0 (McGenControlCallbackV2.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0014290 (OpenCacheKeyEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C012CC70 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01FE8DC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  _UNKNOWN **v4; // rax
  unsigned __int64 v5; // r13
  const struct _GUID *v7; // r14
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  __int64 v10; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  void *v27; // rbx
  __int64 v28; // rcx
  void *v29; // rbx
  LONGLONG v30; // rcx
  LONGLONG v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  PERESOURCE *DomainLockRef; // rbx
  struct tagKERNELHANDLETABLEENTRY *v42; // rsi
  __int64 v43; // rax
  PERESOURCE *v44; // rdi
  __int64 v45; // rcx
  LARGE_INTEGER *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  struct tagTHREADINFO *v50; // rbx
  struct tagTHREADINFO **v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  PVOID v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rcx
  struct _KTHREAD *v66; // rdi
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 *v69; // rax
  __int64 v70; // rax
  PERESOURCE *v71; // rbx
  __int64 v72; // rax
  PERESOURCE *v73; // rdi
  struct tagKERNELHANDLETABLEENTRY *v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rcx
  LARGE_INTEGER *v77; // rbx
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  struct tagTHREADINFO *v81; // rbx
  struct tagTHREADINFO **v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  PVOID v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  int v94; // ebx
  __int64 v95; // rax
  struct _KTHREAD *v96; // rdi
  __int64 v97; // rbx
  __int64 v98; // rcx
  __int64 *v99; // rax
  __int64 v100; // rax
  PERESOURCE *v101; // rbx
  __int64 v102; // rax
  PERESOURCE *v103; // rdi
  struct tagKERNELHANDLETABLEENTRY *v104; // rsi
  __int64 v105; // rcx
  int v107; // [rsp+38h] [rbp-D0h] BYREF
  int v108; // [rsp+3Ch] [rbp-CCh] BYREF
  int v109; // [rsp+40h] [rbp-C8h] BYREF
  int v110; // [rsp+44h] [rbp-C4h] BYREF
  int v111; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG v113; // [rsp+50h] [rbp-B8h] BYREF
  int v114; // [rsp+54h] [rbp-B4h] BYREF
  int v115; // [rsp+58h] [rbp-B0h] BYREF
  int v116; // [rsp+5Ch] [rbp-ACh] BYREF
  int v117; // [rsp+60h] [rbp-A8h] BYREF
  int v118; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v119; // [rsp+68h] [rbp-A0h] BYREF
  struct _GUID *v120; // [rsp+70h] [rbp-98h]
  _QWORD DestinationString[3]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+90h] [rbp-78h] BYREF
  __int64 v123; // [rsp+A0h] [rbp-68h]
  unsigned __int8 v124; // [rsp+A8h] [rbp-60h]
  GUID ActivityId; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v126; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v127; // [rsp+C8h] [rbp-40h]
  GUID v128; // [rsp+CCh] [rbp-3Ch] BYREF
  __int64 v129; // [rsp+E0h] [rbp-28h]
  unsigned __int8 v130; // [rsp+E8h] [rbp-20h]
  GUID v131; // [rsp+ECh] [rbp-1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+100h] [rbp-8h] BYREF
  int *v133; // [rsp+120h] [rbp+18h]
  __int64 v134; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v135; // [rsp+130h] [rbp+28h] BYREF
  int *v136; // [rsp+150h] [rbp+48h]
  __int64 v137; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v138; // [rsp+160h] [rbp+58h] BYREF
  int *v139; // [rsp+180h] [rbp+78h]
  __int64 v140; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v141; // [rsp+190h] [rbp+88h] BYREF
  int *v142; // [rsp+1B0h] [rbp+A8h]
  __int64 v143; // [rsp+1B8h] [rbp+B0h]
  struct _EVENT_DATA_DESCRIPTOR v144; // [rsp+1C0h] [rbp+B8h] BYREF
  int *v145; // [rsp+1E0h] [rbp+D8h]
  __int64 v146; // [rsp+1E8h] [rbp+E0h]
  struct _EVENT_DATA_DESCRIPTOR v147; // [rsp+1F0h] [rbp+E8h] BYREF
  int *v148; // [rsp+210h] [rbp+108h]
  __int64 v149; // [rsp+218h] [rbp+110h]
  struct _EVENT_DATA_DESCRIPTOR v150; // [rsp+220h] [rbp+118h] BYREF
  int *v151; // [rsp+240h] [rbp+138h]
  __int64 v152; // [rsp+248h] [rbp+140h]
  struct _EVENT_DATA_DESCRIPTOR v153; // [rsp+250h] [rbp+148h] BYREF
  int *v154; // [rsp+270h] [rbp+168h]
  __int64 v155; // [rsp+278h] [rbp+170h]
  struct _EVENT_DATA_DESCRIPTOR v156; // [rsp+280h] [rbp+178h] BYREF
  __int64 *v157; // [rsp+2A0h] [rbp+198h]
  __int64 v158; // [rsp+2A8h] [rbp+1A0h]
  _BYTE KeyValueInformation[12]; // [rsp+2B0h] [rbp+1A8h] BYREF
  unsigned int v160; // [rsp+2BCh] [rbp+1B4h]
  _BYTE v161[12]; // [rsp+2C8h] [rbp+1C0h] BYREF
  unsigned int v162; // [rsp+2D4h] [rbp+1CCh]
  _UNKNOWN *retaddr; // [rsp+310h] [rbp+208h] BYREF

  v4 = &retaddr;
  DestinationString[0] = a4;
  v120 = a1;
  v5 = a4;
  v7 = a1;
  if ( a2 <= 1 )
  {
    v8 = 0;
    v9 = 0;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v124 = 1;
      v36 = PsGetCurrentThreadWin32Thread(v10);
      v123 = v36;
      if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v123 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v37, v38) )
          {
            v109 = v124;
            v134 = 4LL;
            v133 = &v109;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C024C960,
              (int)&dword_1C02199F7,
              (int)&ActivityId,
              0,
              3u,
              &v132);
          }
        }
      }
    }
    else
    {
      v123 = 0LL;
    }
    v12 = 0LL;
    while ( 1 )
    {
      v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v13 )
        v12 = *v13;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v12 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v123
      && (*(_DWORD *)(v123 + 48) || *(int *)(v123 + 24) > 0) )
    {
      *(_DWORD *)(v123 + 44) = 1;
      *(GUID *)(v123 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v19) )
        {
          v110 = v124;
          v137 = 4LL;
          v136 = &v110;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024C960,
            (int)&dword_1C02199A0,
            (int)&ActivityId,
            0,
            3u,
            &v135);
          v39 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v39 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v39, v40) )
        {
          v111 = v124;
          v140 = 4LL;
          v139 = &v111;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C024C960,
            (int)&dword_1C02199CD,
            (int)&ActivityId,
            0,
            3u,
            &v138);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v33 = PsGetCurrentProcess(v21, v20),
          ProcessSessionId = PsGetProcessSessionIdEx(v33),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v23 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
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
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v42 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v42 + 2);
            v43 = *(_QWORD *)v42;
            *((_QWORD *)v42 + 2) = 0LL;
            if ( !*(_DWORD *)(v43 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
            v44 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v44 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
            ExReleaseResourceAndLeaveCriticalRegion(*v44);
            HMUnlockObject(*(_QWORD *)v42);
            tagDomLock::LockExclusive((tagDomLock *)v44);
            v42 = gpducstulHead;
          }
          while ( gpducstulHead );
          v5 = DestinationString[0];
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    *(_OWORD *)&DestinationString[1] = 0LL;
    ResultLength = 0;
    v107 = gdwPolicyFlags;
    while ( 1 )
    {
      v27 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v107);
      if ( !v27 )
        break;
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ThreadUnresponsiveLogTimeout");
      if ( ZwQueryValueKey(
             v27,
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
      {
        v8 = v160;
        v107 = 0;
      }
      else if ( !v107 )
      {
        v8 = 200;
      }
      ZwClose(v27);
      if ( !v107 )
        goto LABEL_29;
    }
    v8 = 200;
LABEL_29:
    ValueName = 0LL;
    v113 = 0;
    v108 = gdwPolicyFlags;
    while ( 1 )
    {
      v29 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v108);
      if ( !v29 )
        break;
      RtlInitUnicodeString(&ValueName, L"UserCritAcquireDelayLogTimeout");
      if ( ZwQueryValueKey(v29, &ValueName, KeyValuePartialInformation, v161, 0x14u, &v113) >= 0 )
      {
        v9 = v162;
        v108 = 0;
      }
      else if ( !v108 )
      {
        v9 = 500;
      }
      ZwClose(v29);
      if ( !v108 )
        goto LABEL_35;
    }
    v9 = 500;
LABEL_35:
    LOBYTE(v4) = UserSessionSwitchLeaveCrit(v28);
    if ( v8 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v8;
      W32kEtwInputProcessDelayTimeoutMs = v8;
    }
    if ( v9 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v9;
    if ( a2 == 1 )
    {
      v30 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutus;
      v31 = 3600 * gliQpcFreq.QuadPart;
      v4 = (_UNKNOWN **)((unsigned __int64)((unsigned __int128)(v30 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63);
      v32 = v30 / 1000000;
    }
    else
    {
      v31 = -1LL;
      v32 = -1LL;
    }
    W32kEtwUserCritAcquireDelayTimeoutQPC = v32;
    W32KEtwUserCritTelemetryThrottleQPC = v31;
    W32kEtwEnabledKeyword = v5;
    if ( (v5 & 0x8000000000040000uLL) == 0
      || (LOBYTE(v4) = byte_1C024B738 - 1, (unsigned __int8)(byte_1C024B738 - 1) <= 2u)
      || (qword_1C024B720 & 0x8000000000040000uLL) == 0
      || (LOBYTE(v4) = 0, (qword_1C024B728 & 0x8000000000040000uLL) != qword_1C024B728) )
    {
      if ( W32kEtwWaitCursorActiveType )
      {
        v46 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v30);
        if ( v46 )
          v46[1] = KeQueryPerformanceCounter(0LL);
        v128 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v127 = 1;
          v47 = PsGetCurrentThreadWin32Thread(v45);
          v126 = v47;
          if ( v47 && (*(int *)(v47 + 24) > 0 || *(_DWORD *)(v126 + 48)) )
          {
            EtwActivityIdControl(3u, &v128);
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v48, v49) )
              {
                v114 = v127;
                v143 = 4LL;
                v142 = &v114;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C024C960,
                  (int)&dword_1C02199F7,
                  (int)&v128,
                  0,
                  3u,
                  &v141);
              }
            }
          }
        }
        else
        {
          v126 = 0LL;
        }
        v50 = 0LL;
        while ( 1 )
        {
          v51 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v51 )
            v50 = *v51;
          v54 = (PVOID)PsGetCurrentProcess(v53, v52);
          if ( v54 )
          {
            if ( v54 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v56, v55) == gpepCSRSS && v50 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v50 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v126
          && (*(_DWORD *)(v126 + 48) || *(int *)(v126 + 24) > 0) )
        {
          *(_DWORD *)(v126 + 44) = 1;
          *(GUID *)(v126 + 28) = v128;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v57) )
            {
              v115 = v127;
              v146 = 4LL;
              v145 = &v115;
              tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199A0, (int)&v128, 0, 3u, &v144);
              v58 = (unsigned int)dword_1C024C960;
            }
            if ( (unsigned int)v58 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v58, v59) )
            {
              v116 = v127;
              v149 = 4LL;
              v148 = &v116;
              tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199CD, (int)&v128, 0, 3u, &v147);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v50;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v62 = PsGetCurrentProcess(v61, v60),
              v63 = PsGetProcessSessionIdEx(v62),
              v64 = PsGetCurrentThreadProcess(),
              v63 == (unsigned int)PsGetProcessSessionIdEx(v64)) )
        {
          v66 = KeGetCurrentThread();
          v67 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached() )
          {
            v69 = (__int64 *)PsGetThreadWin32Thread(v66);
            if ( v69 )
              v67 = *v69;
          }
          v70 = PsGetCurrentProcessWin32Process(v68);
          if ( v67 )
          {
            if ( v70 )
            {
              if ( (*(_DWORD *)(v67 + 480) & 0x1000000) != 0 )
              {
                v65 = *(unsigned int *)(v67 + 1216);
                if ( (v65 & 0x80u) == 0LL && (*(_DWORD *)(v70 + 12) & 0x8000) != 0 )
                {
                  v71 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v71 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  if ( ExIsResourceAcquiredExclusiveLite(*v71) == 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM();
                  ExEnterCriticalRegionAndAcquireResourceExclusive(*v71);
                  while ( 1 )
                  {
                    v74 = gpducstulHead;
                    if ( !gpducstulHead )
                      break;
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                    v72 = *(_QWORD *)v74;
                    *((_QWORD *)v74 + 2) = 0LL;
                    if ( !*(_DWORD *)(v72 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM();
                    v73 = (PERESOURCE *)GetDomainLockRef(12LL);
                    if ( v73 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM();
                    ExReleaseResourceAndLeaveCriticalRegion(*v73);
                    HMUnlockObject(*(_QWORD *)v74);
                    tagDomLock::LockExclusive((tagDomLock *)v73);
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v71);
                }
              }
            }
          }
        }
        W32kEtwWaitCursorActiveType = 0;
        LOBYTE(v4) = UserSessionSwitchLeaveCrit(v65);
      }
    }
    v7 = v120;
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v77 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v75);
    if ( v77 )
      v77[1] = KeQueryPerformanceCounter(0LL);
    v131 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v130 = 1;
      v78 = PsGetCurrentThreadWin32Thread(v76);
      v129 = v78;
      if ( v78 && (*(int *)(v78 + 24) > 0 || *(_DWORD *)(v129 + 48)) )
      {
        EtwActivityIdControl(3u, &v131);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v79, v80) )
          {
            v117 = v130;
            v152 = 4LL;
            v151 = &v117;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199F7, (int)&v131, 0, 3u, &v150);
          }
        }
      }
    }
    else
    {
      v129 = 0LL;
    }
    v81 = 0LL;
    while ( 1 )
    {
      v82 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v82 )
        v81 = *v82;
      v85 = (PVOID)PsGetCurrentProcess(v84, v83);
      if ( v85 )
      {
        if ( v85 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v87, v86) == gpepCSRSS && v81 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v81 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v129
      && (*(_DWORD *)(v129 + 48) || *(int *)(v129 + 24) > 0) )
    {
      *(_DWORD *)(v129 + 44) = 1;
      *(GUID *)(v129 + 28) = v131;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v88) )
        {
          v118 = v130;
          v155 = 4LL;
          v154 = &v118;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199A0, (int)&v131, 0, 3u, &v153);
          v89 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v89 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v89, v90) )
        {
          LODWORD(v119) = v130;
          v158 = 4LL;
          v157 = &v119;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C024C960, (int)&dword_1C02199CD, (int)&v131, 0, 3u, &v156);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v81;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v93 = PsGetCurrentProcess(v92, v91),
          v94 = PsGetProcessSessionIdEx(v93),
          v95 = PsGetCurrentThreadProcess(),
          v94 == (unsigned int)PsGetProcessSessionIdEx(v95)) )
    {
      v96 = KeGetCurrentThread();
      v97 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v99 = (__int64 *)PsGetThreadWin32Thread(v96);
        if ( v99 )
          v97 = *v99;
      }
      v100 = PsGetCurrentProcessWin32Process(v98);
      if ( v97
        && v100
        && (*(_DWORD *)(v97 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v97 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v100 + 12) & 0x8000) != 0 )
      {
        v101 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v101 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( ExIsResourceAcquiredExclusiveLite(*v101) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM();
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v101);
        while ( 1 )
        {
          v104 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v102 = *(_QWORD *)v104;
          *((_QWORD *)v104 + 2) = 0LL;
          if ( !*(_DWORD *)(v102 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          v103 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v103 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          ExReleaseResourceAndLeaveCriticalRegion(*v103);
          HMUnlockObject(*(_QWORD *)v104);
          tagDomLock::LockExclusive((tagDomLock *)v103);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v101);
      }
    }
    CitEtwEnableCallback(v7, 2u, v5);
    LOBYTE(v4) = UserSessionSwitchLeaveCrit(v105);
  }
  return (char)v4;
}
