/*
 * XREFs of NtUserChangeDisplaySettings @ 0x1C003E7B0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     xxxUserChangeDisplaySettings @ 0x1C003EB00 (xxxUserChangeDisplaySettings.c)
 *     DrvLogDiagDisplayChange @ 0x1C003F1F0 (DrvLogDiagDisplayChange.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     CheckAccessEx @ 0x1C00713D8 (CheckAccessEx.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserChangeDisplaySettings(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // r13
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
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct tagKERNELHANDLETABLEENTRY *v31; // rsi
  int v32; // eax
  unsigned int v33; // ebx
  __int64 v35; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  PERESOURCE *v45; // rdi
  __int64 v46; // rcx
  int v47; // [rsp+40h] [rbp-C0h] BYREF
  int v48; // [rsp+44h] [rbp-BCh] BYREF
  int v49; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v50[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h]
  __int64 v52; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v53; // [rsp+68h] [rbp-98h]
  GUID v54; // [rsp+6Ch] [rbp-94h] BYREF
  _QWORD v55[10]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+D0h] [rbp-30h] BYREF
  int *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+100h] [rbp+0h] BYREF
  int *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+130h] [rbp+30h] BYREF
  int *v63; // [rsp+150h] [rbp+50h]
  __int64 v64; // [rsp+158h] [rbp+58h]

  v51 = a4;
  v7 = a4;
  memset(v55, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v55[1]);
  v50[1] = -1;
  v55[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v55[3]) = 26;
  LOBYTE(v55[6]) = -1;
  v50[0] = 0x2000;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v54 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v53 = 1;
    v38 = PsGetCurrentThreadWin32Thread(v9);
    v52 = v38;
    if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v52 + 48)) )
    {
      EtwActivityIdControl(3u, &v54);
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v39, v40) )
        {
          v47 = v53;
          v58 = 4LL;
          v57 = &v47;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &v54,
            0LL,
            3u,
            &v56);
        }
      }
    }
  }
  else
  {
    v52 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v52 && (*(_DWORD *)(v52 + 48) || *(int *)(v52 + 24) > 0) )
  {
    *(_DWORD *)(v52 + 44) = 1;
    *(GUID *)(v52 + 28) = v54;
    if ( (unsigned int)dword_1C024C960 > 6 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v18) )
      {
        v48 = v53;
        v61 = 4LL;
        v60 = &v48;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199A0,
          &v54,
          0LL,
          3u,
          &v59);
        v41 = (unsigned int)dword_1C024C960;
      }
      if ( (unsigned int)v41 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v41, v42) )
      {
        v49 = v53;
        v64 = 4LL;
        v63 = &v49;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199CD,
          &v54,
          0LL,
          3u,
          &v62);
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
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v23);
    if ( v22 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v22 + 480) & 0x1000000) != 0 )
        {
          v26 = *(unsigned int *)(v22 + 1216);
          if ( (v26 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v31 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v31 + 2);
                v43 = *(_QWORD *)v31;
                *((_QWORD *)v31 + 2) = 0LL;
                if ( !*(_DWORD *)(v43 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
                v45 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v45 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v44);
                ExReleaseResourceAndLeaveCriticalRegion(*v45);
                HMUnlockObject(*(_QWORD *)v31);
                tagDomLock::LockExclusive((tagDomLock *)v45);
                v31 = gpducstulHead;
              }
              while ( gpducstulHead );
              v7 = v51;
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
      v32 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL) + 24LL) & 0x10;
    else
      v32 = 0;
    if ( (v32 || !(unsigned __int8)CheckAccessEx(*((_QWORD *)gptiCurrent + 52) + 880LL, v50, 0LL)) && a3 != 34 )
    {
      v46 = 5LL;
LABEL_68:
      v33 = -1;
      UserSetLastError(v46);
      goto LABEL_35;
    }
    if ( (a3 & 0x8000000) != 0 )
    {
      v46 = 87LL;
      goto LABEL_68;
    }
    DrvLogDiagDisplayChange(0LL, 8LL);
    v33 = xxxUserChangeDisplaySettings(a1, a2, 0LL, a3, v7, 1, v55);
  }
  else
  {
    v33 = -1;
  }
LABEL_35:
  UserSessionSwitchLeaveCrit(v26);
  return v33;
}
