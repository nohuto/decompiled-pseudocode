/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01C209C
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C0136C20 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C002BC80 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00392DC (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     UpconvertTime @ 0x1C00437E0 (UpconvertTime.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::Extensibility_SynthesizeMouseInput(
        CMouseProcessor *a1,
        __int64 a2,
        char a3,
        _QWORD *a4)
{
  CInputThread *v4; // rsi
  unsigned int CurrentThreadId; // eax
  int v10; // ebx
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // edx
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // cx
  bool v18; // zf
  __int16 v19; // ax
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  unsigned int v24; // edi
  unsigned int v25; // ecx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v30; // rax
  struct tagTHREADINFO *v31; // rbx
  struct tagTHREADINFO **v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  PVOID CurrentProcess; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int ProcessSessionId; // ebx
  __int64 v44; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v51; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  PERESOURCE *v57; // rdi
  __int64 *v58; // rsi
  __int64 result; // rax
  int v60; // [rsp+38h] [rbp-D0h] BYREF
  int v61; // [rsp+3Ch] [rbp-CCh] BYREF
  int v62; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v63; // [rsp+48h] [rbp-C0h]
  __int64 v64; // [rsp+58h] [rbp-B0h]
  __int128 v65; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v66[5]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v67; // [rsp+98h] [rbp-70h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-60h]
  __int64 v69; // [rsp+B8h] [rbp-50h]
  unsigned __int8 v70; // [rsp+C0h] [rbp-48h]
  GUID ActivityId; // [rsp+C4h] [rbp-44h] BYREF
  struct tagPOINT v72; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+138h] [rbp+30h] BYREF
  int *v74; // [rsp+158h] [rbp+50h]
  __int64 v75; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v76; // [rsp+168h] [rbp+60h] BYREF
  int *v77; // [rsp+188h] [rbp+80h]
  __int64 v78; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+198h] [rbp+90h] BYREF
  int *v80; // [rsp+1B8h] [rbp+B0h]
  __int64 v81; // [rsp+1C0h] [rbp+B8h]

  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v10 = *((_DWORD *)v4 + 10);
  v11 = CurrentThreadId;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 != v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  if ( (dword_1C025A5F4 & 1) == 0 )
    dword_1C025A5F4 |= 1u;
  v13 = *(_DWORD *)(a2 + 32);
  v66[0] = 0LL;
  v14 = 256;
  v65 = 0LL;
  if ( v13 || *(_DWORD *)(a2 + 36) )
  {
    v15 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v65) = v13;
    WORD1(v65) = v15;
    LODWORD(v66[0]) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v14 = 258;
  }
  else
  {
    v14 = 264;
  }
  v16 = *(_WORD *)(a2 + 26) & 0xFFF;
  v17 = *(_WORD *)(a2 + 28);
  WORD2(v65) = v16;
  if ( v17 )
  {
    v18 = (v16 & 0xC00) == 0;
    v19 = WORD3(v65);
    if ( !v18 )
      v19 = v17;
    WORD3(v65) = v19;
  }
  v20 = v14 | 0x800;
  if ( (a3 & 2) == 0 )
    v20 = v14;
  v21 = v20 | 0x200;
  if ( (a3 & 8) != 0 )
    v21 = v20;
  v22 = v21 | 0x400;
  if ( (a3 & 1) == 0 )
    v22 = v21;
  v23 = v22 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v23 = v22;
  v24 = v23 | 0x10000;
  if ( (a3 & 0x80) == 0 )
    v24 = v23;
  if ( (a3 & 0x10) != 0 )
    v24 = v24 & 0xFFFFFFF3 | 4;
  v25 = *(_DWORD *)(a2 + 8);
  v26 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v63 + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v63 = 1LL;
  *(_OWORD *)&v66[1] = v63;
  v66[3] = 0LL;
  *(_QWORD *)&v63 = UpconvertTime(v25);
  *((_QWORD *)&v63 + 1) = v26;
  v64 = v26;
  v67 = v63;
  v68 = v26;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
    (__int64)&v72,
    (__int64)&v65,
    &v67,
    v24 | 0x40,
    (__int64)&v66[1],
    a4);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v72, 0LL, 0LL);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v70 = 1;
    v30 = PsGetCurrentThreadWin32Thread(v28);
    v69 = v30;
    if ( v30 && (*(int *)(v30 + 24) > 0 || *(_DWORD *)(v69 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v60 = v70;
        v75 = 4LL;
        v74 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v73);
      }
    }
  }
  else
  {
    v69 = 0LL;
  }
  v31 = 0LL;
  while ( 1 )
  {
    v32 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v32 )
      v31 = *v32;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v34, v33);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v37, v36) == gpepCSRSS && v31 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v31 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v69 )
    {
      v37 = *(unsigned int *)(v69 + 24);
      if ( *(_DWORD *)(v69 + 48) || (int)v37 > 0 )
      {
        *(_DWORD *)(v69 + 44) = 1;
        *(GUID *)(v69 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v61 = v70;
            v78 = 4LL;
            v77 = &v61;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v76);
            v38 = dword_1C024C960;
          }
          if ( v38 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v62 = v70;
            v81 = 4LL;
            v80 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v79);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v37);
  gptiCurrent = v31;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v39)
    || (v42 = PsGetCurrentProcess(v41, v40),
        ProcessSessionId = PsGetProcessSessionIdEx(v42),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v44),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v47 = 0LL;
    if ( !IsThreadCrossSessionAttached(v41) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v47 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v48);
    if ( v47
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v47 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v47 + 1216) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v51);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v53);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v58 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v55 = *v58;
        v58[2] = 0LL;
        if ( !*(_DWORD *)(v55 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v54);
        v57 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v57 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v56);
        ExReleaseResourceAndLeaveCriticalRegion(*v57);
        HMUnlockObject(*v58);
        tagDomLock::LockExclusive(v57);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v72, 4) )
    return 2LL;
  v18 = !CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v72, 2);
  result = 1LL;
  if ( !v18 )
    return 2LL;
  return result;
}
