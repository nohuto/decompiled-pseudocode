/*
 * XREFs of ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C0047760
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00479E8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     IsUserResetPointerSupported @ 0x1C0047B38 (IsUserResetPointerSupported.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DxgkEngSetDisplayModeCallback(struct _LUID a1, unsigned int a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  LARGE_INTEGER *v4; // rbx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct tagKERNELHANDLETABLEENTRY *v24; // rsi
  __int64 v25; // rcx
  __int64 v27; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  int v38; // [rsp+30h] [rbp-89h] BYREF
  int v39; // [rsp+34h] [rbp-85h] BYREF
  int v40; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-7Dh]
  struct _LUID v42; // [rsp+40h] [rbp-79h] BYREF
  __int64 v43; // [rsp+48h] [rbp-71h]
  unsigned __int8 v44; // [rsp+50h] [rbp-69h]
  GUID ActivityId; // [rsp+54h] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+68h] [rbp-51h] BYREF
  int *v47; // [rsp+88h] [rbp-31h]
  int v48; // [rsp+90h] [rbp-29h]
  int v49; // [rsp+94h] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+98h] [rbp-21h] BYREF
  int *v51; // [rsp+B8h] [rbp-1h]
  int v52; // [rsp+C0h] [rbp+7h]
  int v53; // [rsp+C4h] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+C8h] [rbp+Fh] BYREF
  int *v55; // [rsp+E8h] [rbp+2Fh]
  int v56; // [rsp+F0h] [rbp+37h]
  int v57; // [rsp+F4h] [rbp+3Bh]

  v2 = a2;
  v41 = a2;
  v42 = a1;
  v4 = (LARGE_INTEGER *)((__int64 (__fastcall *)(_QWORD))PsGetCurrentThreadWin32Thread)(a1);
  if ( v4 )
    v4[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v44 = 1;
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v3);
    v43 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread && (*(int *)(CurrentThreadWin32Thread + 24) > 0 || *(_DWORD *)(v43 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v31, v32) )
        {
          v49 = 0;
          v38 = v44;
          v48 = 4;
          v47 = &v38;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v46);
        }
      }
    }
  }
  else
  {
    v43 = 0LL;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v6 )
      v5 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8, v7);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v5 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v5 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v43 && (*(_DWORD *)(v43 + 48) || *(int *)(v43 + 24) > 0) )
  {
    *(_DWORD *)(v43 + 44) = 1;
    *(GUID *)(v43 + 28) = ActivityId;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v12) )
      {
        v53 = 0;
        v39 = v44;
        v52 = 4;
        v51 = &v39;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &ActivityId,
          0LL,
          3u,
          &v50);
        v33 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v33 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v33, v34) )
      {
        v57 = 0;
        v40 = v44;
        v56 = 4;
        v55 = &v40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &ActivityId,
          0LL,
          3u,
          &v54);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v27 = PsGetCurrentProcess(v14, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(v27),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v17);
    if ( v16
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v16 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v16 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v24 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v24 + 2);
          v35 = *(_QWORD *)v24;
          *((_QWORD *)v24 + 2) = 0LL;
          if ( !*(_DWORD *)(v35 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
          v37 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v37 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
          ExReleaseResourceAndLeaveCriticalRegion(*v37);
          HMUnlockObject(*(_QWORD *)v24);
          tagDomLock::LockExclusive((tagDomLock *)v37);
          v24 = gpducstulHead;
        }
        while ( gpducstulHead );
        v2 = v41;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( (int)IsUserResetPointerSupported() >= 0 && qword_1C0256EF8 )
    qword_1C0256EF8();
  DrvUpdatePDevForWDDMVidPnSource(&v42, v2);
  UserSessionSwitchLeaveCrit(v25);
  return 0LL;
}
