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
 *     RtlpCreateWnfNameSubscription @ 0x18004277C (RtlpCreateWnfNameSubscription.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180043280 (EtwpCheckForPrivatePreEnable.c)
 *     RtlpCreateSerializationGroup @ 0x180044D5C (RtlpCreateSerializationGroup.c)
 *     EtwDeliverDataBlock @ 0x1800452B0 (EtwDeliverDataBlock.c)
 *     EtwpGetNextRegistration @ 0x18004563C (EtwpGetNextRegistration.c)
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     LdrpAllocateTls @ 0x180054ACC (LdrpAllocateTls.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18005F2B4 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     TpAllocPoolInternal @ 0x180062D34 (TpAllocPoolInternal.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x180063E6C (RtlpWnfProcessCurrentDescriptor.c)
 *     TpTrimPools @ 0x1800651D0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x1800654F0 (RtlSleepConditionVariableSRW.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006D5D0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006D700 (RtlpComputeDllPath.c)
 *     SbAtomicCaptureContextGuid @ 0x18006FB14 (SbAtomicCaptureContextGuid.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007110C (TpPoolReferenceExistingGlobalPool.c)
 *     LdrpFreeTls @ 0x1800714E8 (LdrpFreeTls.c)
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800746B0 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     RtlpHpTagQueryTags @ 0x1800753F4 (RtlpHpTagQueryTags.c)
 *     _LdrpInitialize @ 0x180075CBC (_LdrpInitialize.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18007CE00 (RtlpLookupDynamicFunctionEntry.c)
 *     RtlCheckHeldCriticalSections @ 0x18007E030 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x1800822F0 (RtlQueryProtectedPolicy.c)
 *     RtlpHpLargeAllocSize @ 0x180084A9C (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180084FFC (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008B4C0 (RtlpWnfRetryTimerCallback.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18008B64C (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpHpTagContextUpdate @ 0x18009D040 (RtlpHpTagContextUpdate.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5394 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8130 (RtlQueryProcessLockInformation.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E120C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E8EB0 (RtlQueryCriticalSectionOwner.c)
 *     RtlPosixBarrier @ 0x1800ED998 (RtlPosixBarrier.c)
 *     RtlpFcWnfCallback @ 0x180101FF0 (RtlpFcWnfCallback.c)
 *     RtlpHpStackTraceAddStack @ 0x180108980 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x1801093C0 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1801095B8 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x180109634 (RtlpHpStackTraceSerialize.c)
 *     EtwEnumerateProcessRegGuids @ 0x180110600 (EtwEnumerateProcessRegGuids.c)
 *     RtlStackDbStackAdd @ 0x180118A50 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18011947C (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWakeSRWLock @ 0x180015200 (RtlpWakeSRWLock.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
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
