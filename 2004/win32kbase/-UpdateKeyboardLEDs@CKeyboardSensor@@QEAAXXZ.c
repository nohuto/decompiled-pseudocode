/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00AFD40
 * Callers:
 *     UpdateKeyLights @ 0x1C0058B00 (UpdateKeyLights.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C00AF930 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0025BE8 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x1C0059E58 (ApiSetEditionUpdateRemoteLights.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C005D570 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C005E510 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     RIMDeviceIoControl @ 0x1C0064040 (RIMDeviceIoControl.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C00B02B0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  struct DEVICEINFO *i; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  int v19; // r15d
  int v20; // r12d
  int v21; // r14d
  __int64 v22; // rbx
  int v23; // esi
  __int64 v24; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v26; // rbx
  struct tagTHREADINFO **v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  PVOID CurrentProcess; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 *v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rax
  int ProcessSessionId; // ebx
  __int64 v61; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned int v65; // r8d
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  PERESOURCE *v69; // rdi
  __int64 v70; // r8
  __int64 v71; // r9
  SIZE_T Length; // [rsp+38h] [rbp-D0h]
  int v73; // [rsp+68h] [rbp-A0h] BYREF
  int v74; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v75; // [rsp+70h] [rbp-98h] BYREF
  int v76; // [rsp+74h] [rbp-94h] BYREF
  __int64 v77; // [rsp+78h] [rbp-90h] BYREF
  PVOID v78; // [rsp+80h] [rbp-88h] BYREF
  __int64 v79; // [rsp+88h] [rbp-80h] BYREF
  char v80; // [rsp+90h] [rbp-78h]
  __int64 v81; // [rsp+98h] [rbp-70h]
  unsigned __int8 v82; // [rsp+A0h] [rbp-68h]
  GUID ActivityId; // [rsp+A4h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+B8h] [rbp-50h] BYREF
  int *v85; // [rsp+D8h] [rbp-30h]
  __int64 v86; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+E8h] [rbp-20h] BYREF
  int *v88; // [rsp+108h] [rbp+0h]
  __int64 v89; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v91; // [rsp+138h] [rbp+30h]
  __int64 v92; // [rsp+140h] [rbp+38h]

  if ( CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    if ( (struct _KTHREAD *)qword_1C0250418 == KeGetCurrentThread() )
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
        v73 = gbNonServiceSession;
        *(_QWORD *)&qword_1C024C740 = gKbdImeStatus;
        gdwUpdateKeyboard &= 0xFFFFFFF8;
        dword_1C024C734 = gktp;
        word_1C024C738 = word_1C0250A00;
        dword_1C024C730 = gklp;
        dword_1C024C748 = dword_1C02509F8;
        v8 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
        v9 = *((_QWORD *)this + 1);
        dword_1C024C758 = dword_1C024B0C8;
        qword_1C024C750 = gRemoteClientKeyboardType;
        RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v78, v8);
        UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
        v14 = 0LL;
        CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
          (CInpLockSharedIfNeeded *)&v79,
          (struct CInpPushLock *)&CBaseInput::_sLock);
        v77 = Win32AllocPool(16LL * *((_QWORD *)this + 155), 0x70694843u);
        v18 = v77;
        if ( v77 )
        {
          for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
          {
            if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) && *((_QWORD *)i + 29) )
            {
              if ( (unsigned __int64)(unsigned int)v14 >= *((_QWORD *)this + 155) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v14, v16, v17);
                break;
              }
              v58 = 2LL * (unsigned int)v14;
              v14 = (unsigned int)(v14 + 1);
              *(_QWORD *)(v18 + 8 * v58) = *((_QWORD *)i + 2);
              *(_WORD *)(v18 + 8 * v58 + 8) = *((_WORD *)i + 232);
            }
          }
        }
        if ( !v80 )
        {
          ExReleasePushLockSharedEx(v79, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( (_DWORD)v14 )
        {
          v19 = v7 & 1;
          v20 = v7 & 2;
          v21 = v7 & 4;
          v22 = v18;
          i = 0LL;
          v23 = v73;
          do
          {
            v73 = 0;
            if ( v19 )
            {
              LODWORD(Length) = 0;
              RIMDeviceIoControl(
                v9,
                *(_QWORD *)v22,
                0xB0004u,
                &dword_1C024C734,
                6u,
                0LL,
                Length,
                &v73,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            if ( v20 )
            {
              LODWORD(Length) = 0;
              RIMDeviceIoControl(
                v9,
                *(_QWORD *)v22,
                0xB0008u,
                &dword_1C024C730,
                4u,
                0LL,
                Length,
                &v73,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            if ( v21
              && (*(_BYTE *)(v22 + 8) == 7 && *(_BYTE *)(v22 + 9) == 82 || v23 && qword_1C024C750 == 0x2000200000007LL) )
            {
              v63 = *(_QWORD *)v22;
              LODWORD(Length) = 0;
              v74 = 0;
              RIMDeviceIoControl(
                v9,
                v63,
                0xB1004u,
                &qword_1C024C740,
                0xCu,
                0LL,
                Length,
                &v74,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            v22 += 16LL;
            --v14;
          }
          while ( v14 );
          v18 = v77;
        }
        if ( v18 )
          Win32FreePool(v18);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(i);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v82 = 1;
          v64 = PsGetCurrentThreadWin32Thread(v24);
          v81 = v64;
          if ( v64 && (*(int *)(v64 + 24) > 0 || *(_DWORD *)(v81 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C0246A70 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
            {
              v75 = v82;
              v86 = 4LL;
              v85 = &v75;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C0246A70,
                (unsigned __int8 *)dword_1C0213E87,
                &ActivityId,
                0LL,
                3u,
                &v84);
            }
          }
        }
        else
        {
          v81 = 0LL;
        }
        v26 = 0LL;
        while ( 1 )
        {
          v27 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v27 )
            v26 = *v27;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v29, v28);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v32, v31) == gpepCSRSS && v26 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v26 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          if ( v81 )
          {
            v32 = *(unsigned int *)(v81 + 24);
            if ( *(_DWORD *)(v81 + 48) || (int)v32 > 0 )
            {
              *(_DWORD *)(v81 + 44) = 1;
              *(GUID *)(v81 + 28) = ActivityId;
              if ( (unsigned int)dword_1C0246A70 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  v76 = v82;
                  v89 = 4LL;
                  v88 = &v76;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E30,
                    &ActivityId,
                    0LL,
                    3u,
                    &v87);
                  v65 = dword_1C0246A70;
                }
                if ( v65 > 6 && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
                {
                  LODWORD(v77) = v82;
                  v92 = 4LL;
                  v91 = &v77;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C0246A70,
                    (unsigned __int8 *)dword_1C0213E5D,
                    &ActivityId,
                    0LL,
                    3u,
                    &v90);
                }
              }
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit(v32);
        gptiCurrent = v26;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess(v33)
          || (v59 = PsGetCurrentProcess(v35, v34),
              ProcessSessionId = PsGetProcessSessionIdEx(v59),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v61),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v37 = 0LL;
          if ( !IsThreadCrossSessionAttached(v35) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v37 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v38);
          if ( v37
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v37 + 480) & 0x1000000) != 0
            && (*(_DWORD *)(v37 + 1224) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v41, v42, v43);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v47, v48);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v51, v52);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v57 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v66 = *v57;
              v57[2] = 0LL;
              if ( !*(_DWORD *)(v66 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v55, v56);
              v69 = (PERESOURCE *)GetDomainLockRef(12LL, v53, v55, v56);
              if ( v69 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v67, v70, v71);
              ExReleaseResourceAndLeaveCriticalRegion(*v69);
              HMUnlockObject(*v57);
              tagDomLock::LockExclusive(v69);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        ApiSetEditionUpdateRemoteLights();
        RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v78);
      }
    }
  }
}
