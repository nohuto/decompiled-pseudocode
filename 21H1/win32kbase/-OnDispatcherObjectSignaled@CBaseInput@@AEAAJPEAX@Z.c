/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C00639EC
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C0063900 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0063920 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C0063984 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0133088 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C01A67EC (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  __int64 v2; // rax
  CBaseInput *v4; // r14
  unsigned int v5; // edi
  void **v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v14; // rbx
  struct tagTHREADINFO **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID CurrentProcess; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v29; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct tagKERNELHANDLETABLEENTRY *v33; // rsi
  int v34; // ebx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v38; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int v41; // r15d
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  int v50; // [rsp+30h] [rbp-D0h] BYREF
  int v51; // [rsp+34h] [rbp-CCh] BYREF
  int v52; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-C0h] BYREF
  CBaseInput *v54; // [rsp+48h] [rbp-B8h]
  _BYTE v55[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v57; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+78h] [rbp-88h] BYREF
  int *v60; // [rsp+98h] [rbp-68h]
  int v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A4h] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+A8h] [rbp-58h] BYREF
  int *v64; // [rsp+C8h] [rbp-38h]
  int v65; // [rsp+D0h] [rbp-30h]
  int v66; // [rsp+D4h] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+D8h] [rbp-28h] BYREF
  int *v68; // [rsp+F8h] [rbp-8h]
  int v69; // [rsp+100h] [rbp+0h]
  int v70; // [rsp+104h] [rbp+4h]

  v2 = *(_QWORD *)this;
  v4 = this;
  v54 = this;
  (*(void (__fastcall **)(CBaseInput *))(v2 + 112))(this);
  v5 = 0;
  v6 = (void **)((char *)v4 + 200);
  while ( *v6 != a2 )
  {
    ++v5;
    v6 += 8;
    if ( v5 >= 0x11 )
    {
      v41 = 17;
      goto LABEL_9;
    }
  }
  v7 = (unsigned __int64)v5 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)v4 + v7 + 152)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  v41 = *(_DWORD *)((char *)v4 + v7 + 168);
  if ( v5 != v41 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    v41 = *(_DWORD *)((char *)v4 + v7 + 168);
  }
LABEL_9:
  if ( v41 == 17 )
  {
    v34 = -1073741823;
  }
  else
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v55,
      "DispatcherObjectSignaled",
      0LL);
    if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 2LL, v10, v11) )
    {
      v53 = InputTraceLogging::DispatcherHandleNameToString(v41);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C024C960,
        (__int64)&v53);
    }
    if ( v41 != *((_DWORD *)&unk_1C020B530 + 6 * v41) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
    if ( *((_BYTE *)&unk_1C020B530 + 24 * v41 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v57 = 1;
        v42 = PsGetCurrentThreadWin32Thread(v12);
        v56 = v42;
        if ( v42 && (*(int *)(v42 + 24) > 0 || *(_DWORD *)(v56 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v43, v44) )
            {
              v62 = 0;
              v50 = v57;
              v61 = 4;
              v60 = &v50;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &ActivityId,
                0LL,
                3u,
                &v59);
            }
          }
        }
      }
      else
      {
        v56 = 0LL;
      }
      v14 = 0LL;
      while ( 1 )
      {
        v15 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v15 )
          v14 = *v15;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v20, v19) == gpepCSRSS && v14 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v14 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v56 && (*(_DWORD *)(v56 + 48) || *(int *)(v56 + 24) > 0) )
      {
        *(_DWORD *)(v56 + 44) = 1;
        *(GUID *)(v56 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v21) )
          {
            v66 = 0;
            v51 = v57;
            v65 = 4;
            v64 = &v51;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v63);
            v45 = (unsigned int)dword_1C024C960;
          }
          if ( (unsigned int)v45 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v45, v46) )
          {
            v70 = 0;
            v52 = v57;
            v69 = 4;
            v68 = &v52;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v67);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v14;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v38 = PsGetCurrentProcess(v23, v22),
            ProcessSessionId = PsGetProcessSessionIdEx(v38),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v25 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v25 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
        if ( v25
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v25 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v25 + 1216) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v33 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v33 + 2);
              v47 = *(_QWORD *)v33;
              *((_QWORD *)v33 + 2) = 0LL;
              if ( !*(_DWORD *)(v47 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
              v49 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v49 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v48);
              ExReleaseResourceAndLeaveCriticalRegion(*v49);
              HMUnlockObject(*(_QWORD *)v33);
              tagDomLock::LockExclusive((tagDomLock *)v49);
              v33 = gpducstulHead;
            }
            while ( gpducstulHead );
            v4 = v54;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      v34 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C020B530 + 3 * v41 + 1))(v4);
      UserSessionSwitchLeaveCrit(v35);
    }
    else
    {
      v34 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C020B530 + 3 * v41 + 1))(v4);
    }
    if ( v34 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
    CRIMBase::SignalMarshalingCompleted((__int64)v4, v41);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v55);
  }
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v4 + 120LL))(v4);
  return (unsigned int)v34;
}
