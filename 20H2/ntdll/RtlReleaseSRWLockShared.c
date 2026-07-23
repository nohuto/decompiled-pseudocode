/*
 * XREFs of RtlReleaseSRWLockShared @ 0x180021920
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x180002D40 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x180005B5C (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x18000643C (RtlpCSparseBitmapUnlock.c)
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
 *     EtwDeliverDataBlock @ 0x1800452F0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18004567C (EtwpGetNextRegistration.c)
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
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5624 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800D83C0 (RtlQueryProcessLockInformation.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E1494 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E9060 (RtlQueryCriticalSectionOwner.c)
 *     RtlPosixBarrier @ 0x1800EDB48 (RtlPosixBarrier.c)
 *     RtlpFcWnfCallback @ 0x180102190 (RtlpFcWnfCallback.c)
 *     RtlpHpStackTraceAddStack @ 0x180108B20 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180109560 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180109758 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1801097D4 (RtlpHpStackTraceSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x1801107A0 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x180118B88 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801195B4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int64 v1; // rax
  signed __int64 v2; // r9
  signed __int64 v3; // rtt
  __int64 v4; // r8
  __int64 v5; // rdx
  signed __int64 v6; // r9
  signed __int64 v7; // rdx
  signed __int64 v8; // rtt
  _QWORD *v9; // rdx
  __int64 i; // r9

  v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 17LL);
  if ( v1 == 17 )
    return;
  if ( (v1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( (v1 & 2) != 0 )
  {
LABEL_9:
    if ( (v1 & 8) != 0 )
    {
      v9 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( i = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v9[1] )
        v9 = (_QWORD *)*v9;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 32), 0xFFFFFFFF) > 1 )
        return;
      v4 = -9LL;
    }
    else
    {
      v4 = -1LL;
    }
    do
    {
      v5 = v4 + 4;
      v6 = v1 & 6;
      if ( v6 != 2 )
        v5 = v4;
      v7 = v1 + v5;
      v8 = v1;
      v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v7, v1);
    }
    while ( v8 != v1 );
    if ( v6 == 2 )
      RtlpWakeSRWLock((volatile signed __int64 *)SRWLock, v7, 0);
    return;
  }
  while ( 1 )
  {
    v2 = 0LL;
    if ( (v1 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
      v2 = v1 - 16;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v2, v1);
    if ( v3 == v1 )
      break;
    if ( (v1 & 2) != 0 )
      goto LABEL_9;
  }
}
