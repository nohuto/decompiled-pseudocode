/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2A60
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_s @ 0x1C01534DC (WPP_RECORDER_SF_s.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01AE5FC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01AE620 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 *     ?IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z @ 0x1C01AF578 (-IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v3; // r14d
  int v4; // eax
  int v5; // edx
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
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  PEVENT_DATA_DESCRIPTOR v56; // [rsp+30h] [rbp-D8h]
  int v57; // [rsp+38h] [rbp-D0h] BYREF
  int v58; // [rsp+3Ch] [rbp-CCh] BYREF
  int v59; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v60[6]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v61; // [rsp+78h] [rbp-90h]
  __int64 v62; // [rsp+80h] [rbp-88h]
  unsigned __int8 v63; // [rsp+88h] [rbp-80h]
  GUID ActivityId; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+A0h] [rbp-68h] BYREF
  int *v66; // [rsp+C0h] [rbp-48h]
  __int64 v67; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+D0h] [rbp-38h] BYREF
  int *v69; // [rsp+F0h] [rbp-18h]
  __int64 v70; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+100h] [rbp-8h] BYREF
  int *v72; // [rsp+120h] [rbp+18h]
  __int64 v73; // [rsp+128h] [rbp+20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      12,
      50,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
      (__int64)"IV_PACKET_TYPE_KBD_FULL_STATES");
  v60[2] = a2;
  v3 = 1;
  v60[1] = 0LL;
  v60[4] = 0LL;
  v60[5] = 0LL;
  LOBYTE(v61) = 1;
  v4 = IVDeSerializeIVKeyboardStatesPacket(a2, (struct CIVSerializer *)v60);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v56) = v4;
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v5,
        12,
        51,
        (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
        v56);
    }
    v3 = 0;
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v63 = 1;
      v9 = PsGetCurrentThreadWin32Thread(v7);
      v62 = v9;
      if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v62 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v57 = v63;
          v67 = 4LL;
          v66 = &v57;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &ActivityId,
            0LL,
            3u,
            &v65);
        }
      }
    }
    else
    {
      v62 = 0LL;
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
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v62 && (*(_DWORD *)(v62 + 48) || *(int *)(v62 + 24) > 0) )
    {
      *(_DWORD *)(v62 + 44) = 1;
      *(GUID *)(v62 + 28) = ActivityId;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v58 = v63;
          v70 = 4LL;
          v69 = &v58;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &ActivityId,
            0LL,
            3u,
            &v68);
          v17 = dword_1C0244A70;
        }
        if ( v17 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v59 = v63;
          v73 = 4LL;
          v72 = &v59;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &ActivityId,
            0LL,
            3u,
            &v71);
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
    ApplyFullKeyboardStates(*a2, (__int128 *)a2[1]);
    UserSessionSwitchLeaveCrit(v52, v51, v53, v54);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v60);
  return v3;
}
