/*
 * XREFs of NtUserInjectGenericHidInput @ 0x1C01333A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0022B30 (WPP_RECORDER_SF_qqd.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00230E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013958C (WPP_RECORDER_SF_Dd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0166F18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016B3CC (RIMIDE_InjectGenericHidInput.c)
 *     UserGetLastError @ 0x1C01CBF70 (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(char *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r13
  __int64 v7; // rcx
  __int64 v8; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v10; // rsi
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
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  PERESOURCE *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  PVOID v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rdx
  PVOID v62; // rdi
  __int64 v63; // rcx
  int v64; // ebx
  int v65; // r9d
  int v66; // ecx
  int v67; // ecx
  int v68; // eax
  NTSTATUS v69; // r14d
  ULONG v70; // eax
  __int64 v71; // rdx
  char LastError; // al
  int v73; // edx
  char v75; // [rsp+30h] [rbp-D0h]
  int v76; // [rsp+40h] [rbp-C0h] BYREF
  int v77; // [rsp+44h] [rbp-BCh] BYREF
  int v78; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v79; // [rsp+4Ch] [rbp-B4h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v81; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v83; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+80h] [rbp-80h] BYREF
  int *v86; // [rsp+A0h] [rbp-60h]
  __int64 v87; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+B0h] [rbp-50h] BYREF
  int *v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v91; // [rsp+E0h] [rbp-20h] BYREF
  int *v92; // [rsp+100h] [rbp+0h]
  __int64 v93; // [rsp+108h] [rbp+8h]

  v4 = a3;
  v79 = a3;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v75 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqd(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      a2,
      21,
      10,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
      (char)a1,
      v75,
      a3);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v81, "InjectGenericHidInput", 0LL, a4);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  v10 = 1LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v83 = 1;
    v11 = PsGetCurrentThreadWin32Thread(v8);
    v82 = v11;
    if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v82 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v76 = v83;
        v87 = 4LL;
        v86 = &v76;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E87,
          &ActivityId,
          0LL,
          3u,
          &v85);
      }
    }
  }
  else
  {
    v82 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v82 && (*(_DWORD *)(v82 + 48) || *(int *)(v82 + 24) > 0) )
  {
    *(_DWORD *)(v82 + 44) = 1;
    *(GUID *)(v82 + 28) = ActivityId;
    if ( (unsigned int)dword_1C0244A70 > 6 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v77 = v83;
        v90 = 4LL;
        v89 = &v77;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E30,
          &ActivityId,
          0LL,
          3u,
          &v88);
        v19 = dword_1C0244A70;
      }
      if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
      {
        v78 = v83;
        v93 = 4LL;
        v92 = &v78;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0244A70,
          (unsigned __int8 *)dword_1C0211E5D,
          &ActivityId,
          0LL,
          3u,
          &v91);
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
    v28 = 0LL;
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v28 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
    if ( v28 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v28 + 488) & 0x1000000) != 0 )
        {
          v26 = *(unsigned int *)(v28 + 1232);
          if ( (v26 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v25, v32, v33);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v37, v38);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v47 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v47[2];
                v48 = *v47;
                v47[2] = 0LL;
                if ( !*(_DWORD *)(v48 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v43, v45, v46);
                v51 = (PERESOURCE *)GetDomainLockRef(12LL, v43, v45, v46);
                if ( v51 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
                ExReleaseResourceAndLeaveCriticalRegion(*v51);
                HMUnlockObject(*v47);
                tagDomLock::LockExclusive(v51);
                v47 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v4 = v79;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  Object = 0LL;
  v54 = (PVOID)PsGetCurrentProcess(v26, v25);
  if ( (!v54 || v54 != g_pepDwm) && !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    UserSetLastError(5LL, v55);
    v10 = 0LL;
LABEL_94:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v73) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v73,
        21,
        18,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        LastError);
    }
    goto LABEL_96;
  }
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v55) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v55,
        21,
        11,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    }
    UserSetLastError(87LL, v55);
    v10 = 0LL;
    goto LABEL_94;
  }
  v60 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v62 = Object;
  if ( v60 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v61) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v61,
        21,
        12,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v60);
    }
    v63 = 6LL;
    goto LABEL_67;
  }
  if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_73:
      v63 = 87LL;
LABEL_67:
      v64 = 0;
      UserSetLastError(v63, v61);
LABEL_68:
      v10 = 0LL;
      goto LABEL_91;
    }
    v65 = 13;
LABEL_72:
    LOBYTE(v61) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v61,
      21,
      v65,
      (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids);
    goto LABEL_73;
  }
  if ( *((_BYTE *)Object + 136) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_73;
    v65 = 14;
    goto LABEL_72;
  }
  if ( (*((_DWORD *)Object + 72) & 0x80u) != 0 )
  {
    v66 = *(_DWORD *)(*((_QWORD *)Object + 71) + 312LL);
    if ( (v66 & 8) != 0 && (v66 & 0x2000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_73;
      v65 = 15;
      goto LABEL_72;
    }
  }
  v67 = *(unsigned __int16 *)(*((_QWORD *)Object + 69) + 44LL);
  if ( v67 != v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v61) = 2;
      WPP_RECORDER_SF_Dd(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v61,
        21,
        16,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v4,
        v67);
    }
    goto LABEL_73;
  }
  v68 = RIMIDE_InjectGenericHidInput(Object, v61, v5, v4);
  v69 = v68;
  if ( v68 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v56) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v56,
        21,
        17,
        (__int64)&WPP_72969ae93fdf3d9d80b76793b3525300_Traceguids,
        v68);
    }
    v64 = 0;
    v70 = RtlNtStatusToDosError(v69);
    UserSetLastError(v70, v71);
    goto LABEL_68;
  }
  v64 = 1;
LABEL_91:
  if ( v62 )
    ObfDereferenceObject(v62);
  if ( !v64 )
    goto LABEL_94;
LABEL_96:
  UserSessionSwitchLeaveCrit(v57, v56, v58, v59);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v81);
  return v10;
}
