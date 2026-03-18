/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8950
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00C8900 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0120424 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C00B3BDC (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8880 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r14
  __int64 v30; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v32; // rbx
  struct tagTHREADINFO **v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PVOID CurrentProcess; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  int ProcessSessionId; // ebx
  __int64 v44; // rcx
  __int64 CurrentThreadProcess; // rax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 *v67; // rsi
  __int64 v68; // rdx
  void *v69; // rcx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // r8d
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  PERESOURCE *v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // [rsp+50h] [rbp-B0h] BYREF
  int v88; // [rsp+54h] [rbp-ACh] BYREF
  int v89; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v90; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD InputBuffer[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h]
  void *v93; // [rsp+70h] [rbp-90h]
  __int64 v94; // [rsp+78h] [rbp-88h]
  unsigned __int8 v95; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+98h] [rbp-68h] BYREF
  int *v98; // [rsp+B8h] [rbp-48h]
  __int64 v99; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v100; // [rsp+C8h] [rbp-38h] BYREF
  int *v101; // [rsp+E8h] [rbp-18h]
  __int64 v102; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v103; // [rsp+F8h] [rbp-8h] BYREF
  int *v104; // [rsp+118h] [rbp+18h]
  __int64 v105; // [rsp+120h] [rbp+20h]

  v4 = a2;
  InputBuffer[0] = a2;
  InputBuffer[1] = 0;
  v92 = a4;
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
    v93 = PALLOCMEM2(24 * v11, 0x706D7447u, 1);
    v12 = (__int64)v93;
    if ( v93 )
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
            v68 = 3LL * v14;
            *(_QWORD *)(v12 + 8 * v68) = *((_QWORD *)v13 + 17);
            v69 = (void *)*((_QWORD *)v13 + 29);
            *(_QWORD *)(v12 + 8 * v68 + 8) = v69;
            *(_QWORD *)(v12 + 8 * v68 + 16) = *((_QWORD *)v13 + 18);
            ObfReferenceObject(v69);
            ++v14;
          }
        }
        v13 = (wchar_t *)*((_QWORD *)v13 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
      v23 = 0;
      if ( v14 )
      {
        v24 = v12;
        do
        {
          DrvDxgkLogCodePointPacket(90, v23, v14, 0);
          v25 = GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)v24, 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v90, 1u, 1);
          v29 = v25;
          if ( v25 < 0 )
          {
            v76 = WdLogNewEntry5_WdError(v27, v26, v28);
            *(_QWORD *)(v76 + 24) = *(_QWORD *)v24;
            *(_QWORD *)(v76 + 32) = v29;
            WdLogEvent5_WdError(v76);
          }
          ObfDereferenceObject(*(PVOID *)(v24 + 8));
          DrvDxgkLogCodePointPacket(91, v29, 0, 0);
          ++v23;
          v24 += 24LL;
        }
        while ( v23 < v14 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v22);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v95 = 1;
        v77 = PsGetCurrentThreadWin32Thread(v30);
        v94 = v77;
        if ( v77 && (*(int *)(v77 + 24) > 0 || *(_DWORD *)(v94 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
          {
            v87 = v95;
            v99 = 4LL;
            v98 = &v87;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0246A70,
              (unsigned __int8 *)dword_1C0213E87,
              &ActivityId,
              0LL,
              3u,
              &v97);
          }
        }
      }
      else
      {
        v94 = 0LL;
      }
      v32 = 0LL;
      while ( 1 )
      {
        v33 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v33 )
          v32 = *v33;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v35, v34);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v38, v37) == gpepCSRSS && v32 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v32 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        if ( v94 )
        {
          v38 = *(unsigned int *)(v94 + 24);
          if ( *(_DWORD *)(v94 + 48) || (int)v38 > 0 )
          {
            *(_DWORD *)(v94 + 44) = 1;
            *(GUID *)(v94 + 28) = ActivityId;
            if ( (unsigned int)dword_1C0246A70 > 6 )
            {
              if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v88 = v95;
                v102 = 4LL;
                v101 = &v88;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E30,
                  &ActivityId,
                  0LL,
                  3u,
                  &v100);
                v78 = dword_1C0246A70;
              }
              if ( v78 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
              {
                v89 = v95;
                v105 = 4LL;
                v104 = &v89;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C0246A70,
                  (unsigned __int8 *)dword_1C0213E5D,
                  &ActivityId,
                  0LL,
                  3u,
                  &v103);
              }
            }
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit(v38);
      gptiCurrent = v32;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess(v39)
        || (v42 = PsGetCurrentProcess(v41, v40),
            ProcessSessionId = PsGetProcessSessionIdEx(v42),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v44),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v47 = 0LL;
        if ( !IsThreadCrossSessionAttached(v41) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v47 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v48);
        if ( v47
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v47 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v47 + 1224) & 0x80u) == 0
          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v51, v52, v53);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v55, v54, v57, v58);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v60, v59, v61, v62);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v67 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v67[2];
              v79 = *v67;
              v67[2] = 0LL;
              if ( !*(_DWORD *)(v79 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v64, v63, v65, v66);
              v82 = (PERESOURCE *)GetDomainLockRef(12LL, v63, v65, v66);
              if ( v82 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v81, v80, v83, v84);
              ExReleaseResourceAndLeaveCriticalRegion(*v82);
              HMUnlockObject(*v67);
              tagDomLock::LockExclusive(v82);
              v67 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v12 = (__int64)v93;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      Win32FreePool(v12);
      return;
    }
    v85 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v85 + 24) = v11;
    WdLogEvent5_WdLowResource(v85);
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
        v70 = GreDeviceIoControlImpl(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v90, 1u, 1);
        v74 = v70;
        if ( v70 < 0 )
        {
          v86 = WdLogNewEntry5_WdError(v72, v71, v73);
          *(_QWORD *)(v86 + 24) = j;
          *(_QWORD *)(v86 + 32) = v74;
          WdLogEvent5_WdError(v86);
        }
        DrvDxgkLogCodePointPacket(91, v74, 0, 0);
      }
    }
  }
  v75 = WdLogNewEntry5_WdTrace(v9);
  WdLogEvent5_WdTrace(v75);
}
