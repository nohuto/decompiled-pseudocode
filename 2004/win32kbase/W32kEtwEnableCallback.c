/*
 * XREFs of W32kEtwEnableCallback @ 0x1C002D2AC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C002CBD0 (McGenControlCallbackV2.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     OpenCacheKeyEx @ 0x1C007AF00 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0126C80 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01F8ED0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  _UNKNOWN **v4; // rax
  unsigned __int64 v5; // r13
  const struct _GUID *v7; // r14
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  void *v29; // rbx
  __int64 v30; // rcx
  void *v31; // rbx
  LONGLONG v32; // rcx
  LONGLONG v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  struct tagKERNELHANDLETABLEENTRY *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  PERESOURCE *v60; // rdi
  __int64 v61; // r8
  __int64 v62; // r9
  LARGE_INTEGER *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // r9
  struct tagTHREADINFO *v67; // rbx
  struct tagTHREADINFO **v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  PVOID v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r9
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // ebx
  __int64 v81; // rax
  __int64 v82; // rcx
  struct _KTHREAD *v83; // rdi
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  PERESOURCE *v93; // rbx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  PERESOURCE *v107; // rdi
  __int64 v108; // r8
  __int64 v109; // r9
  struct tagKERNELHANDLETABLEENTRY *v110; // rsi
  LARGE_INTEGER *v111; // rbx
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // r9
  struct tagTHREADINFO *v115; // rbx
  struct tagTHREADINFO **v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  PVOID v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r9
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // ebx
  __int64 v129; // rax
  struct _KTHREAD *v130; // rdi
  __int64 v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  PERESOURCE *v140; // rbx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  PERESOURCE *v154; // rdi
  __int64 v155; // r8
  __int64 v156; // r9
  struct tagKERNELHANDLETABLEENTRY *v157; // rsi
  __int64 v158; // rcx
  int v160; // [rsp+38h] [rbp-D0h] BYREF
  int v161; // [rsp+3Ch] [rbp-CCh] BYREF
  int v162; // [rsp+40h] [rbp-C8h] BYREF
  int v163; // [rsp+44h] [rbp-C4h] BYREF
  int v164; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG v166; // [rsp+50h] [rbp-B8h] BYREF
  int v167; // [rsp+54h] [rbp-B4h] BYREF
  int v168; // [rsp+58h] [rbp-B0h] BYREF
  int v169; // [rsp+5Ch] [rbp-ACh] BYREF
  int v170; // [rsp+60h] [rbp-A8h] BYREF
  int v171; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v172; // [rsp+68h] [rbp-A0h] BYREF
  struct _GUID *v173; // [rsp+70h] [rbp-98h]
  _QWORD DestinationString[3]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+90h] [rbp-78h] BYREF
  __int64 v176; // [rsp+A0h] [rbp-68h]
  unsigned __int8 v177; // [rsp+A8h] [rbp-60h]
  GUID ActivityId; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v179; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v180; // [rsp+C8h] [rbp-40h]
  GUID v181; // [rsp+CCh] [rbp-3Ch] BYREF
  __int64 v182; // [rsp+E0h] [rbp-28h]
  unsigned __int8 v183; // [rsp+E8h] [rbp-20h]
  GUID v184; // [rsp+ECh] [rbp-1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v185; // [rsp+100h] [rbp-8h] BYREF
  int *v186; // [rsp+120h] [rbp+18h]
  __int64 v187; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v188; // [rsp+130h] [rbp+28h] BYREF
  int *v189; // [rsp+150h] [rbp+48h]
  __int64 v190; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v191; // [rsp+160h] [rbp+58h] BYREF
  int *v192; // [rsp+180h] [rbp+78h]
  __int64 v193; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v194; // [rsp+190h] [rbp+88h] BYREF
  int *v195; // [rsp+1B0h] [rbp+A8h]
  __int64 v196; // [rsp+1B8h] [rbp+B0h]
  struct _EVENT_DATA_DESCRIPTOR v197; // [rsp+1C0h] [rbp+B8h] BYREF
  int *v198; // [rsp+1E0h] [rbp+D8h]
  __int64 v199; // [rsp+1E8h] [rbp+E0h]
  struct _EVENT_DATA_DESCRIPTOR v200; // [rsp+1F0h] [rbp+E8h] BYREF
  int *v201; // [rsp+210h] [rbp+108h]
  __int64 v202; // [rsp+218h] [rbp+110h]
  struct _EVENT_DATA_DESCRIPTOR v203; // [rsp+220h] [rbp+118h] BYREF
  int *v204; // [rsp+240h] [rbp+138h]
  __int64 v205; // [rsp+248h] [rbp+140h]
  struct _EVENT_DATA_DESCRIPTOR v206; // [rsp+250h] [rbp+148h] BYREF
  int *v207; // [rsp+270h] [rbp+168h]
  __int64 v208; // [rsp+278h] [rbp+170h]
  struct _EVENT_DATA_DESCRIPTOR v209; // [rsp+280h] [rbp+178h] BYREF
  __int64 *v210; // [rsp+2A0h] [rbp+198h]
  __int64 v211; // [rsp+2A8h] [rbp+1A0h]
  _BYTE KeyValueInformation[12]; // [rsp+2B0h] [rbp+1A8h] BYREF
  unsigned int v213; // [rsp+2BCh] [rbp+1B4h]
  _BYTE v214[12]; // [rsp+2C8h] [rbp+1C0h] BYREF
  unsigned int v215; // [rsp+2D4h] [rbp+1CCh]
  _UNKNOWN *retaddr; // [rsp+310h] [rbp+208h] BYREF

  v4 = &retaddr;
  DestinationString[0] = a4;
  v173 = a1;
  v5 = a4;
  v7 = a1;
  if ( a2 <= 1 )
  {
    v8 = 0;
    v9 = 0;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v177 = 1;
      v38 = PsGetCurrentThreadWin32Thread();
      v176 = v38;
      if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v176 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v39, v40) )
          {
            v162 = v177;
            v187 = 4LL;
            v186 = &v162;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0246A70,
              (int)&dword_1C0213E87,
              (int)&ActivityId,
              0,
              3u,
              &v185);
          }
        }
      }
    }
    else
    {
      v176 = 0LL;
    }
    v11 = 0LL;
    while ( 1 )
    {
      v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v12 )
        v11 = *v12;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v11 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v176
      && (*(_DWORD *)(v176 + 48) || *(int *)(v176 + 24) > 0) )
    {
      *(_DWORD *)(v176 + 44) = 1;
      *(GUID *)(v176 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v18) )
        {
          v163 = v177;
          v190 = 4LL;
          v189 = &v163;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0246A70,
            (int)&dword_1C0213E30,
            (int)&ActivityId,
            0,
            3u,
            &v188);
          v41 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v41 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v41, v42) )
        {
          v164 = v177;
          v193 = 4LL;
          v192 = &v164;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0246A70,
            (int)&dword_1C0213E5D,
            (int)&ActivityId,
            0,
            3u,
            &v191);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v35 = PsGetCurrentProcess(v20, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(v35),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v22 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24, v23, v25, v26);
      if ( v22
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v22 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v22 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v46, v47);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v56 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v56 + 2);
            v57 = *(_QWORD *)v56;
            *((_QWORD *)v56 + 2) = 0LL;
            if ( !*(_DWORD *)(v57 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v53, v52, v54, v55);
            v60 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v60 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v58, v61, v62);
            ExReleaseResourceAndLeaveCriticalRegion(*v60);
            HMUnlockObject(*(_QWORD *)v56);
            tagDomLock::LockExclusive((tagDomLock *)v60);
            v56 = gpducstulHead;
          }
          while ( gpducstulHead );
          v5 = DestinationString[0];
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    *(_OWORD *)&DestinationString[1] = 0LL;
    ResultLength = 0;
    v160 = gdwPolicyFlags;
    while ( 1 )
    {
      v29 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v160);
      if ( !v29 )
        break;
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ThreadUnresponsiveLogTimeout");
      if ( ZwQueryValueKey(
             v29,
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
      {
        v8 = v213;
        v160 = 0;
      }
      else if ( !v160 )
      {
        v8 = 200;
      }
      ZwClose(v29);
      if ( !v160 )
        goto LABEL_29;
    }
    v8 = 200;
LABEL_29:
    ValueName = 0LL;
    v166 = 0;
    v161 = gdwPolicyFlags;
    while ( 1 )
    {
      v31 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v161);
      if ( !v31 )
        break;
      RtlInitUnicodeString(&ValueName, L"UserCritAcquireDelayLogTimeout");
      if ( ZwQueryValueKey(v31, &ValueName, KeyValuePartialInformation, v214, 0x14u, &v166) >= 0 )
      {
        v9 = v215;
        v161 = 0;
      }
      else if ( !v161 )
      {
        v9 = 500;
      }
      ZwClose(v31);
      if ( !v161 )
        goto LABEL_35;
    }
    v9 = 500;
LABEL_35:
    LOBYTE(v4) = UserSessionSwitchLeaveCrit(v30);
    if ( v8 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v8;
      W32kEtwInputProcessDelayTimeoutMs = v8;
    }
    if ( v9 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v9;
    if ( a2 == 1 )
    {
      v32 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutus;
      v33 = 3600 * gliQpcFreq.QuadPart;
      v4 = (_UNKNOWN **)((unsigned __int64)((unsigned __int128)(v32 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63);
      v34 = v32 / 1000000;
    }
    else
    {
      v33 = -1LL;
      v34 = -1LL;
    }
    W32kEtwUserCritAcquireDelayTimeoutQPC = v34;
    W32KEtwUserCritTelemetryThrottleQPC = v33;
    W32kEtwEnabledKeyword = v5;
    if ( (v5 & 0x8000000000040000uLL) == 0
      || (LOBYTE(v4) = byte_1C0245748 - 1, (unsigned __int8)(byte_1C0245748 - 1) <= 2u)
      || (qword_1C0245730 & 0x8000000000040000uLL) == 0
      || (LOBYTE(v4) = 0, (qword_1C0245738 & 0x8000000000040000uLL) != qword_1C0245738) )
    {
      if ( W32kEtwWaitCursorActiveType )
      {
        v63 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
        if ( v63 )
          v63[1] = KeQueryPerformanceCounter(0LL);
        v181 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v180 = 1;
          v64 = PsGetCurrentThreadWin32Thread();
          v179 = v64;
          if ( v64 && (*(int *)(v64 + 24) > 0 || *(_DWORD *)(v179 + 48)) )
          {
            EtwActivityIdControl(3u, &v181);
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v65, v66) )
              {
                v167 = v180;
                v196 = 4LL;
                v195 = &v167;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C0246A70,
                  (int)&dword_1C0213E87,
                  (int)&v181,
                  0,
                  3u,
                  &v194);
              }
            }
          }
        }
        else
        {
          v179 = 0LL;
        }
        v67 = 0LL;
        while ( 1 )
        {
          v68 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v68 )
            v67 = *v68;
          v71 = (PVOID)PsGetCurrentProcess(v70, v69);
          if ( v71 )
          {
            if ( v71 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v73, v72) == gpepCSRSS && v67 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v67 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v179
          && (*(_DWORD *)(v179 + 48) || *(int *)(v179 + 24) > 0) )
        {
          *(_DWORD *)(v179 + 44) = 1;
          *(GUID *)(v179 + 28) = v181;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v74) )
            {
              v168 = v180;
              v199 = 4LL;
              v198 = &v168;
              tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E30, (int)&v181, 0, 3u, &v197);
              v75 = (unsigned int)dword_1C0246A70;
            }
            if ( (unsigned int)v75 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v75, v76) )
            {
              v169 = v180;
              v202 = 4LL;
              v201 = &v169;
              tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E5D, (int)&v181, 0, 3u, &v200);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v67;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v79 = PsGetCurrentProcess(v78, v77),
              v80 = PsGetProcessSessionIdEx(v79),
              v81 = PsGetCurrentThreadProcess(),
              v80 == (unsigned int)PsGetProcessSessionIdEx(v81)) )
        {
          v83 = KeGetCurrentThread();
          v84 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached() )
          {
            v89 = (__int64 *)PsGetThreadWin32Thread(v83);
            if ( v89 )
              v84 = *v89;
          }
          v90 = PsGetCurrentProcessWin32Process(v86, v85, v87, v88);
          if ( v84 )
          {
            if ( v90 )
            {
              if ( (*(_DWORD *)(v84 + 480) & 0x1000000) != 0 )
              {
                v82 = *(unsigned int *)(v84 + 1224);
                if ( (v82 & 0x80u) == 0LL && (*(_DWORD *)(v90 + 12) & 0x8000) != 0 )
                {
                  v93 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v93 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v92, v91, v94, v95);
                  if ( ExIsResourceAcquiredExclusiveLite(*v93) == 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v97, v96, v98, v99);
                  ExEnterCriticalRegionAndAcquireResourceExclusive(*v93);
                  while ( 1 )
                  {
                    v110 = gpducstulHead;
                    if ( !gpducstulHead )
                      break;
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                    v104 = *(_QWORD *)v110;
                    *((_QWORD *)v110 + 2) = 0LL;
                    if ( !*(_DWORD *)(v104 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v101, v100, v102, v103);
                    v107 = (PERESOURCE *)GetDomainLockRef(12LL);
                    if ( v107 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v106, v105, v108, v109);
                    ExReleaseResourceAndLeaveCriticalRegion(*v107);
                    HMUnlockObject(*(_QWORD *)v110);
                    tagDomLock::LockExclusive((tagDomLock *)v107);
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v93);
                }
              }
            }
          }
        }
        W32kEtwWaitCursorActiveType = 0;
        LOBYTE(v4) = UserSessionSwitchLeaveCrit(v82);
      }
    }
    v7 = v173;
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v111 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v111 )
      v111[1] = KeQueryPerformanceCounter(0LL);
    v184 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v183 = 1;
      v112 = PsGetCurrentThreadWin32Thread();
      v182 = v112;
      if ( v112 && (*(int *)(v112 + 24) > 0 || *(_DWORD *)(v182 + 48)) )
      {
        EtwActivityIdControl(3u, &v184);
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v113, v114) )
          {
            v170 = v183;
            v205 = 4LL;
            v204 = &v170;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E87, (int)&v184, 0, 3u, &v203);
          }
        }
      }
    }
    else
    {
      v182 = 0LL;
    }
    v115 = 0LL;
    while ( 1 )
    {
      v116 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v116 )
        v115 = *v116;
      v119 = (PVOID)PsGetCurrentProcess(v118, v117);
      if ( v119 )
      {
        if ( v119 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v121, v120) == gpepCSRSS && v115 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v115 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v182
      && (*(_DWORD *)(v182 + 48) || *(int *)(v182 + 24) > 0) )
    {
      *(_DWORD *)(v182 + 44) = 1;
      *(GUID *)(v182 + 28) = v184;
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v122) )
        {
          v171 = v183;
          v208 = 4LL;
          v207 = &v171;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E30, (int)&v184, 0, 3u, &v206);
          v123 = (unsigned int)dword_1C0246A70;
        }
        if ( (unsigned int)v123 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v123, v124) )
        {
          LODWORD(v172) = v183;
          v211 = 4LL;
          v210 = &v172;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E5D, (int)&v184, 0, 3u, &v209);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v115;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v127 = PsGetCurrentProcess(v126, v125),
          v128 = PsGetProcessSessionIdEx(v127),
          v129 = PsGetCurrentThreadProcess(),
          v128 == (unsigned int)PsGetProcessSessionIdEx(v129)) )
    {
      v130 = KeGetCurrentThread();
      v131 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v136 = (__int64 *)PsGetThreadWin32Thread(v130);
        if ( v136 )
          v131 = *v136;
      }
      v137 = PsGetCurrentProcessWin32Process(v133, v132, v134, v135);
      if ( v131
        && v137
        && (*(_DWORD *)(v131 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v131 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(v137 + 12) & 0x8000) != 0 )
      {
        v140 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v140 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v139, v138, v141, v142);
        if ( ExIsResourceAcquiredExclusiveLite(*v140) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v144, v143, v145, v146);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v140);
        while ( 1 )
        {
          v157 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v151 = *(_QWORD *)v157;
          *((_QWORD *)v157 + 2) = 0LL;
          if ( !*(_DWORD *)(v151 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v148, v147, v149, v150);
          v154 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v154 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v153, v152, v155, v156);
          ExReleaseResourceAndLeaveCriticalRegion(*v154);
          HMUnlockObject(*(_QWORD *)v157);
          tagDomLock::LockExclusive((tagDomLock *)v154);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v140);
      }
    }
    CitEtwEnableCallback(v7, 2u, v5);
    LOBYTE(v4) = UserSessionSwitchLeaveCrit(v158);
  }
  return (char)v4;
}
