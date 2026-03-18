/*
 * XREFs of ?ivHandleSettingsPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB7D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     UnpackMouseSettings @ 0x1C01B2540 (UnpackMouseSettings.c)
 *     UnpackPenSettings @ 0x1C01B2690 (UnpackPenSettings.c)
 *     UnpackTouchpadSettings @ 0x1C01B27AC (UnpackTouchpadSettings.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivHandleSettingsPacket(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v3; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rax
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  PVOID CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int ProcessSessionId; // ebx
  __int64 v19; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  int v34; // edx
  int v35; // edx
  __int64 v36; // rcx
  int v38; // [rsp+30h] [rbp-89h] BYREF
  int v39; // [rsp+34h] [rbp-85h] BYREF
  int v40; // [rsp+38h] [rbp-81h] BYREF
  int *v41; // [rsp+40h] [rbp-79h]
  __int64 v42; // [rsp+48h] [rbp-71h]
  unsigned __int8 v43; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+68h] [rbp-51h] BYREF
  int *v46; // [rsp+88h] [rbp-31h]
  int v47; // [rsp+90h] [rbp-29h]
  int v48; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+98h] [rbp-21h] BYREF
  int *v50; // [rsp+B8h] [rbp-1h]
  int v51; // [rsp+C0h] [rbp+7h]
  int v52; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+C8h] [rbp+Fh] BYREF
  int *v54; // [rsp+E8h] [rbp+2Fh]
  int v55; // [rsp+F0h] [rbp+37h]
  int v56; // [rsp+F4h] [rbp+3Bh]

  v2 = a2;
  v41 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v43 = 1;
    v5 = PsGetCurrentThreadWin32Thread(v3);
    v42 = v5;
    if ( v5 && (*(int *)(v5 + 24) > 0 || *(_DWORD *)(v42 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v48 = 0;
        v38 = v43;
        v47 = 4;
        v46 = &v38;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v45);
      }
    }
  }
  else
  {
    v42 = 0LL;
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v12, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v42 )
    {
      v12 = *(unsigned int *)(v42 + 24);
      if ( *(_DWORD *)(v42 + 48) || (int)v12 > 0 )
      {
        *(_DWORD *)(v42 + 44) = 1;
        *(GUID *)(v42 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v52 = 0;
            v39 = v43;
            v51 = 4;
            v50 = &v39;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v49);
            v13 = dword_1C024C960;
          }
          if ( v13 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v56 = 0;
            v40 = v43;
            v55 = 4;
            v54 = &v40;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v53);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v12);
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v17 = PsGetCurrentProcess(v16, v15),
        ProcessSessionId = PsGetProcessSessionIdEx(v17),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v19),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v22 = 0LL;
    if ( !IsThreadCrossSessionAttached(v16) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v22 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( v22
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v22 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v22 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v30 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v30[2];
          v31 = *v30;
          v30[2] = 0LL;
          if ( !*(_DWORD *)(v31 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
          v33 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v33 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
          ExReleaseResourceAndLeaveCriticalRegion(*v33);
          HMUnlockObject(*v30);
          tagDomLock::LockExclusive(v33);
          v30 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v41;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  UnpackTouchpadSettings(v2);
  UnpackMouseSettings(v2, v34);
  UnpackPenSettings((__int64)v2, v35);
  UserSessionSwitchLeaveCrit(v36);
  return 1LL;
}
