/*
 * XREFs of xxxUserProcessCallout @ 0x1C004E310
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C0007E4C (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     DestroyCacheDC @ 0x1C0020B80 (DestroyCacheDC.c)
 *     UserJobCallout @ 0x1C002A448 (UserJobCallout.c)
 *     isInputVirtualizationEnabled @ 0x1C0036AA0 (isInputVirtualizationEnabled.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     DestroyProcessInfo @ 0x1C00620F8 (DestroyProcessInfo.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C0098A58 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     xxxInitProcessInfo @ 0x1C00BFFB4 (xxxInitProcessInfo.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *a1, PEPROCESS *a2)
{
  struct tagTHREADINFO *v2; // rdi
  PEPROCESS *v3; // rbx
  const union _LARGE_INTEGER *v5; // rcx
  int v6; // eax
  int inited; // r14d
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  struct _W32PROCESS *v31; // rdi
  int v32; // edx
  const union _LARGE_INTEGER *v34; // rcx
  __int64 v35; // rcx
  LARGE_INTEGER *v36; // rbx
  char v37; // r15
  struct tagTHREADINFO **v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  PVOID v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct _KTHREAD *v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // esi
  int v59; // eax
  __int64 v60; // rdx
  InputExtensibilityCallout *v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  int v64; // ecx
  char *i; // rax
  __int64 ProcessJob; // rax
  __int64 v67; // rbx
  struct _ERESOURCE *JobLock; // rax
  struct _ERESOURCE *v69; // rax
  __int64 v70; // rdx
  int v71; // r8d
  __int64 *v72; // rdi
  __int64 *v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v79; // rax
  int v80; // ebx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  PERESOURCE *DomainLockRef; // rbx
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
  __int64 v107; // rax
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  PERESOURCE *v114; // rbx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  PERESOURCE *v128; // rdi
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 *v131; // rsi
  int v132; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v133; // [rsp+34h] [rbp-CCh] BYREF
  int v134; // [rsp+38h] [rbp-C8h] BYREF
  int v135; // [rsp+3Ch] [rbp-C4h] BYREF
  int v136; // [rsp+40h] [rbp-C0h] BYREF
  int v137; // [rsp+44h] [rbp-BCh] BYREF
  int v138; // [rsp+48h] [rbp-B8h]
  int v139; // [rsp+4Ch] [rbp-B4h] BYREF
  int v140; // [rsp+50h] [rbp-B0h] BYREF
  int v141; // [rsp+54h] [rbp-ACh] BYREF
  struct _W32PROCESS *v142; // [rsp+58h] [rbp-A8h]
  PACCESS_TOKEN PrimaryToken; // [rsp+60h] [rbp-A0h]
  __int64 v144; // [rsp+68h] [rbp-98h]
  int v145; // [rsp+70h] [rbp-90h]
  int v146; // [rsp+74h] [rbp-8Ch]
  __int64 v147; // [rsp+78h] [rbp-88h]
  __int64 v148; // [rsp+80h] [rbp-80h]
  unsigned __int8 v149; // [rsp+88h] [rbp-78h]
  GUID ActivityId; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v151; // [rsp+A0h] [rbp-60h]
  unsigned __int8 v152; // [rsp+A8h] [rbp-58h]
  GUID v153; // [rsp+ACh] [rbp-54h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v154; // [rsp+C0h] [rbp-40h] BYREF
  int *v155; // [rsp+E0h] [rbp-20h]
  __int64 v156; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v157; // [rsp+F0h] [rbp-10h] BYREF
  int *v158; // [rsp+110h] [rbp+10h]
  int v159; // [rsp+118h] [rbp+18h]
  int v160; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v161; // [rsp+120h] [rbp+20h] BYREF
  int *v162; // [rsp+140h] [rbp+40h]
  int v163; // [rsp+148h] [rbp+48h]
  int v164; // [rsp+14Ch] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v165; // [rsp+150h] [rbp+50h] BYREF
  int *v166; // [rsp+170h] [rbp+70h]
  __int64 v167; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v168; // [rsp+180h] [rbp+80h] BYREF
  int *v169; // [rsp+1A0h] [rbp+A0h]
  int v170; // [rsp+1A8h] [rbp+A8h]
  int v171; // [rsp+1ACh] [rbp+ACh]
  struct _EVENT_DATA_DESCRIPTOR v172; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v173; // [rsp+1D0h] [rbp+D0h]
  int v174; // [rsp+1D8h] [rbp+D8h]
  int v175; // [rsp+1DCh] [rbp+DCh]

  v2 = 0LL;
  v142 = a1;
  v3 = a2;
  if ( a2 )
  {
    v5 = &WPP_658ee5f6f19939820aaea989098c75e5_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        14,
        30,
        (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
    }
    v6 = *((_DWORD *)a1 + 3);
    inited = 1073741851;
    v134 = 0;
    v138 = v6 & 0x8000;
    v133 = 0;
    PrimaryToken = 0LL;
    v132 = 0;
    if ( (v6 & 0x8000) == 0 )
    {
      PrimaryToken = PsReferencePrimaryToken(*v3);
      if ( PrimaryToken )
        inited = UserProcessImmersiveType(
                   (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)v3,
                   PrimaryToken,
                   (enum _PROCESS_IMMERSIVE_TYPE *)&v134,
                   &v133,
                   &v132);
      else
        inited = -1073741700;
      v2 = 0LL;
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v149 = 1;
      v82 = PsGetCurrentThreadWin32Thread(v8);
      v148 = v82;
      if ( v82 && (*(int *)(v82 + 24) > 0 || *(_DWORD *)(v148 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v83, v84) )
          {
            v135 = v149;
            v156 = 4LL;
            v155 = &v135;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E87,
              (int)&ActivityId,
              0,
              3u,
              &v154);
          }
        }
      }
    }
    else
    {
      v148 = 0LL;
    }
    while ( 1 )
    {
      v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v10 )
        v2 = *v10;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v148
      && (*(_DWORD *)(v148 + 48) || *(int *)(v148 + 24) > 0) )
    {
      *(_DWORD *)(v148 + 44) = 1;
      *(GUID *)(v148 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v16) )
        {
          v160 = 0;
          v136 = v149;
          v159 = 4;
          v158 = &v136;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0244A70,
            (int)&dword_1C0211E30,
            (int)&ActivityId,
            0,
            3u,
            &v157);
          v85 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v85 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v85, v86) )
        {
          v164 = 0;
          v137 = v149;
          v163 = 4;
          v162 = &v137;
          tlgWriteTransfer_EtwWriteTransfer(
            (int)&dword_1C0244A70,
            (int)&dword_1C0211E5D,
            (int)&ActivityId,
            0,
            3u,
            &v161);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v76 = PsGetCurrentProcess(v18, v17),
          ProcessSessionId = PsGetProcessSessionIdEx(v76),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v20 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v20 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22, v21, v23, v24);
      if ( v20 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v20 + 488) & 0x1000000) != 0 )
          {
            v28 = *(unsigned int *)(v20 + 1232);
            if ( (v28 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v27, v29, v30);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v88, v87, v90, v91);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v94, v95);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
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
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    v31 = v142;
    if ( !v138 && inited >= 0 )
      inited = xxxInitProcessInfo(v142, PrimaryToken, v132);
    if ( PrimaryToken )
      PsDereferencePrimaryToken(PrimaryToken);
    if ( inited < 0 )
      DestroyProcessInfo(v31);
    UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
    if ( !inited )
    {
      ProcessJob = PsGetProcessJob(*(_QWORD *)v31);
      v67 = ProcessJob;
      if ( ProcessJob )
      {
        if ( (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
        {
          v146 = 0;
          JobLock = (struct _ERESOURCE *)PsGetJobLock(v67);
          ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
          v147 = *(_QWORD *)v31;
          v144 = v67;
          v145 = 1;
          inited = UserJobCallout();
          v69 = (struct _ERESOURCE *)PsGetJobLock(v67);
          ExReleaseResourceAndLeaveCriticalRegion(v69);
        }
      }
    }
  }
  else
  {
    v34 = &WPP_658ee5f6f19939820aaea989098c75e5_Traceguids;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        14,
        31,
        (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
    }
    v36 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v34);
    if ( v36 )
      v36[1] = KeQueryPerformanceCounter(0LL);
    v153 = 0LL;
    v37 = 1;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v152 = 1;
      v107 = PsGetCurrentThreadWin32Thread(v35);
      v151 = v107;
      if ( v107 && (*(int *)(v107 + 24) > 0 || *(_DWORD *)(v151 + 48)) )
      {
        EtwActivityIdControl(3u, &v153);
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v108, v109) )
          {
            v139 = v152;
            v167 = 4LL;
            v166 = &v139;
            tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E87, (int)&v153, 0, 3u, &v165);
          }
        }
      }
    }
    else
    {
      v151 = 0LL;
    }
    while ( 1 )
    {
      v38 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v38 )
        v2 = *v38;
      v41 = (PVOID)PsGetCurrentProcess(v40, v39);
      if ( v41 )
      {
        if ( v41 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v43, v42) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v2 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v151
      && (*(_DWORD *)(v151 + 48) || *(int *)(v151 + 24) > 0) )
    {
      *(_DWORD *)(v151 + 44) = 1;
      *(GUID *)(v151 + 28) = v153;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v44) )
        {
          v171 = 0;
          v140 = v152;
          v170 = 4;
          v169 = &v140;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E30, (int)&v153, 0, 3u, &v168);
          v110 = (unsigned int)dword_1C0244A70;
        }
        if ( (unsigned int)v110 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v110, v111) )
        {
          v175 = 0;
          v141 = v152;
          v174 = 4;
          v173 = &v141;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0244A70, (int)&dword_1C0211E5D, (int)&v153, 0, 3u, &v172);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v2;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v79 = PsGetCurrentProcess(v46, v45),
          v80 = PsGetProcessSessionIdEx(v79),
          v81 = PsGetCurrentThreadProcess(),
          v80 == (unsigned int)PsGetProcessSessionIdEx(v81)) )
    {
      v47 = KeGetCurrentThread();
      v48 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v53 = (__int64 *)PsGetThreadWin32Thread(v47);
        if ( v53 )
          v48 = *v53;
      }
      v54 = PsGetCurrentProcessWin32Process(v50, v49, v51, v52);
      if ( v48
        && v54
        && (*(_DWORD *)(v48 + 488) & 0x1000000) != 0
        && (*(_DWORD *)(v48 + 1232) & 0x80u) == 0
        && (*(_DWORD *)(v54 + 12) & 0x8000) != 0 )
      {
        v114 = (PERESOURCE *)GetDomainLockRef(12LL, v55, v56, v57);
        if ( v114 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v113, v112, v115, v116);
        if ( ExIsResourceAcquiredExclusiveLite(*v114) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v118, v117, v119, v120);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v114);
        while ( 1 )
        {
          v131 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v125 = *v131;
          v131[2] = 0LL;
          if ( !*(_DWORD *)(v125 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v122, v121, v123, v124);
          v128 = (PERESOURCE *)GetDomainLockRef(12LL, v121, v123, v124);
          if ( v128 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v127, v126, v129, v130);
          ExReleaseResourceAndLeaveCriticalRegion(*v128);
          HMUnlockObject(*v131);
          tagDomLock::LockExclusive(v128);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v114);
      }
    }
    if ( gpepCSRSS && *(PVOID *)a1 == gpepCSRSS )
    {
      if ( isInputVirtualizationEnabled() && gpkeIVThreadShutdown )
        KeSetEvent(gpkeIVThreadShutdown, 1, 0);
    }
    else
    {
      v37 = 0;
    }
    v58 = -1073741637;
    if ( *(_QWORD *)a1 && PsGetProcessJob(*(_QWORD *)a1) )
    {
      v59 = qword_1C0250958 ? qword_1C0250958() : -1073741637;
      if ( v59 >= 0 && qword_1C0250960 )
        qword_1C0250960(a1);
    }
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v64 = giheLast;
      for ( i = (char *)qword_1C0248D48 + 32 * (unsigned int)giheLast; i > (char *)qword_1C0248D48 && !i[24]; i -= 32 )
        giheLast = --v64;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      v72 = (__int64 *)(gpDispInfo + 24);
      v73 = *(__int64 **)(gpDispInfo + 24);
      if ( v73 )
      {
        do
        {
          v74 = (__int64)v73;
          if ( (v73[8] & 0x400000) != 0 )
          {
            DestroyCacheDC(v72, v73[1]);
            v74 = *v72;
          }
          v75 = v74;
          if ( v73 == (__int64 *)v74 )
            v75 = *v73;
          else
            v73 = v72;
          v72 = v73;
          v73 = (__int64 *)v75;
        }
        while ( v75 );
      }
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v70, v71);
      if ( qword_1C024F980 )
        v58 = qword_1C024F980();
      if ( v58 >= 0 && qword_1C024F988 )
        qword_1C024F988(0LL);
      if ( v37 && gpInputExtensibilityCallout )
        InputExtensibilityCallout::CloseCoreMsgPort(v61);
    }
    inited = 0;
    UserSessionSwitchLeaveCrit((__int64)v61, v60, v62, v63);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v32) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v32,
      14,
      32,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  }
  return (unsigned int)inited;
}
