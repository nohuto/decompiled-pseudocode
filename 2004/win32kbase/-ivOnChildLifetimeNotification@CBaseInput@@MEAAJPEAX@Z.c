/*
 * XREFs of ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B61A0
 * Callers:
 *     <none>
 * Callees:
 *     RimInputTypeToDeviceInputType @ 0x1C0015E64 (RimInputTypeToDeviceInputType.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     UserSleep @ 0x1C0057AB0 (UserSleep.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C0091400 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C00915F0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C012C534 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AC61C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B8BCC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01B8E6C (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01B9204 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01B9D58 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::ivOnChildLifetimeNotification(CBaseInput *this, _DWORD *a2)
{
  CBaseInput *v3; // r13
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
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v31; // rbx
  struct UserCritTelemetry *Instance; // rax
  __int64 v33; // rcx
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v40; // rcx
  LARGE_INTEGER *v41; // rbx
  struct tagTHREADINFO *v42; // rdi
  __int64 v43; // rax
  struct tagTHREADINFO **v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  PVOID v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // r8d
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  int ProcessSessionId; // ebx
  __int64 v56; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  PERESOURCE *v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 *v85; // rsi
  _DWORD *v86; // rsi
  int v87; // ebx
  int v88; // edi
  int v89; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v91; // [rsp+28h] [rbp-D8h]
  __int64 v92; // [rsp+30h] [rbp-D0h] BYREF
  int v93; // [rsp+38h] [rbp-C8h] BYREF
  int v94; // [rsp+3Ch] [rbp-C4h] BYREF
  int v95; // [rsp+40h] [rbp-C0h] BYREF
  int v96; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v97; // [rsp+48h] [rbp-B8h]
  __int64 v98; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v99; // [rsp+58h] [rbp-A8h]
  GUID v100; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v101; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v102; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v104; // [rsp+90h] [rbp-70h] BYREF
  int *v105; // [rsp+B0h] [rbp-50h]
  __int64 v106; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v107; // [rsp+C0h] [rbp-40h] BYREF
  int *v108; // [rsp+E0h] [rbp-20h]
  __int64 v109; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+F0h] [rbp-10h] BYREF
  int *v111; // [rsp+110h] [rbp+10h]
  int v112; // [rsp+118h] [rbp+18h]
  int v113; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v114; // [rsp+120h] [rbp+20h] BYREF
  int *v115; // [rsp+140h] [rbp+40h]
  int v116; // [rsp+148h] [rbp+48h]
  int v117; // [rsp+14Ch] [rbp+4Ch]

  v97 = a2;
  HIDWORD(v92) = 0;
  v3 = this;
  v4 = &WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CBaseInput *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v4) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v4,
        12,
        19,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
    }
  }
  if ( isRootPartition((__int64)this, (__int64)v4) )
  {
    LOBYTE(v6) = 0;
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    v7 = *((_DWORD *)v3 + 36);
    LODWORD(v92) = a2[3];
    v8 = RimInputTypeToDeviceInputType(v7);
    v9 = a2[2];
    v10 = v8;
    if ( v9 == 1 )
    {
      ++*((_DWORD *)v3 + 314);
      IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v8, &v92);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( *((_BYTE *)i + 48) <= 2u && *(void **)i != TouchExtensibility::hDeviceUser )
        {
          v12 = RimInputTypeToDeviceInputType(*((_DWORD *)v3 + 36));
          if ( (_DWORD)v13 == v12 )
          {
            IVRootDeliver::PnP::SendRootPnpCreated(
              *((IVRootDeliver::PnP **)i + 4),
              (struct RawInputManagerDeviceObject *)&v92,
              v13);
            HIDWORD(v92) = IVRootDeliver::PnP::SendRootPnp(i, (struct DEVICEINFO *)2, (unsigned int)&v92, v14);
          }
        }
      }
      IVRootDeliver::PnP::SendRootPnpSyncState(2LL, v10, &v92);
      v6 = (*((_DWORD *)v3 + 36) & 0x10) != 0;
    }
    else if ( v9 == 3 )
    {
      --*((_DWORD *)v3 + 314);
    }
    qword_1C0250418 = 0LL;
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
        v102 = 0;
        v19 = PsGetCurrentThreadWin32Thread(v17);
        v101 = v19;
        if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v101 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v93 = v102;
            v106 = 4LL;
            v105 = &v93;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId,
              0LL,
              3u,
              &v104);
          }
        }
      }
      else
      {
        v101 = 0LL;
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
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v101);
      v29 = PsGetCurrentThreadWin32Thread(v27);
      if ( v29 )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v31 = PerformanceCounter.QuadPart - *(_QWORD *)(v29 + 8);
        Instance = UserCritTelemetry::getInstance();
        UserCritTelemetry::UpdateUserCritInfo((__int64)Instance, v31, 1);
        v28 = 0x200000010000000LL;
        *(LARGE_INTEGER *)(v29 + 8) = PerformanceCounter;
        if ( (W32kEtwEnabledKeyword & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0245748 - 1) > 2u
          && (qword_1C0245730 & 0x200000010000000LL) != 0
          && (qword_1C0245738 & 0x200000010000000LL) == qword_1C0245738
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LODWORD(Timeout) = 0;
          McTemplateK0xqx_EtwWriteTransfer(
            v33,
            &AcquiredSharedUserCritEvent,
            v34,
            v31,
            Timeout,
            gullUserCritAcquireToken,
            v92);
        }
        if ( v31 >= W32kEtwUserCritAcquireDelayTimeoutQPC
          && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
        {
          if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
          {
            LODWORD(Timeout) = 1000000 * v31 / gliQpcFreq.QuadPart;
            McTemplateK0xqx_EtwWriteTransfer(
              (__int64)gullUserCritAcquireToken,
              &AcquiredSharedUserCritTelemetryEvent,
              v34,
              v31,
              Timeout,
              gullUserCritAcquireToken);
          }
          _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
        }
        *(_QWORD *)(v29 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        (IVRootDeliver::Settings *)&v92,
        (const struct CONTAINER_ID *)v28);
      UserSessionSwitchLeaveCrit(v36, v35, v37, v38);
    }
  }
  else
  {
    v41 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( v41 )
      v41[1] = KeQueryPerformanceCounter(0LL);
    v42 = 0LL;
    v100 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v99 = 1;
      v43 = PsGetCurrentThreadWin32Thread(v40);
      v98 = v43;
      if ( v43 && (*(int *)(v43 + 24) > 0 || *(_DWORD *)(v98 + 48)) )
      {
        EtwActivityIdControl(3u, &v100);
        if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          v94 = v99;
          v109 = 4LL;
          v108 = &v94;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C0246A70,
            (unsigned __int8 *)dword_1C0213E87,
            &v100,
            0LL,
            3u,
            &v107);
        }
      }
    }
    else
    {
      v98 = 0LL;
    }
    while ( 1 )
    {
      v44 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v44 )
        v42 = *v44;
      v47 = (PVOID)PsGetCurrentProcess(v46, v45);
      if ( v47 )
      {
        if ( v47 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v49, v48) == gpepCSRSS && v42 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v42 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v98 )
      {
        v49 = *(unsigned int *)(v98 + 24);
        if ( *(_DWORD *)(v98 + 48) || (int)v49 > 0 )
        {
          *(_DWORD *)(v98 + 44) = 1;
          *(GUID *)(v98 + 28) = v100;
          if ( (unsigned int)dword_1C0246A70 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v113 = 0;
              v95 = v99;
              v112 = 4;
              v111 = &v95;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E30,
                &v100,
                0LL,
                3u,
                &v110);
              v50 = dword_1C0246A70;
            }
            if ( v50 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v117 = 0;
              v96 = v99;
              v116 = 4;
              v115 = &v96;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E5D,
                &v100,
                0LL,
                3u,
                &v114);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v49);
    gptiCurrent = v42;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v51)
      || (v54 = PsGetCurrentProcess(v53, v52),
          ProcessSessionId = PsGetProcessSessionIdEx(v54),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v56),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v62 = 0LL;
      if ( !IsThreadCrossSessionAttached(v53) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v62 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v63);
      if ( v62 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v62 + 480) & 0x1000000) != 0 )
          {
            v53 = *(unsigned int *)(v62 + 1224);
            if ( (v53 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v58, v59, v60);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v67, v66, v69, v70);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v72, v71, v73, v74);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              while ( 1 )
              {
                v85 = (__int64 *)gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                v79 = *v85;
                v85[2] = 0LL;
                if ( !*(_DWORD *)(v79 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v76, v75, v77, v78);
                v82 = (PERESOURCE *)GetDomainLockRef(12LL, v75, v77, v78);
                if ( v82 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v81, v80, v83, v84);
                ExReleaseResourceAndLeaveCriticalRegion(*v82);
                HMUnlockObject(*v85);
                tagDomLock::LockExclusive(v82);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    if ( *((_QWORD *)v3 + 2) )
    {
      v86 = v97;
      if ( v97[2] == 2 )
      {
        v87 = 0;
        while ( 1 )
        {
          v88 = gpfnIVChildReInitialize ? gpfnIVChildReInitialize(v86[4]) : -1073741637;
          if ( v88 >= 0 )
            break;
          UserSleep(1000);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v91) = v88;
            LOBYTE(v89) = 2;
            WPP_RECORDER_SF_d(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v89,
              12,
              20,
              (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
              v91);
          }
          if ( (unsigned int)++v87 >= 0xA )
            KeBugCheck(0x164u);
        }
        HIDWORD(v92) = CBaseInput::ivChildLoop(v3, v86[4], *((struct RawInputManagerObject **)v3 + 2));
      }
    }
    UserSessionSwitchLeaveCrit(v53, v58, v59, v60);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      12,
      21,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return HIDWORD(v92);
}
