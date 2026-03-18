/*
 * XREFs of ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0
 * Callers:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D1280 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0196460 (-PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z.c)
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0023360 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0040BD0 (-isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ.c)
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004B064 (EtwTraceReleaseUserCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C004B650 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C004B870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     IsValidGuiThreadContext @ 0x1C004CDDC (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C004CF08 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C004E230 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C0087160 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D1DBC (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C01197D0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C019F740 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  CInpLockGuard *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rbx
  int v46; // eax
  int v47; // [rsp+30h] [rbp-88h]
  _BYTE v48[32]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v49[32]; // [rsp+68h] [rbp-50h] BYREF

  if ( (unsigned int)CInpLockGuard::isOwned((PERESOURCE *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v8 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v47 = IsResourceAcquiredExclusiveLite;
  v11 = qword_1C024E438 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v8 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v48, 1);
        v13 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v48, v14, v15, v16);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v13;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v17, v18, v19);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v23, v24);
          tagDomLock::LockExclusive(DomainLockRef);
          v29 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v29[2];
              v30 = *v29;
              v29[2] = 0LL;
              if ( !*(_DWORD *)(v30 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27, v28);
              v33 = (PERESOURCE *)GetDomainLockRef(12LL, v25, v27, v28);
              if ( v33 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v34, v35);
              ExReleaseResourceAndLeaveCriticalRegion(*v33);
              HMUnlockObject(*v29);
              tagDomLock::LockExclusive(v33);
              v29 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            IsResourceAcquiredExclusiveLite = v47;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v49, 0);
        EnterSharedCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v49, v36, v37, v38);
        EtwTraceAcquiredSharedUserCrit();
      }
      if ( v11 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v39) || !*((_DWORD *)this + 10) )
      break;
    _InterlockedIncrement((volatile signed __int32 *)this + 4);
    CRefUnRefPointerMsgId::ReferenceAndThreadLock(a2);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
    if ( v11 )
      CInpPushLock::UnLockExclusive((CInpPushLock *)&gInputLock);
    if ( qword_1C0250B48 )
      qword_1C0250B48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
      v41 = (unsigned int)gdwInAtomicOperation;
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
      v44 = PsGetCurrentThreadWin32Thread(v41);
      v45 = v44;
      if ( v44 )
      {
        v46 = *(_DWORD *)(v44 + 24);
        if ( (*(_DWORD *)(v45 + 44) || *(_DWORD *)(v45 + 48) || v46 > 0)
          && (unsigned int)dword_1C0244A70 > 6
          && tlgKeywordOn((__int64)&dword_1C0244A70, 0x2000LL) )
        {
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            &dword_1C0244A70,
            dword_1C0211E11,
            v45 + 28);
        }
        *(_DWORD *)(v45 + 44) = 0;
        *(_OWORD *)(v45 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(this);
    v8 = 1;
  }
}
