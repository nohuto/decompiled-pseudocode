/*
 * XREFs of ?xxxMKMouseMove@@YAHG@Z @ 0x1C0184490
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
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01CA404 (ApiSetEditionSetAccessibilityTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxMKMouseMove(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rax
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rsi
  void (__fastcall *v54)(struct tagWND *, unsigned int, unsigned __int64, __int64); // r8
  int v56; // [rsp+38h] [rbp-89h] BYREF
  int v57; // [rsp+3Ch] [rbp-85h] BYREF
  int v58; // [rsp+40h] [rbp-81h] BYREF
  __int64 v59; // [rsp+48h] [rbp-79h]
  unsigned __int8 v60; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+68h] [rbp-59h] BYREF
  int *v63; // [rsp+88h] [rbp-39h]
  __int64 v64; // [rsp+90h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+98h] [rbp-29h] BYREF
  int *v66; // [rsp+B8h] [rbp-9h]
  __int64 v67; // [rsp+C0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+C8h] [rbp+7h] BYREF
  int *v69; // [rsp+E8h] [rbp+27h]
  __int64 v70; // [rsp+F0h] [rbp+2Fh]

  if ( (gdwPUDFlags & 0x2000) == 0 || !gtmridMKMoveCursor )
  {
    gMKDeltaX = (char)a1;
    gMKDeltaY = SHIBYTE(a1);
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, a2, a3, a4);
    v4 = gMKDeltaX;
    v5 = gMKDeltaY;
    if ( (dword_1C024BBA4 & 0x40) != 0
      && (((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) & 0xC) != 0 )
    {
      v6 = 4 * (unsigned __int8)byte_1C024BAE2;
      v4 = v6 * gMKDeltaX;
      v5 = v6 * gMKDeltaY;
    }
    MouseMove(v4, v5);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v60 = 1;
      v10 = PsGetCurrentThreadWin32Thread(v8);
      v59 = v10;
      if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v56 = v60;
          v64 = 4LL;
          v63 = &v56;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v62);
        }
      }
    }
    else
    {
      v59 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v59 )
      {
        v17 = *(unsigned int *)(v59 + 24);
        if ( *(_DWORD *)(v59 + 48) || (int)v17 > 0 )
        {
          *(_DWORD *)(v59 + 44) = 1;
          *(GUID *)(v59 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v57 = v60;
              v67 = 4LL;
              v66 = &v57;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &ActivityId,
                0LL,
                3u,
                &v65);
              v18 = dword_1C0246A70;
            }
            if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v58 = v60;
              v70 = 4LL;
              v69 = &v58;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &ActivityId,
                0LL,
                3u,
                &v68);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v17);
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v19)
      || (v22 = PsGetCurrentProcess(v21, v20),
          ProcessSessionId = PsGetProcessSessionIdEx(v22),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v27 = 0LL;
      if ( !IsThreadCrossSessionAttached(v21) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v27 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
      if ( v27
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v27 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v27 + 1224) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v31, v32, v33);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37, v38);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v53 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v47 = *v53;
          v53[2] = 0LL;
          if ( !*(_DWORD *)(v47 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
          v50 = (PERESOURCE *)GetDomainLockRef(12LL, v43, v45, v46);
          if ( v50 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
          ExReleaseResourceAndLeaveCriticalRegion(*v50);
          HMUnlockObject(*v53);
          tagDomLock::LockExclusive(v50);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    if ( !HIDWORD(xmmword_1C024BBCC) || (gdwPUDFlags & 0x2000) != 0 )
    {
      v54 = xxxMKMoveConstCursorTimer;
      if ( gMouseCursor[0] )
        v54 = xxxMKMoveAccelCursorTimer;
      giMouseMoveTable = 0;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, v54);
    }
  }
  return 0LL;
}
