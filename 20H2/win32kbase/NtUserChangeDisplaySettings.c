/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C00B33E0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CheckAccessEx @ 0x1C0056E08 (CheckAccessEx.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserChangeDisplaySettings @ 0x1C0069850 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C00B3730 (DrvLogDiagDisplayChange.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(_OWORD *a1, _WORD *a2, unsigned int a3, void *a4)
{
  void *v7; // r13
  __int64 v8; // rcx
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
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rsi
  struct tagTHREADINFO *v43; // rdx
  int v44; // eax
  unsigned int v45; // ebx
  __int64 v47; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v50; // rax
  unsigned int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  PERESOURCE *v55; // rdi
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  int v60; // [rsp+44h] [rbp-BCh] BYREF
  int v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v65; // [rsp+68h] [rbp-98h]
  GUID v66; // [rsp+6Ch] [rbp-94h] BYREF
  _QWORD v67[10]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+D0h] [rbp-30h] BYREF
  int *v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+100h] [rbp+0h] BYREF
  int *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+130h] [rbp+30h] BYREF
  int *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]

  v63 = a4;
  v7 = a4;
  memset(v67, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v67[1]);
  v62[1] = -1;
  v67[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v67[3]) = 26;
  LOBYTE(v67[6]) = -1;
  v62[0] = 0x2000;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v66 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v65 = 1;
    v50 = PsGetCurrentThreadWin32Thread(v9);
    v64 = v50;
    if ( v50 && (*(int *)(v50 + 24) > 0 || *(_DWORD *)(v64 + 48)) )
    {
      EtwActivityIdControl(3u, &v66);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v59 = v65;
        v70 = 4LL;
        v69 = &v59;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &v66,
          0LL,
          3u,
          &v68);
      }
    }
  }
  else
  {
    v64 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v64 && (*(_DWORD *)(v64 + 48) || *(int *)(v64 + 24) > 0) )
  {
    *(_DWORD *)(v64 + 44) = 1;
    *(GUID *)(v64 + 28) = v66;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = v65;
        v73 = 4LL;
        v72 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &v66,
          0LL,
          3u,
          &v71);
        v51 = dword_1C0244A70;
      }
      if ( v51 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v61 = v65;
        v76 = 4LL;
        v75 = &v61;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &v66,
          0LL,
          3u,
          &v74);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v47 = PsGetCurrentProcess(v19, v18),
        ProcessSessionId = PsGetProcessSessionIdEx(v47),
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
    if ( v21 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v21 + 488) & 0x1000000) != 0 )
        {
          v26 = *(unsigned int *)(v21 + 1232);
          if ( (v26 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v27, v28);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v32, v33);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36, v37);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v42 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v42[2];
                v52 = *v42;
                v42[2] = 0LL;
                if ( !*(_DWORD *)(v52 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
                v55 = (PERESOURCE *)GetDomainLockRef(12LL, v38, v40, v41);
                if ( v55 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v56, v57);
                ExReleaseResourceAndLeaveCriticalRegion(*v55);
                HMUnlockObject(*v42);
                tagDomLock::LockExclusive(v55);
                v42 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = v63;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    v43 = gptiCurrent;
    if ( (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0 )
      v44 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 0x10;
    else
      v44 = 0;
    if ( (v44 || !CheckAccessEx((int *)(*((_QWORD *)gptiCurrent + 53) + 880LL), v62, 0)) && a3 != 34 )
    {
      v58 = 5LL;
LABEL_68:
      v45 = -1;
      UserSetLastError(v58, (__int64)v43);
      goto LABEL_35;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v58 = 87LL;
      goto LABEL_68;
    }
    DrvLogDiagDisplayChange(0LL, 8LL);
    v45 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, v7, UserMode, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v67);
  }
  else
  {
    v45 = -1;
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v26, v25, v27, v28);
  return v45;
}
