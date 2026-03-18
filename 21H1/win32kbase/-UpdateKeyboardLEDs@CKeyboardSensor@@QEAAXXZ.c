/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C009DDE0
 * Callers:
 *     UpdateKeyLights @ 0x1C004AC90 (UpdateKeyLights.c)
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C009D9D0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0010F78 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x1C004C1B8 (ApiSetEditionUpdateRemoteLights.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C004FA60 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C0050A10 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C009E350 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     RIMDeviceIoControl @ 0x1C00A3290 (RIMDeviceIoControl.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v4; // r14
  struct RawInputManagerObject *v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct DEVICEINFO *i; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // r15d
  int v14; // r12d
  int v15; // r14d
  __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v20; // rbx
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  PVOID CurrentProcess; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v35; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 *v39; // rsi
  __int64 v40; // rax
  int ProcessSessionId; // ebx
  __int64 v42; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // rcx
  PERESOURCE *v49; // rdi
  SIZE_T Length; // [rsp+38h] [rbp-D0h]
  int v51; // [rsp+68h] [rbp-A0h] BYREF
  int v52; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v53; // [rsp+70h] [rbp-98h] BYREF
  int v54; // [rsp+74h] [rbp-94h] BYREF
  __int64 v55; // [rsp+78h] [rbp-90h] BYREF
  PVOID v56; // [rsp+80h] [rbp-88h] BYREF
  __int64 v57; // [rsp+88h] [rbp-80h] BYREF
  char v58; // [rsp+90h] [rbp-78h]
  __int64 v59; // [rsp+98h] [rbp-70h]
  unsigned __int8 v60; // [rsp+A0h] [rbp-68h]
  GUID ActivityId; // [rsp+A4h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+B8h] [rbp-50h] BYREF
  int *v63; // [rsp+D8h] [rbp-30h]
  __int64 v64; // [rsp+E0h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+E8h] [rbp-20h] BYREF
  int *v66; // [rsp+108h] [rbp+0h]
  __int64 v67; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+118h] [rbp+10h] BYREF
  __int64 *v69; // [rsp+138h] [rbp+30h]
  __int64 v70; // [rsp+140h] [rbp+38h]

  if ( CBaseInput::ExecutingOnSensorHostingThread(this) )
  {
    if ( (struct _KTHREAD *)qword_1C02563A8 == KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    if ( !gdwUpdateKeyboard )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v3 = *((_QWORD *)this + 2);
    if ( v3 )
    {
      if ( *((_QWORD *)this + 1) != -1LL
        && *(struct _KTHREAD **)(v3 + 40) == KeGetCurrentThread()
        && *((_QWORD *)this + 155) )
      {
        v4 = gdwUpdateKeyboard;
        v51 = gbNonServiceSession;
        *(_QWORD *)&qword_1C0252758 = gKbdImeStatus;
        gdwUpdateKeyboard &= 0xFFFFFFF8;
        dword_1C025274C = gktp;
        word_1C0252750 = word_1C02569E0;
        dword_1C0252748 = gklp;
        dword_1C0252760 = dword_1C02569D8;
        v5 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
        v6 = *((_QWORD *)this + 1);
        dword_1C0252770 = dword_1C02510C8;
        qword_1C0252768 = gRemoteClientKeyboardType;
        RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v56, v5);
        UserSessionSwitchLeaveCrit(v7);
        v8 = 0LL;
        CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
          (CInpLockSharedIfNeeded *)&v57,
          (struct CInpPushLock *)&CBaseInput::_sLock);
        v55 = Win32AllocPool(16LL * *((_QWORD *)this + 155), 0x70694843u);
        v12 = v55;
        if ( v55 )
        {
          for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
          {
            if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) && *((_QWORD *)i + 29) )
            {
              if ( (unsigned __int64)(unsigned int)v8 >= *((_QWORD *)this + 155) )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(i);
                break;
              }
              v9 = 2LL * (unsigned int)v8;
              v8 = (unsigned int)(v8 + 1);
              *(_QWORD *)(v12 + 8 * v9) = *((_QWORD *)i + 2);
              *(_WORD *)(v12 + 8 * v9 + 8) = *((_WORD *)i + 232);
            }
          }
        }
        if ( !v58 )
        {
          ExReleasePushLockSharedEx(v57, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( (_DWORD)v8 )
        {
          v13 = v4 & 1;
          v14 = v4 & 2;
          v15 = v4 & 4;
          v16 = v12;
          i = 0LL;
          v17 = v51;
          do
          {
            v51 = 0;
            if ( v13 )
            {
              LODWORD(Length) = 0;
              RIMDeviceIoControl(
                v6,
                *(_QWORD *)v16,
                720900,
                (int)&dword_1C025274C,
                6u,
                0LL,
                Length,
                (__int64)&v51,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            if ( v14 )
            {
              LODWORD(Length) = 0;
              RIMDeviceIoControl(
                v6,
                *(_QWORD *)v16,
                720904,
                (int)&dword_1C0252748,
                4u,
                0LL,
                Length,
                (__int64)&v51,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            if ( v15
              && (*(_BYTE *)(v16 + 8) == 7 && *(_BYTE *)(v16 + 9) == 82 || v17 && qword_1C0252768 == 0x2000200000007LL) )
            {
              v44 = *(_QWORD *)v16;
              LODWORD(Length) = 0;
              v52 = 0;
              RIMDeviceIoControl(
                v6,
                v44,
                724996,
                (int)&qword_1C0252758,
                0xCu,
                0LL,
                Length,
                (__int64)&v52,
                &giosbKbdControl,
                1,
                0,
                0);
              i = 0LL;
            }
            v16 += 16LL;
            --v8;
          }
          while ( v8 );
          v12 = v55;
        }
        if ( v12 )
          Win32FreePool(v12, v9, v11);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(i);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        ActivityId = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v60 = 1;
          v45 = PsGetCurrentThreadWin32Thread(v18);
          v59 = v45;
          if ( v45 && (*(int *)(v45 + 24) > 0 || *(_DWORD *)(v59 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( (unsigned int)dword_1C024C960 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
            {
              v53 = v60;
              v64 = 4LL;
              v63 = &v53;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &ActivityId,
                0LL,
                3u,
                &v62);
            }
          }
        }
        else
        {
          v59 = 0LL;
        }
        v20 = 0LL;
        while ( 1 )
        {
          v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
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
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          if ( v59 )
          {
            v26 = *(unsigned int *)(v59 + 24);
            if ( *(_DWORD *)(v59 + 48) || (int)v26 > 0 )
            {
              *(_DWORD *)(v59 + 44) = 1;
              *(GUID *)(v59 + 28) = ActivityId;
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  v54 = v60;
                  v67 = 4LL;
                  v66 = &v54;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199A0,
                    &ActivityId,
                    0LL,
                    3u,
                    &v65);
                  v46 = dword_1C024C960;
                }
                if ( v46 > 6 && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
                {
                  LODWORD(v55) = v60;
                  v70 = 4LL;
                  v69 = &v55;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199CD,
                    &ActivityId,
                    0LL,
                    3u,
                    &v68);
                }
              }
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit(v26);
        gptiCurrent = v20;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess(v27)
          || (v40 = PsGetCurrentProcess(v29, v28),
              ProcessSessionId = PsGetProcessSessionIdEx(v40),
              CurrentThreadProcess = PsGetCurrentThreadProcess(v42),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          CurrentThread = KeGetCurrentThread();
          v31 = 0LL;
          if ( !IsThreadCrossSessionAttached(v29) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v31 = *ThreadWin32Thread;
          }
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v32);
          if ( v31
            && CurrentProcessWin32Process
            && (*(_DWORD *)(v31 + 480) & 0x1000000) != 0
            && (*(_DWORD *)(v31 + 1216) & 0x80u) == 0
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v37);
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            while ( 1 )
            {
              v39 = (__int64 *)gpducstulHead;
              if ( !gpducstulHead )
                break;
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
              v47 = *v39;
              v39[2] = 0LL;
              if ( !*(_DWORD *)(v47 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v38);
              v49 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v49 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v48);
              ExReleaseResourceAndLeaveCriticalRegion(*v49);
              HMUnlockObject(*v39);
              tagDomLock::LockExclusive(v49);
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
        }
        ApiSetEditionUpdateRemoteLights();
        RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v56);
      }
    }
  }
}
