/*
 * XREFs of ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B3E30
 * Callers:
 *     <none>
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C002375C (RimInputTypeToDeviceInputType.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C004B3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C004B5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserSleep @ 0x1C00B7580 (UserSleep.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012A1E4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AA29C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B685C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B6AFC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B6E94 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B79E8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivOnChildLifetimeNotification(CBaseInput *this, _DWORD *a2)
{
  const union _LARGE_INTEGER *v4; // rdx
  __int64 v5; // rcx
  _BOOL8 v6; // rbx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // edi
  struct DEVICEINFO *i; // rbx
  int v12; // eax
  const struct CONTAINER_ID *v13; // r8
  const struct CONTAINER_ID *v14; // r9
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v19; // rax
  struct tagTHREADINFO *v20; // rbx
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v33; // rbx
  struct UserCritTelemetry *Instance; // rax
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v42; // rcx
  LARGE_INTEGER *v43; // rbx
  struct tagTHREADINFO *v44; // rdi
  __int64 v45; // rax
  struct tagTHREADINFO **v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  PVOID v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r8d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  PERESOURCE *v83; // rdi
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 *v86; // rsi
  _DWORD *v87; // rsi
  int v88; // ebx
  int v89; // edi
  int v90; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v92; // [rsp+28h] [rbp-D8h]
  __int64 v93; // [rsp+30h] [rbp-D0h] BYREF
  int v94; // [rsp+38h] [rbp-C8h] BYREF
  int v95; // [rsp+3Ch] [rbp-C4h] BYREF
  int v96; // [rsp+40h] [rbp-C0h] BYREF
  int v97; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v98; // [rsp+48h] [rbp-B8h]
  __int64 v99; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v100; // [rsp+58h] [rbp-A8h]
  GUID v101; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v102; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v103; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+90h] [rbp-70h] BYREF
  int *v106; // [rsp+B0h] [rbp-50h]
  __int64 v107; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+C0h] [rbp-40h] BYREF
  int *v109; // [rsp+E0h] [rbp-20h]
  __int64 v110; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v111; // [rsp+F0h] [rbp-10h] BYREF
  int *v112; // [rsp+110h] [rbp+10h]
  int v113; // [rsp+118h] [rbp+18h]
  int v114; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v115; // [rsp+120h] [rbp+20h] BYREF
  int *v116; // [rsp+140h] [rbp+40h]
  int v117; // [rsp+148h] [rbp+48h]
  int v118; // [rsp+14Ch] [rbp+4Ch]

  v98 = a2;
  HIDWORD(v93) = 0;
  v4 = &WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      12,
      19,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  if ( isRootPartition() )
  {
    LOBYTE(v6) = 0;
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v7 = *((_DWORD *)this + 36);
    LODWORD(v93) = a2[3];
    v8 = RimInputTypeToDeviceInputType(v7);
    v9 = a2[2];
    v10 = v8;
    if ( v9 == 1 )
    {
      ++*((_DWORD *)this + 314);
      IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v8, &v93);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( *((_BYTE *)i + 48) <= 2u && *(void **)i != TouchExtensibility::hDeviceUser )
        {
          v12 = RimInputTypeToDeviceInputType(*((_DWORD *)this + 36));
          if ( (_DWORD)v13 == v12 )
          {
            IVRootDeliver::PnP::SendRootPnpCreated(
              *((IVRootDeliver::PnP **)i + 4),
              (struct RawInputManagerDeviceObject *)&v93,
              v13);
            HIDWORD(v93) = IVRootDeliver::PnP::SendRootPnp(i, (struct DEVICEINFO *)2, (unsigned int)&v93, v14);
          }
        }
      }
      IVRootDeliver::PnP::SendRootPnpSyncState(2LL, v10, &v93);
      v6 = (*((_DWORD *)this + 36) & 0x10) != 0;
    }
    else if ( v9 == 3 )
    {
      --*((_DWORD *)this + 314);
    }
    qword_1C024E418 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v6 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v103 = 0;
        v19 = PsGetCurrentThreadWin32Thread(v17);
        v102 = v19;
        if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v102 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v94 = v103;
            v107 = 4LL;
            v106 = &v94;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &ActivityId,
              0LL,
              3u,
              &v105);
          }
        }
      }
      else
      {
        v102 = 0LL;
      }
      v20 = 0LL;
      while ( 1 )
      {
        v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
        if ( v21 )
          v20 = *v21;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v23, v22);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v26, v25) == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v20 == gptiRit )
        {
          break;
        }
        _InterlockedAdd(&gcDITHitTestWaiters, 1u);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v102, v25, v27, v28);
      v31 = PsGetCurrentThreadWin32Thread(v29);
      if ( v31 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v33 = PerformanceCounter.QuadPart - *(_QWORD *)(v31 + 8);
        Instance = UserCritTelemetry::getInstance();
        UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v33, 1);
        v30 = 0x200000010000000LL;
        *(LARGE_INTEGER *)(v31 + 8) = PerformanceCounter;
        if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0243738 - 1) > 2u
          && (qword_1C0243720 & 0x200000010000000LL) != 0
          && (qword_1C0243728 & 0x200000010000000LL) == qword_1C0243728
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LODWORD(Timeout) = 0;
          McTemplateK0xqx_EtwWriteTransfer(
            v35,
            &AcquiredSharedUserCritEvent,
            v36,
            v33,
            Timeout,
            gullUserCritAcquireToken,
            v93);
        }
        if ( v33 >= W32kEtwUserCritAcquireDelayTimeoutQPC
          && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          {
            LODWORD(Timeout) = 1000000 * v33 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              (__int64)gullUserCritAcquireToken,
              &AcquiredSharedUserCritTelemetryEvent,
              v36,
              v33,
              Timeout,
              gullUserCritAcquireToken);
          }
          _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
        }
        *(_QWORD *)(v31 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        (IVRootDeliver::Settings *)&v93,
        (const struct CONTAINER_ID *)v30);
      UserSessionSwitchLeaveCrit(v38, v37, v39, v40);
    }
  }
  else
  {
    v43 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( v43 )
      v43[1] = KeQueryPerformanceCounter(0LL);
    v44 = 0LL;
    v101 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v100 = 1;
      v45 = PsGetCurrentThreadWin32Thread(v42);
      v99 = v45;
      if ( v45 && (*(int *)(v45 + 24) > 0 || *(_DWORD *)(v99 + 48)) )
      {
        EtwActivityIdControl(3u, &v101);
        if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v95 = v100;
          v110 = 4LL;
          v109 = &v95;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E87,
            &v101,
            0LL,
            3u,
            &v108);
        }
      }
    }
    else
    {
      v99 = 0LL;
    }
    while ( 1 )
    {
      v46 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v46 )
        v44 = *v46;
      v49 = (PVOID)PsGetCurrentProcess(v48, v47);
      if ( v49 )
      {
        if ( v49 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v51, v50) == gpepCSRSS && v44 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v44 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v99 && (*(_DWORD *)(v99 + 48) || *(int *)(v99 + 24) > 0) )
    {
      *(_DWORD *)(v99 + 44) = 1;
      *(GUID *)(v99 + 28) = v101;
      if ( (unsigned int)dword_1C0244A70 > 6 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v114 = 0;
          v96 = v100;
          v113 = 4;
          v112 = &v96;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E30,
            &v101,
            0LL,
            3u,
            &v111);
          v52 = dword_1C0244A70;
        }
        if ( v52 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          v118 = 0;
          v97 = v100;
          v117 = 4;
          v116 = &v97;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0244A70,
            (unsigned __int8 *)dword_1C0211E5D,
            &v101,
            0LL,
            3u,
            &v115);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v44;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v55 = PsGetCurrentProcess(v54, v53),
          ProcessSessionId = PsGetProcessSessionIdEx(v55),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v63 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v63 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v64);
      if ( v63 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v63 + 488) & 0x1000000) != 0 )
          {
            v59 = *(unsigned int *)(v63 + 1232);
            if ( (v59 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v58, v60, v61);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v67, v70, v71);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v73, v72, v74, v75);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              while ( 1 )
              {
                v86 = (__int64 *)gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                v80 = *v86;
                v86[2] = 0LL;
                if ( !*(_DWORD *)(v80 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v77, v76, v78, v79);
                v83 = (PERESOURCE *)GetDomainLockRef(12LL, v76, v78, v79);
                if ( v83 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v82, v81, v84, v85);
                ExReleaseResourceAndLeaveCriticalRegion(*v83);
                HMUnlockObject(*v86);
                tagDomLock::LockExclusive(v83);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    if ( *((_QWORD *)this + 2) )
    {
      v87 = v98;
      if ( v98[2] == 2 )
      {
        v88 = 0;
        while ( 1 )
        {
          v89 = gpfnIVChildReInitialize ? gpfnIVChildReInitialize(v87[4]) : -1073741637;
          if ( v89 >= 0 )
            break;
          UserSleep(1000);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v92) = v89;
            LOBYTE(v90) = 2;
            WPP_RECORDER_SF_d(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v90,
              12,
              20,
              (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids,
              v92);
          }
          if ( (unsigned int)++v88 >= 0xA )
            KeBugCheck(0x164u);
        }
        HIDWORD(v93) = CBaseInput::ivChildLoop(this, v87[4], *((struct RawInputManagerObject **)this + 2));
      }
    }
    UserSessionSwitchLeaveCrit(v59, v58, v60, v61);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      12,
      21,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return HIDWORD(v93);
}
