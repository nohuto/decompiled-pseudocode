/*
 * XREFs of ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0184F70
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MouseMove @ 0x1C01ABB50 (MouseMove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMKMoveConstCursorTimer(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // al
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v9; // rax
  struct tagTHREADINFO *v10; // rbx
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int ProcessSessionId; // ebx
  __int64 v23; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rsi
  int v53; // [rsp+38h] [rbp-89h] BYREF
  int v54; // [rsp+3Ch] [rbp-85h] BYREF
  int v55; // [rsp+40h] [rbp-81h] BYREF
  __int64 v56; // [rsp+48h] [rbp-79h]
  unsigned __int8 v57; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+68h] [rbp-59h] BYREF
  int *v60; // [rsp+88h] [rbp-39h]
  int v61; // [rsp+90h] [rbp-31h]
  int v62; // [rsp+94h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+98h] [rbp-29h] BYREF
  int *v64; // [rsp+B8h] [rbp-9h]
  int v65; // [rsp+C0h] [rbp-1h]
  int v66; // [rsp+C4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+C8h] [rbp+7h] BYREF
  int *v68; // [rsp+E8h] [rbp+27h]
  int v69; // [rsp+F0h] [rbp+2Fh]
  int v70; // [rsp+F4h] [rbp+33h]

  if ( (dword_1C024BBA4 & 0x40) == 0 )
    goto LABEL_6;
  v4 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v4 & 3) != 0 )
  {
    v5 = 1;
    goto LABEL_7;
  }
  if ( (v4 & 0xC) == 0 )
  {
LABEL_6:
    a2 = giMouseMoveTable % (unsigned int)(unsigned __int8)byte_1C024BAE1;
    v5 = (unsigned __int8)byte_1C024BAE2[a2];
    giMouseMoveTable = a2 + 1;
    if ( !v5 )
      return;
    goto LABEL_7;
  }
  v5 = 4 * (unsigned __int8)byte_1C024BAE2[0];
LABEL_7:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, a3, a4);
  MouseMove(v5 * gMKDeltaX, v5 * gMKDeltaY);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v57 = 1;
    v9 = PsGetCurrentThreadWin32Thread(v7);
    v56 = v9;
    if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v62 = 0;
        v53 = v57;
        v61 = 4;
        v60 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v59);
      }
    }
  }
  else
  {
    v56 = 0LL;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v11 )
      v10 = *v11;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v16, v15) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v10 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v56 )
    {
      v16 = *(unsigned int *)(v56 + 24);
      if ( *(_DWORD *)(v56 + 48) || (int)v16 > 0 )
      {
        *(_DWORD *)(v56 + 44) = 1;
        *(GUID *)(v56 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v66 = 0;
            v54 = v57;
            v65 = 4;
            v64 = &v54;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v63);
            v17 = dword_1C0246A70;
          }
          if ( v17 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v70 = 0;
            v55 = v57;
            v69 = 4;
            v68 = &v55;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v67);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v16);
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v18)
    || (v21 = PsGetCurrentProcess(v20, v19),
        ProcessSessionId = PsGetProcessSessionIdEx(v21),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v23),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v26 = 0LL;
    if ( !IsThreadCrossSessionAttached(v20) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v26 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
    if ( v26
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v26 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v26 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v30, v31, v32);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36, v37);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v52 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v46 = *v52;
        v52[2] = 0LL;
        if ( !*(_DWORD *)(v46 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
        v49 = (PERESOURCE *)GetDomainLockRef(12LL, v42, v44, v45);
        if ( v49 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v48, v47, v50, v51);
        ExReleaseResourceAndLeaveCriticalRegion(*v49);
        HMUnlockObject(*v52);
        tagDomLock::LockExclusive(v49);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
