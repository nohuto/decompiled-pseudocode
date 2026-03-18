/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8320
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00C82D0 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01263B4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0096544 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  wchar_t *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r15
  wchar_t *v13; // rbx
  unsigned int v14; // edi
  unsigned int i; // edx
  wchar_t *j; // rbx
  wchar_t *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v29; // rbx
  struct tagTHREADINFO **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PVOID CurrentProcess; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int ProcessSessionId; // ebx
  __int64 v41; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v44; // rbx
  __int64 v45; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v48; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 *v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  void *v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rcx
  PERESOURCE *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // [rsp+50h] [rbp-B0h] BYREF
  int v72; // [rsp+54h] [rbp-ACh] BYREF
  int v73; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v74; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD InputBuffer[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h]
  void *v77; // [rsp+70h] [rbp-90h]
  __int64 v78; // [rsp+78h] [rbp-88h]
  unsigned __int8 v79; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+98h] [rbp-68h] BYREF
  int *v82; // [rsp+B8h] [rbp-48h]
  __int64 v83; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+C8h] [rbp-38h] BYREF
  int *v85; // [rsp+E8h] [rbp-18h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+F8h] [rbp-8h] BYREF
  int *v88; // [rsp+118h] [rbp+18h]
  __int64 v89; // [rsp+120h] [rbp+20h]

  v4 = a2;
  InputBuffer[0] = a2;
  InputBuffer[1] = 0;
  v76 = a4;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return;
  v8 = WdLogNewEntry5_WdTrace(v7);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = v4;
  WdLogEvent5_WdTrace(v8);
  if ( !a3 )
  {
    v10 = gpGraphicsDeviceList;
    v11 = 0;
    while ( v10 )
    {
      if ( (*((_DWORD *)v10 + 40) & 0x800000) != 0 && *((_QWORD *)v10 + 29) && (!a1 || *((_QWORD *)v10 + 18) == a1) )
        ++v11;
      v10 = (wchar_t *)*((_QWORD *)v10 + 16);
    }
    v77 = PALLOCMEM2(24 * v11, 0x706D7447u, 1);
    v12 = (__int64)v77;
    if ( v77 )
    {
      v13 = gpGraphicsDeviceList;
      v14 = 0;
      while ( v13 )
      {
        if ( (*((_DWORD *)v13 + 40) & 0x800000) != 0 && *((_QWORD *)v13 + 29) && (!a1 || *((_QWORD *)v13 + 18) == a1) )
        {
          for ( i = 0; i < v14; ++i )
          {
            if ( *(_QWORD *)(v12 + 24LL * i + 16) == *((_QWORD *)v13 + 18) )
              break;
          }
          if ( v14 == i )
          {
            v55 = 3LL * v14;
            *(_QWORD *)(v12 + 8 * v55) = *((_QWORD *)v13 + 17);
            v56 = (void *)*((_QWORD *)v13 + 29);
            *(_QWORD *)(v12 + 8 * v55 + 8) = v56;
            *(_QWORD *)(v12 + 8 * v55 + 16) = *((_QWORD *)v13 + 18);
            ObfReferenceObject(v56);
            ++v14;
          }
        }
        v13 = (wchar_t *)*((_QWORD *)v13 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit(v18);
      v20 = 0;
      if ( v14 )
      {
        v21 = v12;
        do
        {
          DrvDxgkLogCodePointPacket(90, v20, v14, 0);
          v22 = GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)v21, 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v74, 1u, 1);
          v26 = v22;
          if ( v22 < 0 )
          {
            v63 = WdLogNewEntry5_WdError(v24, v23, v25);
            *(_QWORD *)(v63 + 24) = *(_QWORD *)v21;
            *(_QWORD *)(v63 + 32) = v26;
            WdLogEvent5_WdError(v63);
          }
          ObfDereferenceObject(*(PVOID *)(v21 + 8));
          DrvDxgkLogCodePointPacket(91, v26, 0, 0);
          ++v20;
          v21 += 24LL;
        }
        while ( v20 < v14 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v19);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v79 = 1;
        v64 = PsGetCurrentThreadWin32Thread(v27);
        v78 = v64;
        if ( v64 && (*(int *)(v64 + 24) > 0 || *(_DWORD *)(v78 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
          {
            v71 = v79;
            v83 = 4LL;
            v82 = &v71;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId,
              0LL,
              3u,
              &v81);
          }
        }
      }
      else
      {
        v78 = 0LL;
      }
      v29 = 0LL;
      while ( 1 )
      {
        v30 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v30 )
          v29 = *v30;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v32, v31);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v35, v34) == gpepCSRSS && v29 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v29 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v78 )
        {
          v35 = *(unsigned int *)(v78 + 24);
          if ( *(_DWORD *)(v78 + 48) || (int)v35 > 0 )
          {
            *(_DWORD *)(v78 + 44) = 1;
            *(GUID *)(v78 + 28) = ActivityId;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v72 = v79;
                v86 = 4LL;
                v85 = &v72;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &ActivityId,
                  0LL,
                  3u,
                  &v84);
                v65 = dword_1C024C960;
              }
              if ( v65 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
              {
                v73 = v79;
                v89 = 4LL;
                v88 = &v73;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &ActivityId,
                  0LL,
                  3u,
                  &v87);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v35);
      gptiCurrent = v29;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess(v36)
        || (v39 = PsGetCurrentProcess(v38, v37),
            ProcessSessionId = PsGetProcessSessionIdEx(v39),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v41),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v44 = 0LL;
        if ( !IsThreadCrossSessionAttached(v38) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v44 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v45);
        if ( v44
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v44 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v44 + 1216) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v48);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v50);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v52 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v52[2];
              v66 = *v52;
              v52[2] = 0LL;
              if ( !*(_DWORD *)(v66 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v51);
              v68 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v68 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v67);
              ExReleaseResourceAndLeaveCriticalRegion(*v68);
              HMUnlockObject(*v52);
              tagDomLock::LockExclusive(v68);
              v52 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v12 = (__int64)v77;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      Win32FreePool(v12, v53, v54);
      return;
    }
    v69 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v69 + 24) = v11;
    WdLogEvent5_WdLowResource(v69);
  }
  for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
  {
    if ( (*((_DWORD *)j + 40) & 0x800000) != 0 && *((_QWORD *)j + 17) && (!a1 || *((_QWORD *)j + 18) == a1) )
    {
      v17 = gpGraphicsDeviceList;
      if ( gpGraphicsDeviceList )
      {
        v9 = *((_QWORD *)j + 18);
        do
        {
          if ( *((_QWORD *)v17 + 18) == v9 )
            break;
          v17 = (wchar_t *)*((_QWORD *)v17 + 16);
        }
        while ( v17 );
      }
      if ( v17 == j )
      {
        DrvDxgkLogCodePointPacket(90, 0, 0, 0);
        v57 = GreDeviceIoControlImpl(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v74, 1u, 1);
        v61 = v57;
        if ( v57 < 0 )
        {
          v70 = WdLogNewEntry5_WdError(v59, v58, v60);
          *(_QWORD *)(v70 + 24) = j;
          *(_QWORD *)(v70 + 32) = v61;
          WdLogEvent5_WdError(v70);
        }
        DrvDxgkLogCodePointPacket(91, v61, 0, 0);
      }
    }
  }
  v62 = WdLogNewEntry5_WdTrace(v9);
  WdLogEvent5_WdTrace(v62);
}
