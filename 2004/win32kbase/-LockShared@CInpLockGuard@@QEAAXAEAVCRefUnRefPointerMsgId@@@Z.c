/*
 * XREFs of ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1A80
 * Callers:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1390 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0198990 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C0023B50 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0026560 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C0077520 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0086E80 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00910B4 (EtwTraceReleaseUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C00916A0 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C00918C0 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     IsValidGuiThreadContext @ 0x1C0092A5C (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0092B88 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D1E5C (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C011BB10 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C01A1AC0 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LockShared(CInpLockGuard *this, struct CRefUnRefPointerMsgId *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rcx
  int IsResourceAcquiredExclusiveLite; // r12d
  _BOOL8 v11; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  PERESOURCE *v32; // rdi
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  CInpLockGuard *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rbx
  int v43; // eax
  int v44; // [rsp+30h] [rbp-88h]
  _BYTE v45[32]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v46[32]; // [rsp+68h] [rbp-50h] BYREF

  if ( (unsigned int)CInpLockGuard::isOwned((PERESOURCE *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v8 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v44 = IsResourceAcquiredExclusiveLite;
  v11 = qword_1C0250438 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v8 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v45, 1);
        v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v45);
        EtwTraceAcquiredExclusiveUserCrit(v14);
        gptiCurrent = v13;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext(v15) )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v16, v17, v18);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v22, v23);
          tagDomLock::LockExclusive(DomainLockRef);
          v28 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v28[2];
              v29 = *v28;
              v28[2] = 0LL;
              if ( !*(_DWORD *)(v29 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26, v27);
              v32 = (PERESOURCE *)GetDomainLockRef(12LL, v24, v26, v27);
              if ( v32 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v33, v34);
              ExReleaseResourceAndLeaveCriticalRegion(*v32);
              HMUnlockObject(*v28);
              tagDomLock::LockExclusive(v32);
              v28 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            IsResourceAcquiredExclusiveLite = v44;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v46, 0);
        EnterSharedCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v46);
        EtwTraceAcquiredSharedUserCrit(v35);
      }
      if ( v11 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v36) || !*((_DWORD *)this + 10) )
      break;
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    CRefUnRefPointerMsgId::ReferenceAndThreadLock(a2);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
    if ( v11 )
      CInpPushLock::UnLockExclusive((CInpPushLock *)&gInputLock);
    if ( qword_1C0252B48 )
      qword_1C0252B48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39, v40);
      v38 = (unsigned int)gdwInAtomicOperation;
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
      v41 = PsGetCurrentThreadWin32Thread(v38);
      v42 = v41;
      if ( v41 )
      {
        v43 = *(_DWORD *)(v41 + 24);
        if ( (*(_DWORD *)(v42 + 44) || *(_DWORD *)(v42 + 48) || v43 > 0)
          && (unsigned int)dword_1C0246A70 > 6
          && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            &dword_1C0246A70,
            dword_1C0213E11,
            v42 + 28);
        }
        *(_DWORD *)(v42 + 44) = 0;
        *(_OWORD *)(v42 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit(v38);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(this);
    v8 = 1;
  }
}
