/*
 * XREFs of ?ivHandleKeyboardStatesPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BAB30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_s @ 0x1C015BD8C (WPP_RECORDER_SF_s.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B66DC (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x1C01B6700 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 *     ?IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z @ 0x1C01B7658 (-IVDeSerializeIVKeyboardStatesPacket@@YAJPEAU_IVKeyboardStatesPacket@@AEAUCIVSerializer@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardStatesPacket(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v3; // r14d
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
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
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  PERESOURCE *v37; // rdi
  __int64 *v38; // rsi
  __int64 v39; // rcx
  PEVENT_DATA_DESCRIPTOR v41; // [rsp+30h] [rbp-D8h]
  int v42; // [rsp+38h] [rbp-D0h] BYREF
  int v43; // [rsp+3Ch] [rbp-CCh] BYREF
  int v44; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v45[6]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h]
  unsigned __int8 v48; // [rsp+88h] [rbp-80h]
  GUID ActivityId; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [rsp+A0h] [rbp-68h] BYREF
  int *v51; // [rsp+C0h] [rbp-48h]
  __int64 v52; // [rsp+C8h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+D0h] [rbp-38h] BYREF
  int *v54; // [rsp+F0h] [rbp-18h]
  __int64 v55; // [rsp+F8h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+100h] [rbp-8h] BYREF
  int *v57; // [rsp+120h] [rbp+18h]
  __int64 v58; // [rsp+128h] [rbp+20h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)a2,
      12,
      50,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
      (__int64)"IV_PACKET_TYPE_KBD_FULL_STATES");
  v45[2] = a2;
  v3 = 1;
  v45[1] = 0LL;
  v45[4] = 0LL;
  v45[5] = 0LL;
  LOBYTE(v46) = 1;
  v4 = IVDeSerializeIVKeyboardStatesPacket(a2, (struct CIVSerializer *)v45);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v41) = v4;
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v5,
        12,
        51,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
        v41);
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
      v48 = 1;
      v10 = PsGetCurrentThreadWin32Thread(v8);
      v47 = v10;
      if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v47 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v42 = v48;
          v52 = 4LL;
          v51 = &v42;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &ActivityId,
            0LL,
            3u,
            &v50);
        }
      }
    }
    else
    {
      v47 = 0LL;
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
      if ( v47 )
      {
        v17 = *(unsigned int *)(v47 + 24);
        if ( *(_DWORD *)(v47 + 48) || (int)v17 > 0 )
        {
          *(_DWORD *)(v47 + 44) = 1;
          *(GUID *)(v47 + 28) = ActivityId;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v43 = v48;
              v55 = 4LL;
              v54 = &v43;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &ActivityId,
                0LL,
                3u,
                &v53);
              v18 = dword_1C024C960;
            }
            if ( v18 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v44 = v48;
              v58 = 4LL;
              v57 = &v44;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &ActivityId,
                0LL,
                3u,
                &v56);
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
        && (*(_DWORD *)(v27 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        while ( 1 )
        {
          v38 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          v35 = *v38;
          v38[2] = 0LL;
          if ( !*(_DWORD *)(v35 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
          v37 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v37 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
          ExReleaseResourceAndLeaveCriticalRegion(*v37);
          HMUnlockObject(*v38);
          tagDomLock::LockExclusive(v37);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      }
    }
    ApplyFullKeyboardStates(*a2, (__int128 *)a2[1]);
    UserSessionSwitchLeaveCrit(v39);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)v45, v5, v7);
  return v3;
}
