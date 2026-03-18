/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B4DD0
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
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_s @ 0x1C0155A3C (WPP_RECORDER_SF_s.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B097C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01B09A0 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 *     ?IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B18F8 (-IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  PEVENT_DATA_DESCRIPTOR v58; // [rsp+30h] [rbp-D8h]
  int v59; // [rsp+38h] [rbp-D0h] BYREF
  int v60; // [rsp+3Ch] [rbp-CCh] BYREF
  int v61; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v62[6]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h]
  unsigned __int8 v65; // [rsp+88h] [rbp-80h]
  GUID ActivityId; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+A0h] [rbp-68h] BYREF
  int *v68; // [rsp+C0h] [rbp-48h]
  __int64 v69; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+D0h] [rbp-38h] BYREF
  int *v71; // [rsp+F0h] [rbp-18h]
  __int64 v72; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+100h] [rbp-8h] BYREF
  int *v74; // [rsp+120h] [rbp+18h]
  __int64 v75; // [rsp+128h] [rbp+20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      12,
      50,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      (__int64)"IV_PACKET_TYPE_KBD_FULL_STATES");
  v62[2] = a2;
  v3 = 1;
  v62[1] = 0LL;
  v62[4] = 0LL;
  v62[5] = 0LL;
  LOBYTE(v63) = 1;
  v4 = IVDeSerializeIVKeyboardStatesPacket(a2, (struct CIVSerializer *)v62);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v58) = v4;
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v5,
        12,
        51,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
        v58);
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
      v65 = 1;
      v9 = PsGetCurrentThreadWin32Thread(v7);
      v64 = v9;
      if ( v9 && (*(int *)(v9 + 24) > 0 || *(_DWORD *)(v64 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v59 = v65;
          v69 = 4LL;
          v68 = &v59;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &ActivityId,
            0LL,
            3u,
            &v67);
        }
      }
    }
    else
    {
      v64 = 0LL;
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
      if ( v64 )
      {
        v16 = *(unsigned int *)(v64 + 24);
        if ( *(_DWORD *)(v64 + 48) || (int)v16 > 0 )
        {
          *(_DWORD *)(v64 + 44) = 1;
          *(GUID *)(v64 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v60 = v65;
              v72 = 4LL;
              v71 = &v60;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &ActivityId,
                0LL,
                3u,
                &v70);
              v17 = dword_1C0246A70;
            }
            if ( v17 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v61 = v65;
              v75 = 4LL;
              v74 = &v61;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &ActivityId,
                0LL,
                3u,
                &v73);
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
    ApplyFullKeyboardStates(*a2, (__int128 *)a2[1]);
    UserSessionSwitchLeaveCrit(v54, v53, v55, v56);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v62);
  return v3;
}
