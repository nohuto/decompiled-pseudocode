/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C000D130
 * Callers:
 *     <none>
 * Callees:
 *     xxxUserChangeDisplaySettings @ 0x1C000D480 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C000F540 (DrvLogDiagDisplayChange.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CheckAccessEx @ 0x1C0095808 (CheckAccessEx.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
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
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct tagKERNELHANDLETABLEENTRY *v41; // rsi
  int v42; // eax
  unsigned int v43; // ebx
  __int64 v45; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *v56; // rdi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  int v61; // [rsp+44h] [rbp-BCh] BYREF
  int v62; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v63[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v66; // [rsp+68h] [rbp-98h]
  GUID v67; // [rsp+6Ch] [rbp-94h] BYREF
  _QWORD v68[10]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+D0h] [rbp-30h] BYREF
  int *v70; // [rsp+F0h] [rbp-10h]
  __int64 v71; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+100h] [rbp+0h] BYREF
  int *v73; // [rsp+120h] [rbp+20h]
  __int64 v74; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+130h] [rbp+30h] BYREF
  int *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]

  v64 = a4;
  v7 = a4;
  memset(v68, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v68[1]);
  v63[1] = -1;
  v68[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v68[3]) = 26;
  LOBYTE(v68[6]) = -1;
  v63[0] = 0x2000;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v67 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v66 = 1;
    v48 = PsGetCurrentThreadWin32Thread();
    v65 = v48;
    if ( v48 && (*(int *)(v48 + 24) > 0 || *(_DWORD *)(v65 + 48)) )
    {
      EtwActivityIdControl(3u, &v67);
      if ( (unsigned int)dword_1C0246A70 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v49, v50) )
        {
          v60 = v66;
          v71 = 4LL;
          v70 = &v60;
          tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E87, (int)&v67, 0, 3u, &v69);
        }
      }
    }
  }
  else
  {
    v65 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v65 && (*(_DWORD *)(v65 + 48) || *(int *)(v65 + 24) > 0) )
  {
    *(_DWORD *)(v65 + 44) = 1;
    *(GUID *)(v65 + 28) = v67;
    if ( (unsigned int)dword_1C0246A70 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, (unsigned int)dword_1C0246A70, v16) )
      {
        v61 = v66;
        v74 = 4LL;
        v73 = &v61;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E30, (int)&v67, 0, 3u, &v72);
        v51 = (unsigned int)dword_1C0246A70;
      }
      if ( (unsigned int)v51 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 0x2000LL, v51, v52) )
      {
        v62 = v66;
        v77 = 4LL;
        v76 = &v62;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0246A70, (int)&dword_1C0213E5D, (int)&v67, 0, 3u, &v75);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v45 = PsGetCurrentProcess(v18, v17),
        ProcessSessionId = PsGetProcessSessionIdEx(v45),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v20 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
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
        if ( (*(_DWORD *)(v20 + 480) & 0x1000000) != 0 )
        {
          v27 = *(unsigned int *)(v20 + 1224);
          if ( (v27 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v31, v32);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35, v36);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v41 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v41 + 2);
                v53 = *(_QWORD *)v41;
                *((_QWORD *)v41 + 2) = 0LL;
                if ( !*(_DWORD *)(v53 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
                v56 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v56 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57, v58);
                ExReleaseResourceAndLeaveCriticalRegion(*v56);
                HMUnlockObject(*(_QWORD *)v41);
                tagDomLock::LockExclusive((tagDomLock *)v56);
                v41 = gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = v64;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  if ( gbVideoInitialized )
  {
    if ( (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0 )
      v42 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL) + 24LL) & 0x10;
    else
      v42 = 0;
    if ( (v42 || !(unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 52) + 880LL, v63, 0LL)) && a3 != 34 )
    {
      v59 = 5LL;
LABEL_68:
      v43 = -1;
      UserSetLastError(v59);
      goto LABEL_35;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v59 = 87LL;
      goto LABEL_68;
    }
    DrvLogDiagDisplayChange(0LL, 8LL);
    v43 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, v7, 1, v68);
  }
  else
  {
    v43 = -1;
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v27);
  return v43;
}
