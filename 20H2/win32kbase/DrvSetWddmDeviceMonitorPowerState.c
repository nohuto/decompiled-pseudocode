/*
 * XREFs of DrvSetWddmDeviceMonitorPowerState @ 0x1C00C9210
 * Callers:
 *     DrvSetMonitorPowerState @ 0x1C00C91C0 (DrvSetMonitorPowerState.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011E0D4 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C00139BC (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  wchar_t *v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r15
  wchar_t *v15; // rbx
  unsigned int v16; // edi
  unsigned int i; // edx
  wchar_t *j; // rbx
  wchar_t *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // esi
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r14
  __int64 v32; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v34; // rbx
  struct tagTHREADINFO **v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  PVOID CurrentProcess; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  int ProcessSessionId; // ebx
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
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned int v79; // r8d
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  PERESOURCE *v83; // rdi
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  int v89; // [rsp+50h] [rbp-B0h] BYREF
  int v90; // [rsp+54h] [rbp-ACh] BYREF
  int v91; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v92; // [rsp+5Ch] [rbp-A4h] BYREF
  _DWORD InputBuffer[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+68h] [rbp-98h]
  void *v95; // [rsp+70h] [rbp-90h]
  __int64 v96; // [rsp+78h] [rbp-88h]
  unsigned __int8 v97; // [rsp+80h] [rbp-80h]
  GUID ActivityId; // [rsp+84h] [rbp-7Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+98h] [rbp-68h] BYREF
  int *v100; // [rsp+B8h] [rbp-48h]
  __int64 v101; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v102; // [rsp+C8h] [rbp-38h] BYREF
  int *v103; // [rsp+E8h] [rbp-18h]
  __int64 v104; // [rsp+F0h] [rbp-10h]
  struct _EVENT_DATA_DESCRIPTOR v105; // [rsp+F8h] [rbp-8h] BYREF
  int *v106; // [rsp+118h] [rbp+18h]
  __int64 v107; // [rsp+120h] [rbp+20h]

  v4 = a2;
  InputBuffer[0] = a2;
  InputBuffer[1] = 0;
  v94 = a4;
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return;
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = a1;
  *(_QWORD *)(v9 + 32) = v4;
  WdLogEvent5_WdTrace(v9);
  if ( !a3 )
  {
    v12 = gpGraphicsDeviceList;
    v13 = 0;
    while ( v12 )
    {
      if ( (*((_DWORD *)v12 + 40) & 0x800000) != 0 && *((_QWORD *)v12 + 29) && (!a1 || *((_QWORD *)v12 + 18) == a1) )
        ++v13;
      v12 = (wchar_t *)*((_QWORD *)v12 + 16);
    }
    v95 = PALLOCMEM2(24 * v13, 1886221383LL, 1);
    v14 = (__int64)v95;
    if ( v95 )
    {
      v15 = gpGraphicsDeviceList;
      v16 = 0;
      while ( v15 )
      {
        if ( (*((_DWORD *)v15 + 40) & 0x800000) != 0 && *((_QWORD *)v15 + 29) && (!a1 || *((_QWORD *)v15 + 18) == a1) )
        {
          for ( i = 0; i < v16; ++i )
          {
            if ( *(_QWORD *)(v14 + 24LL * i + 16) == *((_QWORD *)v15 + 18) )
              break;
          }
          if ( v16 == i )
          {
            v68 = 3LL * v16;
            *(_QWORD *)(v14 + 8 * v68) = *((_QWORD *)v15 + 17);
            v69 = (void *)*((_QWORD *)v15 + 29);
            *(_QWORD *)(v14 + 8 * v68 + 8) = v69;
            *(_QWORD *)(v14 + 8 * v68 + 16) = *((_QWORD *)v15 + 18);
            ObfReferenceObject(v69);
            ++v16;
          }
        }
        v15 = (wchar_t *)*((_QWORD *)v15 + 16);
      }
      KeResetEvent(gpevtMonitorPowerWaiter);
      gfMonitorPowerInProgress = 1;
      UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
      v25 = 0;
      if ( v16 )
      {
        v26 = v14;
        do
        {
          DrvDxgkLogCodePointPacket(90LL, v25, v16, 0LL);
          v27 = GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)v26, 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v92, 1u, 1);
          v31 = v27;
          if ( v27 < 0 )
          {
            v76 = WdLogNewEntry5_WdError(v29, v28, v30);
            *(_QWORD *)(v76 + 24) = *(_QWORD *)v26;
            *(_QWORD *)(v76 + 32) = v31;
            WdLogEvent5_WdError(v76, v77);
          }
          ObfDereferenceObject(*(PVOID *)(v26 + 8));
          DrvDxgkLogCodePointPacket(91LL, (unsigned int)v31, 0LL, 0LL);
          ++v25;
          v26 += 24LL;
        }
        while ( v25 < v16 );
      }
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v24);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      ActivityId = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v97 = 1;
        v78 = PsGetCurrentThreadWin32Thread(v32);
        v96 = v78;
        if ( v78 && (*(int *)(v78 + 24) > 0 || *(_DWORD *)(v96 + 48)) )
        {
          EtwActivityIdControl(3u, &ActivityId);
          if ( (unsigned int)dword_1C0244A70 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v89 = v97;
            v101 = 4LL;
            v100 = &v89;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E87,
              &ActivityId,
              0LL,
              3u,
              &v99);
          }
        }
      }
      else
      {
        v96 = 0LL;
      }
      v34 = 0LL;
      while ( 1 )
      {
        v35 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v35 )
          v34 = *v35;
        CurrentProcess = (PVOID)PsGetCurrentProcess(v37, v36);
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v40, v39) == gpepCSRSS && v34 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v34 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v96 && (*(_DWORD *)(v96 + 48) || *(int *)(v96 + 24) > 0) )
      {
        *(_DWORD *)(v96 + 44) = 1;
        *(GUID *)(v96 + 28) = ActivityId;
        if ( (unsigned int)dword_1C0244A70 > 6 )
        {
          if ( tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v90 = v97;
            v104 = 4LL;
            v103 = &v90;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E30,
              &ActivityId,
              0LL,
              3u,
              &v102);
            v79 = dword_1C0244A70;
          }
          if ( v79 > 6 && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
          {
            v91 = v97;
            v107 = 4LL;
            v106 = &v91;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C0244A70,
              (unsigned __int8 *)dword_1C0211E5D,
              &ActivityId,
              0LL,
              3u,
              &v105);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v34;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v43 = PsGetCurrentProcess(v42, v41),
            ProcessSessionId = PsGetProcessSessionIdEx(v43),
            CurrentThreadProcess = PsGetCurrentThreadProcess(),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        CurrentThread = KeGetCurrentThread();
        v47 = 0LL;
        if ( !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v47 = *ThreadWin32Thread;
        }
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v48);
        if ( v47
          && CurrentProcessWin32Process
          && (*(_DWORD *)(v47 + 488) & 0x1000000) != 0
          && (*(_DWORD *)(v47 + 1232) & 0x80u) == 0
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
              v80 = *v67;
              v67[2] = 0LL;
              if ( !*(_DWORD *)(v80 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v64, v63, v65, v66);
              v83 = (PERESOURCE *)GetDomainLockRef(12LL, v63, v65, v66);
              if ( v83 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v82, v81, v84, v85);
              ExReleaseResourceAndLeaveCriticalRegion(*v83);
              HMUnlockObject(*v67);
              tagDomLock::LockExclusive(v83);
              v67 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v14 = (__int64)v95;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      gfMonitorPowerInProgress = 0;
      KeSetEvent(gpevtMonitorPowerWaiter, 0, 0);
      Win32FreePool(v14);
      return;
    }
    v86 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v86 + 24) = v13;
    WdLogEvent5_WdLowResource(v86);
  }
  for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
  {
    if ( (*((_DWORD *)j + 40) & 0x800000) != 0 && *((_QWORD *)j + 17) && (!a1 || *((_QWORD *)j + 18) == a1) )
    {
      v19 = gpGraphicsDeviceList;
      if ( gpGraphicsDeviceList )
      {
        v11 = *((_QWORD *)j + 18);
        do
        {
          if ( *((_QWORD *)v19 + 18) == v11 )
            break;
          v19 = (wchar_t *)*((_QWORD *)v19 + 16);
        }
        while ( v19 );
      }
      if ( v19 == j )
      {
        DrvDxgkLogCodePointPacket(90LL, 0LL, 0LL, 0LL);
        v70 = GreDeviceIoControlImpl(*((PDEVICE_OBJECT *)j + 17), 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v92, 1u, 1);
        v74 = v70;
        if ( v70 < 0 )
        {
          v87 = WdLogNewEntry5_WdError(v72, v71, v73);
          *(_QWORD *)(v87 + 24) = j;
          *(_QWORD *)(v87 + 32) = v74;
          WdLogEvent5_WdError(v87, v88);
        }
        DrvDxgkLogCodePointPacket(91LL, (unsigned int)v74, 0LL, 0LL);
      }
    }
  }
  v75 = WdLogNewEntry5_WdTrace(v11, v10);
  WdLogEvent5_WdTrace(v75);
}
