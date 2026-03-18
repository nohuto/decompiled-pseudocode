/*
 * XREFs of ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01824C0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MouseMove @ 0x1C01A97D0 (MouseMove.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01C8084 (ApiSetEditionSetAccessibilityTimer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxMKMoveAccelCursorTimer(struct tagWND *a1, unsigned __int8 *a2, __int64 a3, __int64 a4)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PERESOURCE *v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // rsi
  int v51; // [rsp+38h] [rbp-89h] BYREF
  int v52; // [rsp+3Ch] [rbp-85h] BYREF
  int v53; // [rsp+40h] [rbp-81h] BYREF
  __int64 v54; // [rsp+48h] [rbp-79h]
  unsigned __int8 v55; // [rsp+50h] [rbp-71h]
  GUID ActivityId; // [rsp+54h] [rbp-6Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+68h] [rbp-59h] BYREF
  int *v58; // [rsp+88h] [rbp-39h]
  int v59; // [rsp+90h] [rbp-31h]
  int v60; // [rsp+94h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+98h] [rbp-29h] BYREF
  int *v62; // [rsp+B8h] [rbp-9h]
  int v63; // [rsp+C0h] [rbp-1h]
  int v64; // [rsp+C4h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+C8h] [rbp+7h] BYREF
  int *v66; // [rsp+E8h] [rbp+27h]
  int v67; // [rsp+F0h] [rbp+2Fh]
  int v68; // [rsp+F4h] [rbp+33h]

  if ( (dword_1C0249BA4 & 0x40) == 0 )
    goto LABEL_6;
  v4 = gLockBits | gLatchBits | gPhysModifierState;
  if ( (v4 & 3) != 0 )
  {
    v5 = 1;
    goto LABEL_10;
  }
  if ( (v4 & 0xC) == 0 )
  {
LABEL_6:
    if ( giMouseMoveTable >= (unsigned int)(unsigned __int8)gMouseCursor[0] )
    {
      v5 = (unsigned __int8)byte_1C0249AE2;
      giMouseMoveTable = 1;
      gtmridMKMoveCursor = ApiSetEditionSetAccessibilityTimer(gtmridMKMoveCursor, 50LL, xxxMKMoveConstCursorTimer);
    }
    else
    {
      a2 = byte_1C0249A61;
      v5 = byte_1C0249A61[giMouseMoveTable++];
    }
    if ( !v5 )
      return;
    goto LABEL_10;
  }
  v5 = 4 * (unsigned __int8)byte_1C0249AE2;
LABEL_10:
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)a2, a3, a4);
  MouseMove(v5 * gMKDeltaX, v5 * gMKDeltaY);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v55 = 1;
    v9 = PsGetCurrentThreadWin32Thread(v7);
    v54 = v9;
    if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v54 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v60 = 0;
        v51 = v55;
        v59 = 4;
        v58 = &v51;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v57);
      }
    }
  }
  else
  {
    v54 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v54 && (*(_DWORD *)(v54 + 48) || *(int *)(v54 + 24) > 0) )
  {
    *(_DWORD *)(v54 + 44) = 1;
    *(GUID *)(v54 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v64 = 0;
        v52 = v55;
        v63 = 4;
        v62 = &v52;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v61);
        v17 = dword_1C0244A70;
      }
      if ( v17 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v68 = 0;
        v53 = v55;
        v67 = 4;
        v66 = &v53;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v65);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v10;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v20 = PsGetCurrentProcess(v19, v18),
        ProcessSessionId = PsGetProcessSessionIdEx(v20),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v24 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v24 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
    if ( v24
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v24 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v24 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v28, v29, v30);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34, v35);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v50 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v44 = *v50;
        v50[2] = 0LL;
        if ( !*(_DWORD *)(v44 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
        v47 = (PERESOURCE *)GetDomainLockRef(12LL, v40, v42, v43);
        if ( v47 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v48, v49);
        ExReleaseResourceAndLeaveCriticalRegion(*v47);
        HMUnlockObject(*v50);
        tagDomLock::LockExclusive(v47);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
