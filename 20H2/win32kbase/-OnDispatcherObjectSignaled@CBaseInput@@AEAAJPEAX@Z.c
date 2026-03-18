/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003385C
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C0033770 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C0033790 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C00337F4 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
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
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012AD48 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z @ 0x1C019E6EC (-DispatcherHandleNameToString@InputTraceLogging@@CAPEBDW4DispatcherHandleName@CRIMBase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct tagKERNELHANDLETABLEENTRY *v48; // rsi
  int v49; // ebx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v56; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  unsigned int v59; // r15d
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  PERESOURCE *v68; // rdi
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // [rsp+30h] [rbp-D0h] BYREF
  int v72; // [rsp+34h] [rbp-CCh] BYREF
  int v73; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+40h] [rbp-C0h] BYREF
  CBaseInput *v75; // [rsp+48h] [rbp-B8h]
  _BYTE v76[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v78; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+78h] [rbp-88h] BYREF
  int *v81; // [rsp+98h] [rbp-68h]
  int v82; // [rsp+A0h] [rbp-60h]
  int v83; // [rsp+A4h] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+A8h] [rbp-58h] BYREF
  int *v85; // [rsp+C8h] [rbp-38h]
  int v86; // [rsp+D0h] [rbp-30h]
  int v87; // [rsp+D4h] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+D8h] [rbp-28h] BYREF
  int *v89; // [rsp+F8h] [rbp-8h]
  int v90; // [rsp+100h] [rbp+0h]
  int v91; // [rsp+104h] [rbp+4h]

  v2 = *(_QWORD *)this;
  v4 = this;
  v75 = this;
  (*(void (__fastcall **)(CBaseInput *))(v2 + 112))(this);
  v5 = 0;
  v6 = (void **)((char *)v4 + 200);
  while ( *v6 != a2 )
  {
    ++v5;
    v6 += 8;
    if ( v5 >= 0x11 )
    {
      v59 = 17;
      goto LABEL_9;
    }
  }
  v7 = (unsigned __int64)v5 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)v4 + v7 + 152)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  v59 = *(_DWORD *)((char *)v4 + v7 + 168);
  if ( v5 != v59 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
    v59 = *(_DWORD *)((char *)v4 + v7 + 168);
  }
LABEL_9:
  if ( v59 == 17 )
  {
    v49 = -1073741823;
  }
  else
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v76,
      "DispatcherObjectSignaled",
      0LL);
    if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 2LL, v14, v15) )
    {
      v74 = InputTraceLogging::DispatcherHandleNameToString(v59);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C0244A70,
        (__int64)&v74);
    }
    if ( v59 != *((_DWORD *)&unk_1C02034B0 + 6 * v59) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    if ( *((_BYTE *)&unk_1C02034B0 + 24 * v59 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v78 = 1;
        v60 = PsGetCurrentThreadWin32Thread();
        v77 = v60;
        if ( v60 && (*(int *)(v60 + 24) > 0 || *(_DWORD *)(v77 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0244A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v61, v62) )
            {
              v83 = 0;
              v71 = v78;
              v82 = 4;
              v81 = &v71;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C0244A70,
                (int)&dword_1C0211E87,
                (int)&ActivityId,
                0,
                3u,
                &v80);
            }
          }
        }
      }
      else
      {
        v77 = 0LL;
      }
      v17 = 0LL;
      while ( 1 )
      {
        v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v18 )
          v17 = *v18;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v17 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v77 && (*(_DWORD *)(v77 + 48) || *(int *)(v77 + 24) > 0) )
      {
        *(_DWORD *)(v77 + 44) = 1;
        *(GUID *)(v77 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v24) )
          {
            v87 = 0;
            v72 = v78;
            v86 = 4;
            v85 = &v72;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E30,
              (int)&ActivityId,
              0,
              3u,
              &v84);
            v63 = (unsigned int)dword_1C0244A70;
          }
          if ( (unsigned int)v63 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v63, v64) )
          {
            v91 = 0;
            v73 = v78;
            v90 = 4;
            v89 = &v73;
            tlgWriteTransfer_EtwWriteTransfer(
              (int)&dword_1C0244A70,
              (int)&dword_1C0211E5D,
              (int)&ActivityId,
              0,
              3u,
              &v88);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v17;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v56 = PsGetCurrentProcess(v26, v25),
            ProcessSessionId = PsGetProcessSessionIdEx(v56),
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
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30, v29, v31, v32);
        if ( v28
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v28 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v28 + 1232) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v38, v39);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v48 = gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v48 + 2);
              v65 = *(_QWORD *)v48;
              *((_QWORD *)v48 + 2) = 0LL;
              if ( !*(_DWORD *)(v65 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46, v47);
              v68 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v68 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v67, v66, v69, v70);
              ExReleaseResourceAndLeaveCriticalRegion(*v68);
              HMUnlockObject(*(_QWORD *)v48);
              tagDomLock::LockExclusive((tagDomLock *)v68);
              v48 = gpducstulHead;
            }
            while ( gpducstulHead );
            v4 = v75;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      v49 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C02034B0 + 3 * v59 + 1))(v4);
      UserSessionSwitchLeaveCrit(v50);
    }
    else
    {
      v49 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C02034B0 + 3 * v59 + 1))(v4);
    }
    if ( v49 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v51, v53, v54);
    CRIMBase::SignalMarshalingCompleted((__int64)v4, v59, v53, v54);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v76);
  }
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v4 + 120LL))(v4);
  return (unsigned int)v49;
}
