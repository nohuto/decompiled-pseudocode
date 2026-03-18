/*
 * XREFs of ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01BBF00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RimInputTypeToDeviceInputType @ 0x1C00387EC (RimInputTypeToDeviceInputType.c)
 *     UserSleep @ 0x1C0049DA0 (UserSleep.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z @ 0x1C008A3B0 (-UpdateUserCritInfo@UserCritTelemetry@@QEAAX_KW4BucketType@1@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?getInstance@UserCritTelemetry@@SAAEAV1@XZ @ 0x1C008A5A0 (-getInstance@UserCritTelemetry@@SAAEAV1@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x1C0132524 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01B237C (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BE92C (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BEBCC (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BEF64 (-SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z @ 0x1C01BFAB8 (-ivChildLoop@CBaseInput@@AEAAJKPEAURawInputManagerObject@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v35; // rcx
  __int64 v37; // rcx
  LARGE_INTEGER *v38; // rbx
  struct tagTHREADINFO *v39; // rdi
  __int64 v40; // rax
  struct tagTHREADINFO **v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PVOID v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int ProcessSessionId; // ebx
  __int64 v53; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v60; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  PERESOURCE *v66; // rdi
  __int64 *v67; // rsi
  _DWORD *v68; // rsi
  int v69; // ebx
  int v70; // edi
  int v71; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR v73; // [rsp+28h] [rbp-D8h]
  __int64 v74; // [rsp+30h] [rbp-D0h] BYREF
  int v75; // [rsp+38h] [rbp-C8h] BYREF
  int v76; // [rsp+3Ch] [rbp-C4h] BYREF
  int v77; // [rsp+40h] [rbp-C0h] BYREF
  int v78; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v79; // [rsp+48h] [rbp-B8h]
  __int64 v80; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v81; // [rsp+58h] [rbp-A8h]
  GUID v82; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v84; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+90h] [rbp-70h] BYREF
  int *v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+C0h] [rbp-40h] BYREF
  int *v90; // [rsp+E0h] [rbp-20h]
  __int64 v91; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v92; // [rsp+F0h] [rbp-10h] BYREF
  int *v93; // [rsp+110h] [rbp+10h]
  int v94; // [rsp+118h] [rbp+18h]
  int v95; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+120h] [rbp+20h] BYREF
  int *v97; // [rsp+140h] [rbp+40h]
  int v98; // [rsp+148h] [rbp+48h]
  int v99; // [rsp+14Ch] [rbp+4Ch]

  v79 = a2;
  HIDWORD(v74) = 0;
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
    LODWORD(v74) = a2[3];
    v8 = RimInputTypeToDeviceInputType(v7);
    v9 = a2[2];
    v10 = v8;
    if ( v9 == 1 )
    {
      ++*((_DWORD *)v3 + 314);
      IVRootDeliver::PnP::SendRootPnpSyncState(1LL, v8, &v74);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( *((_BYTE *)i + 48) <= 2u && *(void **)i != TouchExtensibility::hDeviceUser )
        {
          v12 = RimInputTypeToDeviceInputType(*((_DWORD *)v3 + 36));
          if ( (_DWORD)v13 == v12 )
          {
            IVRootDeliver::PnP::SendRootPnpCreated(
              *((IVRootDeliver::PnP **)i + 4),
              (struct RawInputManagerDeviceObject *)&v74,
              v13);
            HIDWORD(v74) = IVRootDeliver::PnP::SendRootPnp(i, (struct DEVICEINFO *)2, (unsigned int)&v74, v14);
          }
        }
      }
      IVRootDeliver::PnP::SendRootPnpSyncState(2LL, v10, &v74);
      v6 = (*((_DWORD *)v3 + 36) & 0x10) != 0;
    }
    else if ( v9 == 3 )
    {
      --*((_DWORD *)v3 + 314);
    }
    qword_1C02563A8 = 0LL;
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
        v84 = 0;
        v19 = PsGetCurrentThreadWin32Thread(v17);
        v83 = v19;
        if ( v19 && (*(int *)(v19 + 24) > 0 || *(_DWORD *)(v83 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v75 = v84;
            v88 = 4LL;
            v87 = &v75;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId,
              0LL,
              3u,
              &v86);
          }
        }
      }
      else
      {
        v83 = 0LL;
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
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v83);
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
          && (unsigned __int8)(byte_1C024B738 - 1) > 2u
          && (qword_1C024B720 & 0x200000010000000LL) != 0
          && (qword_1C024B728 & 0x200000010000000LL) == qword_1C024B728
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
            v74);
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
        (IVRootDeliver::Settings *)&v74,
        (const struct CONTAINER_ID *)v28);
      UserSessionSwitchLeaveCrit(v35);
    }
  }
  else
  {
    v38 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5);
    if ( v38 )
      v38[1] = KeQueryPerformanceCounter(0LL);
    v39 = 0LL;
    v82 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v81 = 1;
      v40 = PsGetCurrentThreadWin32Thread(v37);
      v80 = v40;
      if ( v40 && (*(int *)(v40 + 24) > 0 || *(_DWORD *)(v80 + 48)) )
      {
        EtwActivityIdControl(3u, &v82);
        if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          v76 = v81;
          v91 = 4LL;
          v90 = &v76;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199F7,
            &v82,
            0LL,
            3u,
            &v89);
        }
      }
    }
    else
    {
      v80 = 0LL;
    }
    while ( 1 )
    {
      v41 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v41 )
        v39 = *v41;
      v44 = (PVOID)PsGetCurrentProcess(v43, v42);
      if ( v44 )
      {
        if ( v44 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v46, v45) == gpepCSRSS && v39 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v39 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      if ( v80 )
      {
        v46 = *(unsigned int *)(v80 + 24);
        if ( *(_DWORD *)(v80 + 48) || (int)v46 > 0 )
        {
          *(_DWORD *)(v80 + 44) = 1;
          *(GUID *)(v80 + 28) = v82;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v95 = 0;
              v77 = v81;
              v94 = 4;
              v93 = &v77;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &v82,
                0LL,
                3u,
                &v92);
              v47 = dword_1C024C960;
            }
            if ( v47 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v99 = 0;
              v78 = v81;
              v98 = 4;
              v97 = &v78;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &v82,
                0LL,
                3u,
                &v96);
            }
          }
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v46);
    gptiCurrent = v39;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess(v48)
      || (v51 = PsGetCurrentProcess(v50, v49),
          ProcessSessionId = PsGetProcessSessionIdEx(v51),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v53),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v56 = 0LL;
      if ( !IsThreadCrossSessionAttached(v50) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v56 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v57);
      if ( v56 )
      {
        if ( CurrentProcessWin32Process )
        {
          if ( (*(_DWORD *)(v56 + 480) & 0x1000000) != 0 )
          {
            v50 = *(unsigned int *)(v56 + 1216);
            if ( (v50 & 0x80u) == 0LL && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
            {
              DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v60);
              if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v62);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
              while ( 1 )
              {
                v67 = (__int64 *)gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                v64 = *v67;
                v67[2] = 0LL;
                if ( !*(_DWORD *)(v64 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v63);
                v66 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v66 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v65);
                ExReleaseResourceAndLeaveCriticalRegion(*v66);
                HMUnlockObject(*v67);
                tagDomLock::LockExclusive(v66);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
            }
          }
        }
      }
    }
    if ( *((_QWORD *)v3 + 2) )
    {
      v68 = v79;
      if ( v79[2] == 2 )
      {
        v69 = 0;
        while ( 1 )
        {
          v70 = gpfnIVChildReInitialize ? gpfnIVChildReInitialize(v68[4]) : -1073741637;
          if ( v70 >= 0 )
            break;
          UserSleep(1000);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v73) = v70;
            LOBYTE(v71) = 2;
            WPP_RECORDER_SF_d(
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v71,
              12,
              20,
              (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids,
              v73);
          }
          if ( (unsigned int)++v69 >= 0xA )
            KeBugCheck(0x164u);
        }
        HIDWORD(v74) = CBaseInput::ivChildLoop(v3, v68[4], *((struct RawInputManagerObject **)v3 + 2));
      }
    }
    UserSessionSwitchLeaveCrit(v50);
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
  return HIDWORD(v74);
}
