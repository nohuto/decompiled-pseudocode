/*
 * XREFs of NtUserEnableTouchPad @ 0x1C0138A20
 * Callers:
 *     <none>
 * Callees:
 *     IsValidGuiThreadContext @ 0x1C0067BFC (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0067D28 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0067E5C (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CheckAccess @ 0x1C00713A0 (CheckAccess.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C008A870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     EtwTraceUIPISystemError @ 0x1C009FDF0 (EtwTraceUIPISystemError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?Feature_Servicing_2103c_31321304__private_IsEnabled@@YAHXZ @ 0x1C00CE514 (-Feature_Servicing_2103c_31321304__private_IsEnabled@@YAHXZ.c)
 *     EnablePTPDevices @ 0x1C0128AB0 (EnablePTPDevices.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnableTouchPad(__int64 a1)
{
  int v1; // r14d
  int v2; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 *v10; // rsi
  int IsEnabled; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  PERESOURCE *v16; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v18[32]; // [rsp+30h] [rbp-30h] BYREF

  v1 = a1;
  v2 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v18, 1);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v18);
  EtwTraceAcquiredExclusiveUserCrit(v5);
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v16);
    while ( 1 )
    {
      v10 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v7 = *v10;
      v10[2] = 0LL;
      if ( !*(_DWORD *)(v7 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
      if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
      HMUnlockObject(*v10);
      tagDomLock::LockExclusive(DomainLockRef);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*v16);
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  IsEnabled = Feature_Servicing_2103c_31321304__private_IsEnabled();
  HIDWORD(v16) = -1;
  v12 = *((_QWORD *)gptiCurrent + 52);
  if ( IsEnabled )
    LODWORD(v16) = 0x2000;
  else
    LODWORD(v16) = 12288;
  if ( CheckAccess((unsigned int *)(v12 + 880), (unsigned int *)&v16) )
  {
    LOBYTE(v2) = v1 != 0;
    v2 = EnablePTPDevices(v2);
  }
  else
  {
    EtwTraceUIPISystemError(*((struct tagPROCESSINFO **)gptiCurrent + 52), 0LL);
    UserSetLastError(5LL, v13);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit(v14);
  return v2;
}
