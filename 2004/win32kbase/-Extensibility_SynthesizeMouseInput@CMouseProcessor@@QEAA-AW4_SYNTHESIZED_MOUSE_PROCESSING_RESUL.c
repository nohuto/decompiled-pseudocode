/*
 * XREFs of ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BC33C
 * Callers:
 *     NtMITSynthesizeMouseInput @ 0x1C0130C30 (NtMITSynthesizeMouseInput.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C003A230 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00463EC (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     UpconvertTime @ 0x1C0060B60 (UpconvertTime.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0070254 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ecx
  int v17; // edx
  __int16 v18; // ax
  __int16 v19; // ax
  __int16 v20; // cx
  bool v21; // zf
  __int16 v22; // ax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // edi
  unsigned int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v36; // rax
  struct tagTHREADINFO *v37; // rbx
  struct tagTHREADINFO **v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  PVOID CurrentProcess; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  int ProcessSessionId; // ebx
  __int64 v50; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  PERESOURCE *v76; // rdi
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // rsi
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 result; // rax
  int v83; // [rsp+38h] [rbp-D0h] BYREF
  int v84; // [rsp+3Ch] [rbp-CCh] BYREF
  int v85; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v86; // [rsp+48h] [rbp-C0h]
  __int64 v87; // [rsp+58h] [rbp-B0h]
  __int128 v88; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v89[5]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v90; // [rsp+98h] [rbp-70h] BYREF
  __int64 v91; // [rsp+A8h] [rbp-60h]
  __int64 v92; // [rsp+B8h] [rbp-50h]
  unsigned __int8 v93; // [rsp+C0h] [rbp-48h]
  GUID ActivityId; // [rsp+C4h] [rbp-44h] BYREF
  struct tagPOINT v95; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+138h] [rbp+30h] BYREF
  int *v97; // [rsp+158h] [rbp+50h]
  __int64 v98; // [rsp+160h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+168h] [rbp+60h] BYREF
  int *v100; // [rsp+188h] [rbp+80h]
  __int64 v101; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+198h] [rbp+90h] BYREF
  int *v103; // [rsp+1B8h] [rbp+B0h]
  __int64 v104; // [rsp+1C0h] [rbp+B8h]

  v4 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v10 = *((_DWORD *)v4 + 10);
  v11 = CurrentThreadId;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 != v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  if ( (dword_1C025462C & 1) == 0 )
    dword_1C025462C |= 1u;
  v16 = *(_DWORD *)(a2 + 32);
  v89[0] = 0LL;
  v17 = 256;
  v88 = 0LL;
  if ( v16 || *(_DWORD *)(a2 + 36) )
  {
    v18 = *(_WORD *)(a2 + 24) & 3;
    HIDWORD(v88) = v16;
    WORD1(v88) = v18;
    LODWORD(v89[0]) = *(_DWORD *)(a2 + 36);
    if ( (a3 & 4) != 0 )
      v17 = 258;
  }
  else
  {
    v17 = 264;
  }
  v19 = *(_WORD *)(a2 + 26) & 0xFFF;
  v20 = *(_WORD *)(a2 + 28);
  WORD2(v88) = v19;
  if ( v20 )
  {
    v21 = (v19 & 0xC00) == 0;
    v22 = WORD3(v88);
    if ( !v21 )
      v22 = v20;
    WORD3(v88) = v22;
  }
  v23 = v17 | 0x800;
  if ( (a3 & 2) == 0 )
    v23 = v17;
  v24 = v23 | 0x200;
  if ( (a3 & 8) != 0 )
    v24 = v23;
  v25 = v24 | 0x400;
  if ( (a3 & 1) == 0 )
    v25 = v24;
  v26 = v25 | 0x2000;
  if ( (a3 & 0x20) == 0 )
    v26 = v25;
  v27 = v26 | 0x10000;
  if ( (a3 & 0x80) == 0 )
    v27 = v26;
  if ( (a3 & 0x10) != 0 )
    v27 = v27 & 0xFFFFFFF3 | 4;
  v28 = *(_DWORD *)(a2 + 8);
  v29 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)&v86 + 1) = *(_QWORD *)a2;
  *(_QWORD *)&v86 = 1LL;
  *(_OWORD *)&v89[1] = v86;
  v89[3] = 0LL;
  *(_QWORD *)&v86 = UpconvertTime(v28);
  *((_QWORD *)&v86 + 1) = v29;
  v87 = v29;
  v90 = v86;
  v91 = v29;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(
    (__int64)&v95,
    (__int64)&v88,
    &v90,
    v27 | 0x40,
    (__int64)&v89[1],
    a4);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v30, v31, v32);
  CMouseProcessor::SynthesizeMouse(a1, (struct tagPOINT)&v95, 0LL, 0LL);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v33);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v93 = 1;
    v36 = PsGetCurrentThreadWin32Thread(v34);
    v92 = v36;
    if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v92 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
      {
        v83 = v93;
        v98 = 4LL;
        v97 = &v83;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0246A70,
          (unsigned __int8 *)dword_1C0213E87,
          &ActivityId,
          0LL,
          3u,
          &v96);
      }
    }
  }
  else
  {
    v92 = 0LL;
  }
  v37 = 0LL;
  while ( 1 )
  {
    v38 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v38 )
      v37 = *v38;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v40, v39);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v43, v42) == gpepCSRSS && v37 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v37 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v92 )
    {
      v43 = *(unsigned int *)(v92 + 24);
      if ( *(_DWORD *)(v92 + 48) || (int)v43 > 0 )
      {
        *(_DWORD *)(v92 + 44) = 1;
        *(GUID *)(v92 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v84 = v93;
            v101 = 4LL;
            v100 = &v84;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v99);
            v44 = dword_1C0246A70;
          }
          if ( v44 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v85 = v93;
            v104 = 4LL;
            v103 = &v85;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v102);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v43);
  gptiCurrent = v37;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v45)
    || (v48 = PsGetCurrentProcess(v47, v46),
        ProcessSessionId = PsGetProcessSessionIdEx(v48),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v50),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v55 = 0LL;
    if ( !IsThreadCrossSessionAttached(v47) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v55 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v56);
    if ( v55
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v55 + 480) & 0x1000000) != 0
      && (*(_DWORD *)(v55 + 1224) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v59, v52, v53);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v63, v64);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v67, v68);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      while ( 1 )
      {
        v79 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
        v73 = *v79;
        v79[2] = 0LL;
        if ( !*(_DWORD *)(v73 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v70, v69, v71, v72);
        v76 = (PERESOURCE *)GetDomainLockRef(12LL, v69, v71, v72);
        if ( v76 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v75, v74, v77, v78);
        ExReleaseResourceAndLeaveCriticalRegion(*v76);
        HMUnlockObject(*v79);
        tagDomLock::LockExclusive(v76);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  if ( CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v95, 4LL, v52, v53) )
    return 2LL;
  v21 = !CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult((__int64)&v95, 2LL, v80, v81);
  result = 1LL;
  if ( !v21 )
    return 2LL;
  return result;
}
