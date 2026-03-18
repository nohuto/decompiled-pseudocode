/*
 * XREFs of ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C011A400
 * Callers:
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C011AB38 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C011AC3C (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
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
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::SyncMessage<8>(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v11; // rax
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
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
  __int64 *v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PERESOURCE *v50; // rdi
  __int64 v51; // r8
  __int64 v52; // r9
  int v54; // [rsp+40h] [rbp-C0h] BYREF
  int v55; // [rsp+44h] [rbp-BCh] BYREF
  int v56; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v57; // [rsp+4Ch] [rbp-B4h]
  __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  union _LARGE_INTEGER v59; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v61; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+80h] [rbp-80h] BYREF
  int *v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+B0h] [rbp-50h] BYREF
  int *v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+E0h] [rbp-20h] BYREF
  int *v72; // [rsp+100h] [rbp+0h]
  int v73; // [rsp+108h] [rbp+8h]
  int v74; // [rsp+10Ch] [rbp+Ch]

  UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
  v58 = *(_QWORD *)(a1 + 16);
  v59.QuadPart = 72LL;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, union _LARGE_INTEGER *, _QWORD, unsigned __int64))qword_1C024AB38)(
         1179648LL,
         a2,
         0LL,
         a3,
         &v59,
         0LL,
         (unsigned __int64)&v58 & -(__int64)(v58 != 0));
  v57 = v7;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v61 = 1;
    v11 = PsGetCurrentThreadWin32Thread(v9);
    v60 = v11;
    if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v60 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v66 = 0;
        v54 = v61;
        v65 = 4;
        v64 = &v54;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v63);
      }
    }
  }
  else
  {
    v60 = 0LL;
  }
  v12 = 0LL;
  while ( 1 )
  {
    v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v13 )
      v12 = *v13;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v15, v14);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v18, v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v12 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v60 && (*(_DWORD *)(v60 + 48) || *(int *)(v60 + 24) > 0) )
  {
    *(_DWORD *)(v60 + 44) = 1;
    *(GUID *)(v60 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v70 = 0;
        v55 = v61;
        v69 = 4;
        v68 = &v55;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v67);
        v19 = dword_1C0244A70;
      }
      if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v74 = 0;
        v56 = v61;
        v73 = 4;
        v72 = &v56;
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
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v22 = PsGetCurrentProcess(v21, v20),
        ProcessSessionId = PsGetProcessSessionIdEx(v22),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v26 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v26 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27);
    if ( v26
      && CurrentProcessWin32Process
      && (*(_DWORD *)(v26 + 488) & 0x1000000) != 0
      && (*(_DWORD *)(v26 + 1232) & 0x80u) == 0
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
    {
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v30, v31, v32);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36, v37);
      if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
      ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
      v46 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v46[2];
          v47 = *v46;
          v46[2] = 0LL;
          if ( !*(_DWORD *)(v47 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v44, v45);
          v50 = (PERESOURCE *)GetDomainLockRef(12LL, v42, v44, v45);
          if ( v50 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v51, v52);
          ExReleaseResourceAndLeaveCriticalRegion(*v50);
          HMUnlockObject(*v46);
          tagDomLock::LockExclusive(v50);
          v46 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v7 = v57;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v7;
}
