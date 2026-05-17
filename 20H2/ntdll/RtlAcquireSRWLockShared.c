/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180021760
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x180002D40 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x180005B5C (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x180006534 (RtlpCSparseBitmapLock.c)
 *     RtlpHpLfhContextCompact @ 0x180006E1C (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x180006EAC (RtlpHpLfhOwnerCompact.c)
 *     TppPoolpReferenceGlobalPool @ 0x1800137E4 (TppPoolpReferenceGlobalPool.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180024FE0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18002F380 (RtlpHpLfhSubsegmentCreate.c)
 *     LdrpGetFromMUIMemCache @ 0x1800335B8 (LdrpGetFromMUIMemCache.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800427BC (RtlpCreateWnfNameSubscription.c)
 *     EtwpCheckForPrivatePreEnable @ 0x1800432C0 (EtwpCheckForPrivatePreEnable.c)
 *     RtlpCreateSerializationGroup @ 0x180044D9C (RtlpCreateSerializationGroup.c)
 *     LdrpAllocateTls @ 0x1800481A0 (LdrpAllocateTls.c)
 *     TppBarrierAdjust @ 0x18005299C (TppBarrierAdjust.c)
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005DDC4 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     TpAllocPoolInternal @ 0x180061844 (TpAllocPoolInternal.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18006297C (RtlpWnfProcessCurrentDescriptor.c)
 *     TpTrimPools @ 0x180063CE0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180064000 (RtlSleepConditionVariableSRW.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006C5A0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006C6D0 (RtlpComputeDllPath.c)
 *     SbAtomicCaptureContextGuid @ 0x18006EAE4 (SbAtomicCaptureContextGuid.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800700DC (TpPoolReferenceExistingGlobalPool.c)
 *     LdrpFreeTls @ 0x1800704B8 (LdrpFreeTls.c)
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180073680 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     RtlpHpTagQueryTags @ 0x1800743C4 (RtlpHpTagQueryTags.c)
 *     _LdrpInitialize @ 0x180074C8C (_LdrpInitialize.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18007C460 (RtlpLookupDynamicFunctionEntry.c)
 *     RtlCheckHeldCriticalSections @ 0x18007D690 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800819D0 (RtlQueryProtectedPolicy.c)
 *     RtlpHpLargeAllocSize @ 0x18008475C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180084CBC (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008AEC0 (RtlpWnfRetryTimerCallback.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18008B04C (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpHpTagContextUpdate @ 0x18009CB80 (RtlpHpTagContextUpdate.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800D55DC (LdrpLockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800D83C0 (RtlQueryProcessLockInformation.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E1494 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800EDB48 (RtlPosixBarrier.c)
 *     RtlpFcWnfCallback @ 0x180102190 (RtlpFcWnfCallback.c)
 *     RtlpHpStackTraceAddStack @ 0x180108B20 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180109560 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180109758 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1801097D4 (RtlpHpStackTraceSerialize.c)
 *     RtlStackDbStackAdd @ 0x180118B88 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801195B4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlBackoff @ 0x18005CDB8 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x1800638F0 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180079BBC (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x18009D630 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A0AA0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlAcquireSRWLockShared(
        volatile signed __int64 *a1,
        unsigned __int64 i,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 UniqueThread; // rcx
  signed __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  signed __int64 v9; // rcx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]
  int v18; // [rsp+40h] [rbp-18h]
  unsigned int v19[5]; // [rsp+44h] [rbp-14h] BYREF
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0;
  UniqueThread = 17LL;
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  v7 = result;
  if ( result )
  {
    while ( 1 )
    {
      v8 = (v7 >> 1) & 1;
      if ( (v7 & 1) != 0 && (v8 || (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, i, a3, a4, v14) )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v17 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v19[0] = 2;
        v16 = 0LL;
        if ( v8 )
        {
          v15 = 0LL;
          v18 = -1;
          UniqueThread = (unsigned __int8)v7;
          v14 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
          i = (unsigned __int64)&v14 | v7 & 8 | 7;
          LOBYTE(UniqueThread) = (v7 & 4) == 0;
        }
        else
        {
          v18 = -2;
          v15 = &v14;
          i = (unsigned __int64)&v14 + 3;
        }
        v11 = _InterlockedCompareExchange64(a1, i, v7);
        v10 = v7 == v11;
        v7 = v11;
        if ( !v10 )
          goto LABEL_14;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(a1);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            a3 = __rdtsc();
            a4 = a3 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              i = 0LL;
              __asm { monitorx rax, rcx, rdx }
              UniqueThread = v19[0];
              if ( (v19[0] & 2) == 0 )
                break;
              UniqueThread = a3;
              v13 = __rdtsc();
              i = (unsigned __int64)HIDWORD(v13) << 32;
              a3 = v13;
              if ( v13 <= UniqueThread || v13 >= a4 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              UniqueThread = v19[0];
              if ( (v19[0] & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
                break;
              _mm_pause();
            }
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v19, 1u) )
        {
          do
            NtWaitForAlertByThreadId(a1, 0LL);
          while ( (v19[0] & 4) == 0 );
        }
      }
      else
      {
        v9 = (v7 | 1) + 16;
        if ( v8 )
          v9 = v7 | 1;
        result = _InterlockedCompareExchange64(a1, v9, v7);
        if ( v7 == result )
          return result;
LABEL_14:
        RtlBackoff(&v20);
        _m_prefetchw((const void *)a1);
        v7 = *a1;
      }
    }
  }
  return result;
}
