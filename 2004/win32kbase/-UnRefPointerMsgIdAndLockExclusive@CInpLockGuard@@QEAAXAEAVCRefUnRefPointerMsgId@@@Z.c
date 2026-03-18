/*
 * XREFs of ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1F20
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C005F150 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C018CC74 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C018D488 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C018D750 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018F2D8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0194154 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01946B0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01948A0 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0195E58 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0196B88 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01973B0 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0198010 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019A590 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C019D840 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
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
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D1E9C (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1C011BB10 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C01A1AC0 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::UnRefPointerMsgIdAndLockExclusive(PERESOURCE *this, struct CRefUnRefPointerMsgId *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r12d
  int v9; // ebx
  __int64 v10; // rcx
  int IsResourceAcquiredExclusiveLite; // r13d
  _BOOL8 v12; // rbp
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
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
  __int64 *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  PERESOURCE *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  CInpLockGuard *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rbx
  int v44; // eax
  int v45; // [rsp+30h] [rbp-88h]
  _BYTE v46[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v47[32]; // [rsp+58h] [rbp-60h] BYREF

  if ( (unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  v8 = 1;
  v9 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v45 = IsResourceAcquiredExclusiveLite;
  v12 = qword_1C0250438 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v9 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v46, 1);
        v14 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v46);
        EtwTraceAcquiredExclusiveUserCrit(v15);
        gptiCurrent = v14;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext(v16) )
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
            IsResourceAcquiredExclusiveLite = v45;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v47, 0);
        EnterSharedCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v47);
        EtwTraceAcquiredSharedUserCrit(v36);
      }
      if ( v12 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
    if ( v8 )
      CRefUnRefPointerMsgId::ThreadUnlockAndUnReference(a2);
    v8 = 0;
    if ( (unsigned int)CInpLockGuard::isManipulationThreadInTermination(v37)
      || !*((_DWORD *)this + 10)
      || this[3] == (PERESOURCE)KeGetCurrentThread() )
    {
      break;
    }
    ++*((_DWORD *)this + 4);
    CRefUnRefPointerMsgId::ReferenceAndThreadLock(a2);
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    if ( v12 )
      CInpPushLock::UnLockExclusive((CInpPushLock *)&gInputLock);
    if ( qword_1C0252B48 )
      qword_1C0252B48();
    if ( (_DWORD)gdwInAtomicOperation )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
      v39 = (unsigned int)gdwInAtomicOperation;
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
      v42 = PsGetCurrentThreadWin32Thread(v39);
      v43 = v42;
      if ( v42 )
      {
        v44 = *(_DWORD *)(v42 + 24);
        if ( (*(_DWORD *)(v43 + 44) || *(_DWORD *)(v43 + 48) || v44 > 0)
          && (unsigned int)dword_1C0246A70 > 6
          && tlgKeywordOn((__int64)&dword_1C0246A70, 0x2000LL) )
        {
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            &dword_1C0246A70,
            dword_1C0213E11,
            v43 + 28);
        }
        *(_DWORD *)(v43 + 44) = 0;
        *(_OWORD *)(v43 + 28) = 0LL;
      }
    }
    EtwTraceReleaseUserCrit(v39);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard((CInpLockGuard *)this);
    v9 = 1;
  }
  this[4] = (PERESOURCE)KeGetCurrentThread();
}
