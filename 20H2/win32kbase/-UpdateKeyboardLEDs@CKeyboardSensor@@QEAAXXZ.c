/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00251C0
 * Callers:
 *     UpdateKeyLights @ 0x1C0021E30 (UpdateKeyLights.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0024DB0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C0021F44 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00220E8 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x1C0022344 (ApiSetEditionUpdateRemoteLights.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C00223E0 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     RIMDeviceIoControl @ 0x1C0024840 (RIMDeviceIoControl.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0025730 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // r14
  struct RawInputManagerObject *v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  struct DEVICEINFO *i; // rcx
  int v16; // r15d
  int v17; // r12d
  int v18; // r14d
  __int64 v19; // rbx
  int v20; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v22; // rbx
  struct tagTHREADINFO **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  PVOID CurrentProcess; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  struct tagKERNELHANDLETABLEENTRY *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  char *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  PERESOURCE *v67; // rdi
  __int64 v68; // r8
  __int64 v69; // r9
  SIZE_T Length; // [rsp+38h] [rbp-D0h]
  int v71; // [rsp+68h] [rbp-A0h] BYREF
  int v72; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v73; // [rsp+70h] [rbp-98h] BYREF
  int v74; // [rsp+74h] [rbp-94h] BYREF
  __int64 v75; // [rsp+78h] [rbp-90h] BYREF
  PVOID v76; // [rsp+80h] [rbp-88h] BYREF
  __int64 v77; // [rsp+88h] [rbp-80h] BYREF
  char v78; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+98h] [rbp-70h]
  unsigned __int8 v80; // [rsp+A0h] [rbp-68h]
  GUID ActivityId; // [rsp+A4h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+B8h] [rbp-50h] BYREF
  int *v83; // [rsp+D8h] [rbp-30h]
  __int64 v84; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+E8h] [rbp-20h] BYREF
  int *v86; // [rsp+108h] [rbp+0h]
  __int64 v87; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v89; // [rsp+138h] [rbp+30h]
  __int64 v90; // [rsp+140h] [rbp+38h]

  if ( CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    if ( (struct _KTHREAD *)qword_1C024E418 == KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    if ( !gdwUpdateKeyboard )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    v6 = *((_QWORD *)this + 2);
    if ( v6 )
    {
      if ( *((_QWORD *)this + 1) != -1LL
        && *(struct _KTHREAD **)(v6 + 40) == KeGetCurrentThread()
        && *((_QWORD *)this + 155) )
      {
        v7 = gdwUpdateKeyboard;
        v71 = gbNonServiceSession;
        *(_QWORD *)&qword_1C024A738 = gKbdImeStatus;
        gdwUpdateKeyboard &= 0xFFFFFFF8;
        dword_1C024A72C = gktp;
        word_1C024A730 = word_1C024EA00;
        dword_1C024A728 = gklp;
        dword_1C024A740 = dword_1C024E9F8;
        v8 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
        v9 = *((_QWORD *)this + 1);
        dword_1C024A750 = dword_1C02490C8;
        qword_1C024A748 = gRemoteClientKeyboardType;
        RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v76, v8);
        UserSessionSwitchLeaveCrit(v10);
        v11 = 0LL;
        CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
          (CInpLockSharedIfNeeded *)&v77,
          (struct CInpPushLock *)&CBaseInput::_sLock);
        v75 = Win32AllocPool(16LL * *((_QWORD *)this + 155), 1885947971LL);
        v14 = v75;
        if ( v75 )
        {
          for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
          {
            if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) && *((_QWORD *)i + 29) )
            {
              if ( (unsigned __int64)(unsigned int)v11 >= *((_QWORD *)this + 155) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v11, v12, v13);
                break;
              }
              v54 = 2LL * (unsigned int)v11;
              v11 = (unsigned int)(v11 + 1);
              *(_QWORD *)(v14 + 8 * v54) = *((_QWORD *)i + 2);
              *(_WORD *)(v14 + 8 * v54 + 8) = *((_WORD *)i + 232);
            }
          }
        }
        if ( !v78 )
        {
          ExReleasePushLockSharedEx(v77, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( (_DWORD)v11 )
        {
          v16 = v7 & 1;
          v17 = v7 & 2;
          v18 = v7 & 4;
          v19 = v14;
          v20 = v71;
          do
          {
            v71 = 0;
            if ( v16 )
            {
              LODWORD(Length) = 0;
              RIMDeviceIoControl(
                v9,
                *(char **)v19,
                0xB0004u,
                &dword_1C024A72C,
                6u,
                0LL,
                Length,
                &v71,
                &giosbKbdControl,
                1,
                0,
                0);
            }
            if ( v17 )
            {
              LODWORD(Length) = 0;
              RIMDeviceIoControl(
                v9,
                *(char **)v19,
                0xB0008u,
                &dword_1C024A728,
                4u,
                0LL,
                Length,
                &v71,
                &giosbKbdControl,
                1,
                0,
                0);
            }
            if ( v18
              && (*(_BYTE *)(v19 + 8) == 7 && *(_BYTE *)(v19 + 9) == 82 || v20 && qword_1C024A748 == 0x2000200000007LL) )
            {
              v58 = *(char **)v19;
              LODWORD(Length) = 0;
              v72 = 0;
              RIMDeviceIoControl(
                v9,
                v58,
                0xB1004u,
                &qword_1C024A738,
                0xCu,
                0LL,
                Length,
                &v72,
                &giosbKbdControl,
                1,
                0,
                0);
            }
            v19 += 16LL;
            --v11;
          }
          while ( v11 );
          v14 = v75;
        }
        if ( v14 )
          Win32FreePool(v14);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v80 = 1;
          v59 = PsGetCurrentThreadWin32Thread();
          v79 = v59;
          if ( v59 && (*(int *)(v59 + 24) > 0 || *(_DWORD *)(v79 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C0244A70 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v60, v61) )
              {
                v73 = v80;
                v84 = 4LL;
                v83 = &v73;
                tlgWriteTransfer_EtwWriteTransfer(
                  (int)&dword_1C0244A70,
                  (int)&dword_1C0211E87,
                  (int)&ActivityId,
                  0,
                  3u,
                  &v82);
              }
            }
          }
        }
        else
        {
          v79 = 0LL;
        }
        v22 = 0LL;
        while ( 1 )
        {
          v23 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v23 )
            v22 = *v23;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v25, v24);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v28, v27) == gpepCSRSS && v22 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v22 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v79
          && (*(_DWORD *)(v79 + 48) || *(int *)(v79 + 24) > 0) )
        {
          *(_DWORD *)(v79 + 44) = 1;
          *(GUID *)(v79 + 28) = ActivityId;
          if ( (unsigned int)dword_1C0244A70 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, (unsigned int)dword_1C0244A70, v29) )
            {
              v74 = v80;
              v87 = 4LL;
              v86 = &v74;
              tlgWriteTransfer_EtwWriteTransfer(
                (int)&dword_1C0244A70,
                (int)&dword_1C0211E30,
                (int)&ActivityId,
                0,
                3u,
                &v85);
              v62 = (unsigned int)dword_1C0244A70;
            }
            if ( (unsigned int)v62 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 0x2000LL, v62, v63) )
            {
              LODWORD(v75) = v80;
              v90 = 4LL;
              v89 = &v75;
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
        gptiCurrent = v22;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v55 = PsGetCurrentProcess(v31, v30),
              ProcessSessionId = PsGetProcessSessionIdEx(v55),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v33 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached() )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v33 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v35, v34, v36, v37);
          if ( v33
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v33 + 488) & 0x1000000) != 0
            && (*(_DWORD *)(v33 + 1232) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v43, v44);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47, v48);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v53 = gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v64 = *(_QWORD *)v53;
              *((_QWORD *)v53 + 2) = 0LL;
              if ( !*(_DWORD *)(v64 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
              v67 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v67 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v66, v65, v68, v69);
              ExReleaseResourceAndLeaveCriticalRegion(*v67);
              HMUnlockObject(*(_QWORD *)v53);
              tagDomLock::LockExclusive((tagDomLock *)v67);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        ApiSetEditionUpdateRemoteLights();
        RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v76);
      }
    }
  }
}
