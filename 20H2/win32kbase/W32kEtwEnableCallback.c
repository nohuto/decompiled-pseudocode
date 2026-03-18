/*
 * XREFs of W32kEtwEnableCallback @ 0x1C008ED0C
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C008E630 (McGenControlCallbackV2.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C00375B0 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0124930 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01F75A0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r13
  const struct _GUID *v6; // r14
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  LONGLONG v34; // rcx
  LONGLONG v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v40; // rax
  unsigned int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 *v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  PERESOURCE *v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  LARGE_INTEGER *v63; // rbx
  __int64 v64; // rax
  struct tagTHREADINFO *v65; // rbx
  struct tagTHREADINFO **v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  PVOID v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  unsigned int v72; // r8d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // ebx
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  struct _KTHREAD *v82; // rdi
  __int64 v83; // rbx
  __int64 v84; // rcx
  __int64 *v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  PERESOURCE *v89; // rbx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  PERESOURCE *v103; // rdi
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 *v106; // rsi
  __int64 v107; // rcx
  __int64 v108; // rcx
  LARGE_INTEGER *v109; // rbx
  __int64 v110; // rax
  struct tagTHREADINFO *v111; // rbx
  struct tagTHREADINFO **v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  PVOID v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  unsigned int v118; // r8d
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  int v122; // ebx
  __int64 v123; // rax
  struct _KTHREAD *v124; // rdi
  __int64 v125; // rbx
  __int64 v126; // rcx
  __int64 *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // rcx
  PERESOURCE *v134; // rbx
  __int64 v135; // r8
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  PERESOURCE *v148; // rdi
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 *v151; // rsi
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  int v156; // [rsp+38h] [rbp-D0h] BYREF
  int v157; // [rsp+3Ch] [rbp-CCh] BYREF
  int v158; // [rsp+40h] [rbp-C8h] BYREF
  int v159; // [rsp+44h] [rbp-C4h] BYREF
  int v160; // [rsp+48h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG v162; // [rsp+50h] [rbp-B8h] BYREF
  int v163; // [rsp+54h] [rbp-B4h] BYREF
  int v164; // [rsp+58h] [rbp-B0h] BYREF
  int v165; // [rsp+5Ch] [rbp-ACh] BYREF
  int v166; // [rsp+60h] [rbp-A8h] BYREF
  int v167; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v168; // [rsp+68h] [rbp-A0h] BYREF
  struct _GUID *v169; // [rsp+70h] [rbp-98h]
  _QWORD DestinationString[3]; // [rsp+78h] [rbp-90h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+90h] [rbp-78h] BYREF
  __int64 v172; // [rsp+A0h] [rbp-68h]
  unsigned __int8 v173; // [rsp+A8h] [rbp-60h]
  GUID ActivityId; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v175; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v176; // [rsp+C8h] [rbp-40h]
  GUID v177; // [rsp+CCh] [rbp-3Ch] BYREF
  __int64 v178; // [rsp+E0h] [rbp-28h]
  unsigned __int8 v179; // [rsp+E8h] [rbp-20h]
  GUID v180; // [rsp+ECh] [rbp-1Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v181; // [rsp+100h] [rbp-8h] BYREF
  int *v182; // [rsp+120h] [rbp+18h]
  __int64 v183; // [rsp+128h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v184; // [rsp+130h] [rbp+28h] BYREF
  int *v185; // [rsp+150h] [rbp+48h]
  __int64 v186; // [rsp+158h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v187; // [rsp+160h] [rbp+58h] BYREF
  int *v188; // [rsp+180h] [rbp+78h]
  __int64 v189; // [rsp+188h] [rbp+80h]
  struct _EVENT_DATA_DESCRIPTOR v190; // [rsp+190h] [rbp+88h] BYREF
  int *v191; // [rsp+1B0h] [rbp+A8h]
  __int64 v192; // [rsp+1B8h] [rbp+B0h]
  struct _EVENT_DATA_DESCRIPTOR v193; // [rsp+1C0h] [rbp+B8h] BYREF
  int *v194; // [rsp+1E0h] [rbp+D8h]
  __int64 v195; // [rsp+1E8h] [rbp+E0h]
  struct _EVENT_DATA_DESCRIPTOR v196; // [rsp+1F0h] [rbp+E8h] BYREF
  int *v197; // [rsp+210h] [rbp+108h]
  __int64 v198; // [rsp+218h] [rbp+110h]
  struct _EVENT_DATA_DESCRIPTOR v199; // [rsp+220h] [rbp+118h] BYREF
  int *v200; // [rsp+240h] [rbp+138h]
  __int64 v201; // [rsp+248h] [rbp+140h]
  struct _EVENT_DATA_DESCRIPTOR v202; // [rsp+250h] [rbp+148h] BYREF
  int *v203; // [rsp+270h] [rbp+168h]
  __int64 v204; // [rsp+278h] [rbp+170h]
  struct _EVENT_DATA_DESCRIPTOR v205; // [rsp+280h] [rbp+178h] BYREF
  __int64 *v206; // [rsp+2A0h] [rbp+198h]
  __int64 v207; // [rsp+2A8h] [rbp+1A0h]
  _BYTE KeyValueInformation[12]; // [rsp+2B0h] [rbp+1A8h] BYREF
  unsigned int v209; // [rsp+2BCh] [rbp+1B4h]
  _BYTE v210[12]; // [rsp+2C8h] [rbp+1C0h] BYREF
  unsigned int v211; // [rsp+2D4h] [rbp+1CCh]

  DestinationString[0] = a4;
  v169 = a1;
  v4 = a4;
  v6 = a1;
  if ( a2 <= 1 )
  {
    v7 = 0;
    v8 = 0;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v173 = 1;
      v40 = PsGetCurrentThreadWin32Thread(v9);
      v172 = v40;
      if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v172 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v158 = v173;
          v183 = 4LL;
          v182 = &v158;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId,
            0LL,
            3u,
            &v181);
        }
      }
    }
    else
    {
      v172 = 0LL;
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
      && v172
      && (*(_DWORD *)(v172 + 48) || *(int *)(v172 + 24) > 0) )
    {
      *(_DWORD *)(v172 + 44) = 1;
      *(GUID *)(v172 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v159 = v173;
          v186 = 4LL;
          v185 = &v159;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId,
            0LL,
            3u,
            &v184);
          v41 = dword_1C0244A70;
        }
        if ( v41 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v160 = v173;
          v189 = 4LL;
          v188 = &v160;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId,
            0LL,
            3u,
            &v187);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v37 = PsGetCurrentProcess(v19, v18),
          ProcessSessionId = PsGetProcessSessionIdEx(v37),
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
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v49, v50);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v55 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v55[2];
            v56 = *v55;
            v55[2] = 0LL;
            if ( !*(_DWORD *)(v56 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53, v54);
            v59 = (PERESOURCE *)GetDomainLockRef(12LL, v51, v53, v54);
            if ( v59 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v58, v57, v60, v61);
            ExReleaseResourceAndLeaveCriticalRegion(*v59);
            HMUnlockObject(*v55);
            tagDomLock::LockExclusive(v59);
            v55 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
          v4 = DestinationString[0];
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    *(_OWORD *)&DestinationString[1] = 0LL;
    ResultLength = 0;
    v156 = gdwPolicyFlags;
    while ( 1 )
    {
      v28 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v156);
      if ( !v28 )
        break;
      RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ThreadUnresponsiveLogTimeout");
      if ( ZwQueryValueKey(
             v28,
             (PUNICODE_STRING)&DestinationString[1],
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
      {
        v7 = v209;
        v156 = 0;
      }
      else if ( !v156 )
      {
        v7 = 200;
      }
      ZwClose(v28);
      if ( !v156 )
        goto LABEL_29;
    }
    v7 = 200;
LABEL_29:
    ValueName = 0LL;
    v162 = 0;
    v157 = gdwPolicyFlags;
    while ( 1 )
    {
      v31 = OpenCacheKeyEx(0LL, 2LL, 0x20019u, &v157);
      if ( !v31 )
        break;
      RtlInitUnicodeString(&ValueName, L"UserCritAcquireDelayLogTimeout");
      if ( ZwQueryValueKey(v31, &ValueName, KeyValuePartialInformation, v210, 0x14u, &v162) >= 0 )
      {
        v8 = v211;
        v157 = 0;
      }
      else if ( !v157 )
      {
        v8 = 500;
      }
      ZwClose(v31);
      if ( !v157 )
        goto LABEL_35;
    }
    v8 = 500;
LABEL_35:
    UserSessionSwitchLeaveCrit(v30, v29, v32, v33);
    if ( v7 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v7;
      W32kEtwInputProcessDelayTimeoutMs = v7;
    }
    if ( v8 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v8;
    if ( a2 == 1 )
    {
      v34 = gliQpcFreq.QuadPart * W32kEtwUserCritAcquireDelayTimeoutus;
      v35 = 3600 * gliQpcFreq.QuadPart;
      v36 = v34 / 1000000;
    }
    else
    {
      v35 = -1LL;
      v36 = -1LL;
    }
    W32kEtwUserCritAcquireDelayTimeoutQPC = v36;
    W32KEtwUserCritTelemetryThrottleQPC = v35;
    W32kEtwEnabledKeyword = v4;
    if ( ((v4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C0243738 - 1) <= 2u
       || (qword_1C0243720 & 0x8000000000040000uLL) == 0
       || (qword_1C0243728 & 0x8000000000040000uLL) != qword_1C0243728)
      && W32kEtwWaitCursorActiveType )
    {
      v63 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v34);
      if ( v63 )
        v63[1] = KeQueryPerformanceCounter(0LL);
      v177 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v176 = 1;
        v64 = PsGetCurrentThreadWin32Thread(v62);
        v175 = v64;
        if ( v64 && (*(int *)(v64 + 24) > 0 || *(_DWORD *)(v175 + 48)) )
        {
          EtwActivityIdControl(3u, &v177);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v163 = v176;
            v192 = 4LL;
            v191 = &v163;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &v177,
              0LL,
              3u,
              &v190);
          }
        }
      }
      else
      {
        v175 = 0LL;
      }
      v65 = 0LL;
      while ( 1 )
      {
        v66 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v66 )
          v65 = *v66;
        v69 = (PVOID)PsGetCurrentProcess(v68, v67);
        if ( v69 )
        {
          if ( v69 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v71, v70) == gpepCSRSS && v65 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v65 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v175
        && (*(_DWORD *)(v175 + 48) || *(int *)(v175 + 24) > 0) )
      {
        *(_DWORD *)(v175 + 44) = 1;
        *(GUID *)(v175 + 28) = v177;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v164 = v176;
            v195 = 4LL;
            v194 = &v164;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &v177,
              0LL,
              3u,
              &v193);
            v72 = dword_1C0244A70;
          }
          if ( v72 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v165 = v176;
            v198 = 4LL;
            v197 = &v165;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &v177,
              0LL,
              3u,
              &v196);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v65;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v75 = PsGetCurrentProcess(v74, v73),
            v76 = PsGetProcessSessionIdEx(v75),
            v77 = PsGetCurrentThreadProcess(),
            v76 == (unsigned int)PsGetProcessSessionIdEx(v77)) )
      {
        v82 = KeGetCurrentThread();
        v83 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          v85 = (__int64 *)PsGetThreadWin32Thread(v82);
          if ( v85 )
            v83 = *v85;
        }
        v86 = PsGetCurrentProcessWin32Process(v84);
        if ( v83 )
        {
          if ( v86 )
          {
            if ( (*(_DWORD *)(v83 + 488) & 0x1000000) != 0 )
            {
              v79 = *(unsigned int *)(v83 + 1232);
              if ( (v79 & 0x80u) == 0LL && (*(_DWORD *)(v86 + 12) & 0x8000) != 0 )
              {
                v89 = (PERESOURCE *)GetDomainLockRef(12LL, v78, v80, v81);
                if ( v89 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v88, v87, v90, v91);
                if ( ExIsResourceAcquiredExclusiveLite(*v89) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v94, v95);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v89);
                while ( 1 )
                {
                  v106 = (__int64 *)gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                  v100 = *v106;
                  v106[2] = 0LL;
                  if ( !*(_DWORD *)(v100 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v97, v96, v98, v99);
                  v103 = (PERESOURCE *)GetDomainLockRef(12LL, v96, v98, v99);
                  if ( v103 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v102, v101, v104, v105);
                  ExReleaseResourceAndLeaveCriticalRegion(*v103);
                  HMUnlockObject(*v106);
                  tagDomLock::LockExclusive(v103);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v89);
              }
            }
          }
        }
      }
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit(v79, v78, v80, v81);
    }
    v6 = v169;
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v109 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v107);
    if ( v109 )
      v109[1] = KeQueryPerformanceCounter(0LL);
    v180 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v179 = 1;
      v110 = PsGetCurrentThreadWin32Thread(v108);
      v178 = v110;
      if ( v110 && (*(int *)(v110 + 24) > 0 || *(_DWORD *)(v178 + 48)) )
      {
        EtwActivityIdControl(3u, &v180);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v166 = v179;
          v201 = 4LL;
          v200 = &v166;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &v180,
            0LL,
            3u,
            &v199);
        }
      }
    }
    else
    {
      v178 = 0LL;
    }
    v111 = 0LL;
    while ( 1 )
    {
      v112 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v112 )
        v111 = *v112;
      v115 = (PVOID)PsGetCurrentProcess(v114, v113);
      if ( v115 )
      {
        if ( v115 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v117, v116) == gpepCSRSS && v111 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v111 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v178
      && (*(_DWORD *)(v178 + 48) || *(int *)(v178 + 24) > 0) )
    {
      *(_DWORD *)(v178 + 44) = 1;
      *(GUID *)(v178 + 28) = v180;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v167 = v179;
          v204 = 4LL;
          v203 = &v167;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &v180,
            0LL,
            3u,
            &v202);
          v118 = dword_1C0244A70;
        }
        if ( v118 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          LODWORD(v168) = v179;
          v207 = 4LL;
          v206 = &v168;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &v180,
            0LL,
            3u,
            &v205);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v111;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v121 = PsGetCurrentProcess(v120, v119),
          v122 = PsGetProcessSessionIdEx(v121),
          v123 = PsGetCurrentThreadProcess(),
          v122 == (unsigned int)PsGetProcessSessionIdEx(v123)) )
    {
      v124 = KeGetCurrentThread();
      v125 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v127 = (__int64 *)PsGetThreadWin32Thread(v124);
        if ( v127 )
          v125 = *v127;
      }
      v128 = PsGetCurrentProcessWin32Process(v126);
      if ( v125
        && v128
        && (*(_DWORD *)(v125 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v125 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v128 + 12) & 0x8000) != 0 )
      {
        v134 = (PERESOURCE *)GetDomainLockRef(12LL, v129, v130, v131);
        if ( v134 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v133, v132, v135, v136);
        if ( ExIsResourceAcquiredExclusiveLite(*v134) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v138, v137, v139, v140);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v134);
        while ( 1 )
        {
          v151 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v145 = *v151;
          v151[2] = 0LL;
          if ( !*(_DWORD *)(v145 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v142, v141, v143, v144);
          v148 = (PERESOURCE *)GetDomainLockRef(12LL, v141, v143, v144);
          if ( v148 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v147, v146, v149, v150);
          ExReleaseResourceAndLeaveCriticalRegion(*v148);
          HMUnlockObject(*v151);
          tagDomLock::LockExclusive(v148);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v134);
      }
    }
    CitEtwEnableCallback(v6, 2u, v4);
    UserSessionSwitchLeaveCrit(v153, v152, v154, v155);
  }
}
