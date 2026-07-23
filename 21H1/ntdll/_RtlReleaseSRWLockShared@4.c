/*
 * XREFs of _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0
 * Callers:
 *     _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20 (_EtwpCheckForPrivatePreEnable@4.c)
 *     _RtlpCreateSerializationGroup@4 @ 0x4B2ADE05 (_RtlpCreateSerializationGroup@4.c)
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     _RtlpCreateWnfNameSubscription@16 @ 0x4B2B088D (_RtlpCreateWnfNameSubscription@16.c)
 *     _RtlpComputeDllPath@8 @ 0x4B2B2DF2 (_RtlpComputeDllPath@8.c)
 *     _RtlpComputeDllPathWithOptions@8 @ 0x4B2B3600 (_RtlpComputeDllPathWithOptions@8.c)
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     ?RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z @ 0x4B2B4739 (-RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _SbAtomicCaptureContextGuid@12 @ 0x4B2B8650 (_SbAtomicCaptureContextGuid@12.c)
 *     _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180 (_RtlSleepConditionVariableSRW@16.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3 (_RtlpWnfProcessCurrentDescriptor@8.c)
 *     _LdrpAllocateTls@0 @ 0x4B2E15BF (_LdrpAllocateTls@0.c)
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 *     _LdrpFreeTls@0 @ 0x4B2E6510 (_LdrpFreeTls@0.c)
 *     _RtlCheckHeldCriticalSections@8 @ 0x4B2E8510 (_RtlCheckHeldCriticalSections@8.c)
 *     ?RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z @ 0x4B2E87A1 (-RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     _TpPoolReferenceExistingGlobalPool@0 @ 0x4B2E9657 (_TpPoolReferenceExistingGlobalPool@0.c)
 *     _RtlQueryProtectedPolicy@8 @ 0x4B2ED030 (_RtlQueryProtectedPolicy@8.c)
 *     _EtwpGetNextRegistration@4 @ 0x4B2EF857 (_EtwpGetNextRegistration@4.c)
 *     _RtlpHpLargeLockReleaseShared@12 @ 0x4B307A88 (_RtlpHpLargeLockReleaseShared@12.c)
 *     _LdrpUnlockTlsDelayedReclaimTable@4 @ 0x4B33477F (_LdrpUnlockTlsDelayedReclaimTable@4.c)
 *     _RtlQueryProcessLockInformation@4 @ 0x4B337290 (_RtlQueryProcessLockInformation@4.c)
 *     _RtlpWnfCalculateAndSetNextTimer@0 @ 0x4B33C27B (_RtlpWnfCalculateAndSetNextTimer@0.c)
 *     _RtlpWnfRetryTimerCallback@12 @ 0x4B33C760 (_RtlpWnfRetryTimerCallback@12.c)
 *     _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505 (_LdrpGetAlternateResourceModuleHandleEx@16.c)
 *     _RtlQueryCriticalSectionOwner@8 @ 0x4B34A6A0 (_RtlQueryCriticalSectionOwner@8.c)
 *     _RtlPosixBarrier@8 @ 0x4B35031D (_RtlPosixBarrier@8.c)
 *     _RtlpFcCallChangeCallbacks@4 @ 0x4B369846 (_RtlpFcCallChangeCallbacks@4.c)
 *     _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3 (_RtlpHpStackTraceAddStack@8.c)
 *     _RtlpHpStackTraceHeapSerialize@8 @ 0x4B36E530 (_RtlpHpStackTraceHeapSerialize@8.c)
 *     _RtlpHpStackTraceRemoveStack@8 @ 0x4B36E701 (_RtlpHpStackTraceRemoveStack@8.c)
 *     _RtlpHpStackTraceSerialize@12 @ 0x4B36E775 (_RtlpHpStackTraceSerialize@12.c)
 *     _RtlpHpTagContextUpdate@16 @ 0x4B370105 (_RtlpHpTagContextUpdate@16.c)
 *     _RtlpHpTagQueryTags@12 @ 0x4B370317 (_RtlpHpTagQueryTags@12.c)
 *     _RtlpHpLfhContextCompact@8 @ 0x4B37653C (_RtlpHpLfhContextCompact@8.c)
 *     _RtlpHpLfhOwnerCompact@12 @ 0x4B376814 (_RtlpHpLfhOwnerCompact@12.c)
 *     _RtlpHpLfhSlotAllocate@20 @ 0x4B376AB9 (_RtlpHpLfhSlotAllocate@20.c)
 *     _RtlpHpLfhSubsegmentCreate@12 @ 0x4B376F41 (_RtlpHpLfhSubsegmentCreate@12.c)
 *     _RtlpHpLfhSubsegmentDecommitPages@20 @ 0x4B37719A (_RtlpHpLfhSubsegmentDecommitPages@20.c)
 *     _RtlpHpLfhSubsegmentWalk@28 @ 0x4B377B9C (_RtlpHpLfhSubsegmentWalk@28.c)
 *     _RtlpHpLargeAllocSize@16 @ 0x4B37A1ED (_RtlpHpLargeAllocSize@16.c)
 *     _RtlpHpVaMgrCtxAlloc@16 @ 0x4B37AA36 (_RtlpHpVaMgrCtxAlloc@16.c)
 *     _RtlpCSparseBitmapUnlock@4 @ 0x4B380071 (_RtlpCSparseBitmapUnlock@4.c)
 *     _EtwEnumerateProcessRegGuids@12 @ 0x4B3802E0 (_EtwEnumerateProcessRegGuids@12.c)
 *     _TpTrimPools@0 @ 0x4B383ED0 (_TpTrimPools@0.c)
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 *     _RtlpStackDbSegmentFindOrCreate@8 @ 0x4B38AB3B (_RtlpStackDbSegmentFindOrCreate@8.c)
 * Callees:
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

void __cdecl RtlReleaseSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ecx
  signed __int32 v3; // eax
  int v4; // eax
  int v5; // ebx
  signed __int32 v6; // edx
  signed __int32 v7; // eax
  _DWORD *v8; // eax
  int i; // edx
  int j; // [esp+Ch] [ebp-4h]

  v1 = _InterlockedCompareExchange((volatile signed __int32 *)SRWLock, 0, 17);
  v2 = v1;
  if ( v1 == 17 )
    return;
  if ( (v1 & 1) == 0 )
    RtlRaiseStatus(-1073741212);
  if ( (v1 & 2) != 0 )
  {
LABEL_7:
    if ( (v2 & 8) != 0 )
    {
      v8 = (_DWORD *)(v2 & 0xFFFFFFF0);
      for ( i = *(_DWORD *)((v2 & 0xFFFFFFF0) + 4); !i; i = v8[1] )
        v8 = (_DWORD *)*v8;
      if ( _InterlockedDecrement((volatile signed __int32 *)(i + 16)) > 0 )
        return;
      v4 = -9;
    }
    else
    {
      v4 = -1;
    }
    for ( j = v4; ; v4 = j )
    {
      v5 = v2 & 6;
      if ( v5 == 2 )
        v4 += 4;
      v6 = v4 + v2;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)SRWLock, v4 + v2, v2);
      if ( v7 == v2 )
        break;
      v2 = v7;
    }
    if ( v5 == 2 )
      RtlpWakeSRWLock(v6);
    return;
  }
  while ( 1 )
  {
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)SRWLock, (v2 & 0xFFFFFFF0) != 16 ? v2 - 16 : 0, v2);
    if ( v3 == v2 )
      break;
    v2 = v3;
    if ( (v3 & 2) != 0 )
      goto LABEL_7;
  }
}
