/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C006E99C
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C006E8B0 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C006E8D0 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C006E934 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012D098 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C01A0A8C (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  __int64 v2; // rax
  CBaseInput *v4; // r14
  unsigned int v5; // edi
  void **v6; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v18; // rbx
  struct tagTHREADINFO **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  PVOID CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  struct tagKERNELHANDLETABLEENTRY *v45; // rsi
  int v46; // ebx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v53; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int v56; // r15d
  __int64 v57; // rax
  unsigned int v58; // r8d
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  PERESOURCE *v62; // rdi
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // [rsp+30h] [rbp-D0h] BYREF
  int v66; // [rsp+34h] [rbp-CCh] BYREF
  int v67; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+40h] [rbp-C0h] BYREF
  CBaseInput *v69; // [rsp+48h] [rbp-B8h]
  _BYTE v70[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v72; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+78h] [rbp-88h] BYREF
  int *v75; // [rsp+98h] [rbp-68h]
  int v76; // [rsp+A0h] [rbp-60h]
  int v77; // [rsp+A4h] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+A8h] [rbp-58h] BYREF
  int *v79; // [rsp+C8h] [rbp-38h]
  int v80; // [rsp+D0h] [rbp-30h]
  int v81; // [rsp+D4h] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+D8h] [rbp-28h] BYREF
  int *v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+104h] [rbp+4h]

  v2 = *(_QWORD *)this;
  v4 = this;
  v69 = this;
  (*(void (__fastcall **)(CBaseInput *))(v2 + 112))(this);
  v5 = 0;
  v6 = (void **)((char *)v4 + 200);
  while ( *v6 != a2 )
  {
    ++v5;
    v6 += 8;
    if ( v5 >= 0x11 )
    {
      v56 = 17;
      goto LABEL_9;
    }
  }
  v7 = (unsigned __int64)v5 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)v4 + v7 + 152)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  v56 = *(_DWORD *)((char *)v4 + v7 + 168);
  if ( v5 != v56 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    v56 = *(_DWORD *)((char *)v4 + v7 + 168);
  }
LABEL_9:
  if ( v56 == 17 )
  {
    v46 = -1073741823;
  }
  else
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v70,
      "DispatcherObjectSignaled",
      0LL);
    if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 2LL) )
    {
      v68 = InputTraceLogging::DispatcherHandleNameToString(v56);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C0246A70,
        (__int64)&v68);
    }
    if ( v56 != *((_DWORD *)&unk_1C0205520 + 6 * v56) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    if ( *((_BYTE *)&unk_1C0205520 + 24 * v56 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v72 = 1;
        v57 = PsGetCurrentThreadWin32Thread(v16);
        v71 = v57;
        if ( v57 && (*(int *)(v57 + 24) > 0 || *(_DWORD *)(v71 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v77 = 0;
            v65 = v72;
            v76 = 4;
            v75 = &v65;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId,
              0LL,
              3u,
              &v74);
          }
        }
      }
      else
      {
        v71 = 0LL;
      }
      v18 = 0LL;
      while ( 1 )
      {
        v19 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v19 )
          v18 = *v19;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v21, v20);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v24, v23) == gpepCSRSS && v18 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v18 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v71 && (*(_DWORD *)(v71 + 48) || *(int *)(v71 + 24) > 0) )
      {
        *(_DWORD *)(v71 + 44) = 1;
        *(GUID *)(v71 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0246A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v81 = 0;
            v66 = v72;
            v80 = 4;
            v79 = &v66;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E30,
              &ActivityId,
              0LL,
              3u,
              &v78);
            v58 = dword_1C0246A70;
          }
          if ( v58 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v85 = 0;
            v67 = v72;
            v84 = 4;
            v83 = &v67;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E5D,
              &ActivityId,
              0LL,
              3u,
              &v82);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v18;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v53 = PsGetCurrentProcess(v26, v25),
            ProcessSessionId = PsGetProcessSessionIdEx(v53),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v28 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v28 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
        if ( v28
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v28 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v28 + 1224) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35, v36);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v45 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v45 + 2);
              v59 = *(_QWORD *)v45;
              *((_QWORD *)v45 + 2) = 0LL;
              if ( !*(_DWORD *)(v59 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43, v44);
              v62 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v62 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v61, v60, v63, v64);
              ExReleaseResourceAndLeaveCriticalRegion(*v62);
              HMUnlockObject(*(_QWORD *)v45);
              tagDomLock::LockExclusive((tagDomLock *)v62);
              v45 = gpducstulHead;
            }
            while ( gpducstulHead );
            v4 = v69;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      v46 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C0205520 + 3 * v56 + 1))(v4);
      UserSessionSwitchLeaveCrit(v47);
    }
    else
    {
      v46 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C0205520 + 3 * v56 + 1))(v4);
    }
    if ( v46 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v48, v50, v51);
    CRIMBase::SignalMarshalingCompleted((__int64)v4, v56, v50, v51);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v70);
  }
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v4 + 120LL))(v4);
  return (unsigned int)v46;
}
