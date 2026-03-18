/*
 * XREFs of ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1160
 * Callers:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0AE0 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C019E680 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C000F340 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016AA0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     IsValidGuiThreadContext @ 0x1C0067BFC (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0067D28 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C006F7C0 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0089350 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C008A064 (EtwTraceReleaseUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C008A600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C008A650 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C008A870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D153C (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C0121FD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C01A7820 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LockShared(CInpLockGuard *this, struct CRefUnRefPointerMsgId *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  int IsResourceAcquiredExclusiveLite; // r12d
  _BOOL8 v8; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v14; // rcx
  __int64 *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  PERESOURCE *v18; // rdi
  __int64 v19; // rcx
  CInpLockGuard *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  int v25; // [rsp+30h] [rbp-88h]
  _BYTE v26[32]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v27[32]; // [rsp+68h] [rbp-50h] BYREF

  if ( (unsigned int)CInpLockGuard::isOwned((PERESOURCE *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v5 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v25 = IsResourceAcquiredExclusiveLite;
  v8 = qword_1C02563B8 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v5 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v26, 1);
        v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v26);
        EtwTraceAcquiredExclusiveUserCrit(v11);
        gptiCurrent = v10;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
          tagDomLock::LockExclusive(DomainLockRef);
          v15 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v15[2];
              v16 = *v15;
              v15[2] = 0LL;
              if ( !*(_DWORD *)(v16 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
              v18 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v18 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
              ExReleaseResourceAndLeaveCriticalRegion(*v18);
              HMUnlockObject(*v15);
              tagDomLock::LockExclusive(v18);
              v15 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            IsResourceAcquiredExclusiveLite = v25;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v27, 0);
        EnterSharedCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v27);
        EtwTraceAcquiredSharedUserCrit(v19);
      }
      if ( v8 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v20) || !*((_DWORD *)this + 10) )
      break;
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    CRefUnRefPointerMsgId::ReferenceAndThreadLock(a2);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
    if ( v8 )
      CInpPushLock::UnLockExclusive((CInpPushLock *)&gInputLock);
    if ( qword_1C0258B08 )
      qword_1C0258B08();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
      v21 = (unsigned int)gdwInAtomicOperation;
      if ( (_DWORD)gdwInAtomicOperation )
      {
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v22 = PsGetCurrentThreadWin32Thread(v21);
      v23 = v22;
      if ( v22 )
      {
        v24 = *(_DWORD *)(v22 + 24);
        if ( (*(_DWORD *)(v23 + 44) || *(_DWORD *)(v23 + 48) || v24 > 0)
          && (unsigned int)dword_1C024C960 > 6
          && tlgKeywordOn((__int64)&dword_1C024C960, 0x2000LL) )
        {
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            &dword_1C024C960,
            dword_1C0219981,
            v23 + 28);
        }
        *(_DWORD *)(v23 + 44) = 0;
        *(_OWORD *)(v23 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit(v21);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(this);
    v5 = 1;
  }
}
