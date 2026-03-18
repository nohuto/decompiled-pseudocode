/*
 * XREFs of UserFindBaseWindowHandle @ 0x1C013DAF4
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C0033870 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0007134 (LockProcessByClientId.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00ADEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C013D640 (LookForMatchingBaseWindowPHE.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserFindBaseWindowHandle(PDEVICE_OBJECT a1, int *a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  void *v5; // rdx
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
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  int v53; // edx
  __int64 ProcessWin32Process; // rax
  char *v55; // rbx
  int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v62; // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v66; // [rsp+58h] [rbp-A8h]
  _BYTE v67[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+70h] [rbp-90h]
  unsigned __int8 v69; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+90h] [rbp-70h] BYREF
  int *v72; // [rsp+B0h] [rbp-50h]
  __int64 v73; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+C0h] [rbp-40h] BYREF
  int *v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+F0h] [rbp-10h] BYREF
  int *v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]

  v66 = a1;
  v3 = (__int64)a1;
  v4 = 0LL;
  v5 = &WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        11,
        16,
        (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
    }
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v69 = 1;
    v8 = PsGetCurrentThreadWin32Thread(v6);
    v68 = v8;
    if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v68 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v62 = v69;
        v73 = 4LL;
        v72 = &v62;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v71);
      }
    }
  }
  else
  {
    v68 = 0LL;
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
    if ( v68 )
    {
      v15 = *(unsigned int *)(v68 + 24);
      if ( *(_DWORD *)(v68 + 48) || (int)v15 > 0 )
      {
        *(_DWORD *)(v68 + 44) = 1;
        *(GUID *)(v68 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v63 = v69;
            v76 = 4LL;
            v75 = &v63;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v74);
            v16 = dword_1C0246A70;
          }
          if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v64 = v69;
            v79 = 4LL;
            v78 = &v64;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v77);
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
      && (*(_DWORD *)(v25 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v29, v30, v31);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35, v36);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v45 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v45[2];
          v46 = *v45;
          v45[2] = 0LL;
          if ( !*(_DWORD *)(v46 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
          v49 = (PERESOURCE *)GetDomainLockRef(12LL, v41, v43, v44);
          if ( v49 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v50, v51);
          ExReleaseResourceAndLeaveCriticalRegion(*v49);
          HMUnlockObject(*v45);
          tagDomLock::LockExclusive(v49);
          v45 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = (__int64)v66;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gWndLock, 0LL);
  v52 = *a2;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v52, &Object) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    LOBYTE(v53) = 2;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v53,
      11,
      18,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
      *a2);
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v55 = LookForMatchingBaseWindowPHE(v3, ProcessWin32Process, 0LL);
    ObfDereferenceObject(Object);
    if ( v55 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v67);
      v4 = **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v55 - (char *)qword_1C024AD48) >> 5));
      goto LABEL_67;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qq(
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        5u,
        0xBu,
        0x11u,
        (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
        v3,
        *a2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v56) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v56,
      11,
      19,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
  }
LABEL_67:
  ExReleasePushLockSharedEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v58, v57, v59, v60);
  return v4;
}
