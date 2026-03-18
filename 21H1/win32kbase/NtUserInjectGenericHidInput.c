/*
 * XREFs of NtUserInjectGenericHidInput @ 0x1C013B390
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C005A2F4 (WPP_RECORDER_SF_qqd.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0065598 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00A3EC0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C014157C (WPP_RECORDER_SF_Dd.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C016F7C8 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0173C7C (RIMIDE_InjectGenericHidInput.c)
 *     UserGetLastError @ 0x1C01D4270 (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserInjectGenericHidInput(char *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // r15d
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
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int ProcessSessionId; // ebx
  __int64 v25; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v27; // rdx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  PERESOURCE *v40; // rdi
  PVOID v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  PVOID v46; // rdi
  __int64 v47; // rcx
  int v48; // ebx
  int v49; // r9d
  int v50; // ecx
  int v51; // ecx
  int v52; // eax
  int v53; // edx
  NTSTATUS v54; // r14d
  ULONG v55; // eax
  __int64 v56; // rdx
  char LastError; // al
  int v58; // edx
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  int v61; // [rsp+44h] [rbp-BCh] BYREF
  int v62; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v63; // [rsp+4Ch] [rbp-B4h]
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v65; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v67; // [rsp+68h] [rbp-98h]
  GUID ActivityId; // [rsp+6Ch] [rbp-94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+80h] [rbp-80h] BYREF
  int *v70; // [rsp+A0h] [rbp-60h]
  __int64 v71; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+B0h] [rbp-50h] BYREF
  int *v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+E0h] [rbp-20h] BYREF
  int *v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]

  v4 = a3;
  v63 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqd(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      0x15u,
      0xAu,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
      a1,
      a2,
      a3);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v65, "InjectGenericHidInput", 0LL, a4);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  ActivityId = 0LL;
  v10 = 1LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v67 = 1;
    v11 = PsGetCurrentThreadWin32Thread(v8);
    v66 = v11;
    if ( v11 && (*(int *)(v11 + 24) > 0 || *(_DWORD *)(v66 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
      {
        v60 = v67;
        v71 = 4LL;
        v70 = &v60;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C024C960,
          (unsigned __int8 *)dword_1C02199F7,
          &ActivityId,
          0LL,
          3u,
          &v69);
      }
    }
  }
  else
  {
    v66 = 0LL;
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
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    if ( v66 )
    {
      v18 = *(unsigned int *)(v66 + 24);
      if ( *(_DWORD *)(v66 + 48) || (int)v18 > 0 )
      {
        *(_DWORD *)(v66 + 44) = 1;
        *(GUID *)(v66 + 28) = ActivityId;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v61 = v67;
            v74 = 4LL;
            v73 = &v61;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &ActivityId,
              0LL,
              3u,
              &v72);
            v19 = dword_1C024C960;
          }
          if ( v19 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v62 = v67;
            v77 = 4LL;
            v76 = &v62;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &ActivityId,
              0LL,
              3u,
              &v75);
          }
        }
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit(v18);
  gptiCurrent = v12;
  gbValidateHandleForIL = 1;
  if ( !(unsigned __int8)KeIsAttachedProcess(v20)
    || (v23 = PsGetCurrentProcess(v22, v21),
        ProcessSessionId = PsGetProcessSessionIdEx(v23),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v25),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    CurrentThread = KeGetCurrentThread();
    v29 = 0LL;
    if ( !IsThreadCrossSessionAttached(v22) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v29 = *ThreadWin32Thread;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30);
    if ( v29 )
    {
      if ( CurrentProcessWin32Process )
      {
        if ( (*(_DWORD *)(v29 + 480) & 0x1000000) != 0 )
        {
          v22 = *(unsigned int *)(v29 + 1216);
          if ( (v22 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v37 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v37[2];
                v38 = *v37;
                v37[2] = 0LL;
                if ( !*(_DWORD *)(v38 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
                v40 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v40 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v39);
                ExReleaseResourceAndLeaveCriticalRegion(*v40);
                HMUnlockObject(*v37);
                tagDomLock::LockExclusive(v40);
                v37 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v4 = v63;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
      }
    }
  }
  Object = 0LL;
  v41 = (PVOID)PsGetCurrentProcess(v22, v27);
  if ( (!v41 || v41 != g_pepDwm) && !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    UserSetLastError(5LL, v42);
    v10 = 0LL;
LABEL_94:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v58) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v58,
        21,
        18,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        LastError);
    }
    goto LABEL_96;
  }
  if ( !v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v42) = 2;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v42,
        21,
        11,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids);
    }
    UserSetLastError(87LL, v42);
    v10 = 0LL;
    goto LABEL_94;
  }
  v44 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  v46 = Object;
  if ( v44 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v45) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v45,
        21,
        12,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        v44);
    }
    v47 = 6LL;
    goto LABEL_67;
  }
  if ( (*((_DWORD *)Object + 68) & 0x2000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_73:
      v47 = 87LL;
LABEL_67:
      v48 = 0;
      UserSetLastError(v47, v45);
LABEL_68:
      v10 = 0LL;
      goto LABEL_91;
    }
    v49 = 13;
LABEL_72:
    LOBYTE(v45) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v45,
      21,
      v49,
      (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids);
    goto LABEL_73;
  }
  if ( *((_BYTE *)Object + 136) != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_73;
    v49 = 14;
    goto LABEL_72;
  }
  if ( (*((_DWORD *)Object + 72) & 0x80u) != 0 )
  {
    v50 = *(_DWORD *)(*((_QWORD *)Object + 71) + 312LL);
    if ( (v50 & 8) != 0 && (v50 & 0x2000) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_73;
      v49 = 15;
      goto LABEL_72;
    }
  }
  v51 = *(unsigned __int16 *)(*((_QWORD *)Object + 69) + 44LL);
  if ( v51 != v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v45) = 2;
      WPP_RECORDER_SF_Dd(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v45,
        21,
        16,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        v4,
        v51);
    }
    goto LABEL_73;
  }
  v52 = RIMIDE_InjectGenericHidInput(Object, v45, a2, v4);
  v54 = v52;
  if ( v52 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v53) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v53,
        21,
        17,
        (__int64)&WPP_a5d2b43551623b00ae54fd3760cc1f96_Traceguids,
        v52);
    }
    v48 = 0;
    v55 = RtlNtStatusToDosError(v54);
    UserSetLastError(v55, v56);
    goto LABEL_68;
  }
  v48 = 1;
LABEL_91:
  if ( v46 )
    ObfDereferenceObject(v46);
  if ( !v48 )
    goto LABEL_94;
LABEL_96:
  UserSessionSwitchLeaveCrit(v43);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v65);
  return v10;
}
