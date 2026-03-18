/*
 * XREFs of ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0122C00
 * Callers:
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0123338 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C012343C (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::SyncMessage<8>(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
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
  __int64 v31; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v43; // [rsp+4Ch] [rbp-B4h]
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  union _LARGE_INTEGER v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v47; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+80h] [rbp-80h] BYREF
  int *v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+B0h] [rbp-50h] BYREF
  int *v54; // [rsp+D0h] [rbp-30h]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+E0h] [rbp-20h] BYREF
  int *v58; // [rsp+100h] [rbp+0h]
  int v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+10Ch] [rbp+Ch]

  UserSessionSwitchLeaveCrit(a1);
  v44 = *(_QWORD *)(a1 + 16);
  v45.QuadPart = 72LL;
  v6 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, union _LARGE_INTEGER *, _QWORD, unsigned __int64))qword_1C0252B58)(
         1179648LL,
         a2,
         0LL,
         a3,
         &v45,
         0LL,
         (unsigned __int64)&v44 & -(__int64)(v44 != 0));
  v43 = v6;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v47 = 1;
    v10 = PsGetCurrentThreadWin32Thread(v8);
    v46 = v10;
    if ( v10 && (*(int *)(v10 + 24) > 0 || *(_DWORD *)(v46 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v52 = 0;
        v40 = v47;
        v51 = 4;
        v50 = &v40;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v49);
      }
    }
  }
  else
  {
    v46 = 0LL;
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
    if ( v46 )
    {
      v17 = *(unsigned int *)(v46 + 24);
      if ( *(_DWORD *)(v46 + 48) || (int)v17 > 0 )
      {
        *(_DWORD *)(v46 + 44) = 1;
        *(GUID *)(v46 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v56 = 0;
            v41 = v47;
            v55 = 4;
            v54 = &v41;
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
            v60 = 0;
            v42 = v47;
            v59 = 4;
            v58 = &v42;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v57);
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
      v35 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v35[2];
          v36 = *v35;
          v35[2] = 0LL;
          if ( !*(_DWORD *)(v36 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
          v38 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v38 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
          ExReleaseResourceAndLeaveCriticalRegion(*v38);
          HMUnlockObject(*v35);
          tagDomLock::LockExclusive(v38);
          v35 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
        v6 = v43;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
  return v6;
}
