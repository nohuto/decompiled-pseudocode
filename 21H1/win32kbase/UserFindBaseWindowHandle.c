/*
 * XREFs of UserFindBaseWindowHandle @ 0x1C0143E44
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C00B2CE0 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     LockProcessByClientId @ 0x1C0038134 (LockProcessByClientId.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C0143990 (LookForMatchingBaseWindowPHE.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 *v33; // r14
  __int64 v34; // rax
  __int64 v35; // rcx
  PERESOURCE *v36; // rdi
  __int64 v37; // rcx
  int v38; // edx
  __int64 ProcessWin32Process; // rax
  char *v40; // rbx
  int v41; // edx
  __int64 v42; // rcx
  int v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  int v46; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v48; // [rsp+58h] [rbp-A8h]
  _BYTE v49[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h]
  unsigned __int8 v51; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+90h] [rbp-70h] BYREF
  int *v54; // [rsp+B0h] [rbp-50h]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+C0h] [rbp-40h] BYREF
  int *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+F0h] [rbp-10h] BYREF
  int *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]

  v48 = a1;
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
    v51 = 1;
    v8 = PsGetCurrentThreadWin32Thread(v6);
    v50 = v8;
    if ( v8 && (*(int *)(v8 + 24) > 0 || *(_DWORD *)(v50 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v44 = v51;
        v55 = 4LL;
        v54 = &v44;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v53);
      }
    }
  }
  else
  {
    v50 = 0LL;
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
    if ( v50 )
    {
      v15 = *(unsigned int *)(v50 + 24);
      if ( *(_DWORD *)(v50 + 48) || (int)v15 > 0 )
      {
        *(_DWORD *)(v50 + 44) = 1;
        *(GUID *)(v50 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v45 = v51;
            v58 = 4LL;
            v57 = &v45;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v56);
            v16 = dword_1C024C960;
          }
          if ( v16 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v46 = v51;
            v61 = 4LL;
            v60 = &v46;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v59);
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
      v33 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v33[2];
          v34 = *v33;
          v33[2] = 0LL;
          if ( !*(_DWORD *)(v34 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
          v36 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v36 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
          ExReleaseResourceAndLeaveCriticalRegion(*v36);
          HMUnlockObject(*v33);
          tagDomLock::LockExclusive(v36);
          v33 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v3 = (__int64)v48;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gWndLock, 0LL);
  v37 = *a2;
  Object = 0LL;
  if ( (int)LockProcessByClientId(v37, &Object) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    LOBYTE(v38) = 2;
    WPP_RECORDER_SF_q(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v38,
      11,
      18,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids,
      *a2);
  }
  else
  {
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    v40 = LookForMatchingBaseWindowPHE(v3, ProcessWin32Process, 0LL);
    ObfDereferenceObject(Object);
    if ( v40 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v49);
      v4 = **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v40 - (char *)qword_1C0250D48) >> 5));
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
    LOBYTE(v41) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v41,
      11,
      19,
      (__int64)&WPP_9eff1062cb073ef34da0a1e13f35e357_Traceguids);
  }
LABEL_67:
  ExReleasePushLockSharedEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v42);
  return v4;
}
