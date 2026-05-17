/*
 * XREFs of _RtlAcquireSRWLockShared@4 @ 0x4B2B5380
 * Callers:
 *     _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20 (_EtwpCheckForPrivatePreEnable@4.c)
 *     _RtlpCreateSerializationGroup@4 @ 0x4B2ADE05 (_RtlpCreateSerializationGroup@4.c)
 *     _RtlpCreateWnfNameSubscription@16 @ 0x4B2B088D (_RtlpCreateWnfNameSubscription@16.c)
 *     _RtlpComputeDllPath@8 @ 0x4B2B2DF2 (_RtlpComputeDllPath@8.c)
 *     _RtlpComputeDllPathWithOptions@8 @ 0x4B2B3600 (_RtlpComputeDllPathWithOptions@8.c)
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     ?RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z @ 0x4B2B4739 (-RtlpFlsDataCleanup@@YGXPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_DATA@@K@Z.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     _SbAtomicCaptureContextGuid@12 @ 0x4B2B8650 (_SbAtomicCaptureContextGuid@12.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
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
 *     _RtlpHpLargeLockAcquireShared@8 @ 0x4B307A50 (_RtlpHpLargeLockAcquireShared@8.c)
 *     _LdrpLockTlsDelayedReclaimTable@0 @ 0x4B33474F (_LdrpLockTlsDelayedReclaimTable@0.c)
 *     _RtlQueryProcessLockInformation@4 @ 0x4B337290 (_RtlQueryProcessLockInformation@4.c)
 *     _RtlpWnfCalculateAndSetNextTimer@0 @ 0x4B33C27B (_RtlpWnfCalculateAndSetNextTimer@0.c)
 *     _RtlpWnfRetryTimerCallback@12 @ 0x4B33C760 (_RtlpWnfRetryTimerCallback@12.c)
 *     _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505 (_LdrpGetAlternateResourceModuleHandleEx@16.c)
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
 *     _RtlpCSparseBitmapLock@12 @ 0x4B38003A (_RtlpCSparseBitmapLock@12.c)
 *     _TpTrimPools@0 @ 0x4B383ED0 (_TpTrimPools@0.c)
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 *     _RtlpStackDbSegmentFindOrCreate@8 @ 0x4B38AB3B (_RtlpStackDbSegmentFindOrCreate@8.c)
 * Callees:
 *     _RtlpIsWaitBlockSpinSatisfied@8 @ 0x4B2C2465 (_RtlpIsWaitBlockSpinSatisfied@8.c)
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     _RtlpOptimizeSRWLockList@8 @ 0x4B2E3B53 (_RtlpOptimizeSRWLockList@8.c)
 *     _RtlpWaitCouldDeadlock@0 @ 0x4B2E7D50 (_RtlpWaitCouldDeadlock@0.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680 (_ZwWaitForAlertByThreadId@8.c)
 */

signed __int32 __stdcall RtlAcquireSRWLockShared(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // edi
  signed __int32 result; // eax
  unsigned __int32 v3; // ecx
  int v4; // esi
  signed __int32 v5; // edx
  signed __int32 v6; // ecx
  char *v7; // edx
  signed __int32 v8; // esi
  int v9; // edi
  unsigned int v10; // esi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // kr08_8
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  bool v16; // [esp+17h] [ebp-39h]
  unsigned __int64 v17; // [esp+1Ch] [ebp-34h]
  signed __int32 v18; // [esp+24h] [ebp-2Ch]
  signed __int32 v19; // [esp+24h] [ebp-2Ch]
  int v20; // [esp+28h] [ebp-28h] BYREF
  unsigned int v21; // [esp+2Ch] [ebp-24h]
  unsigned int v22; // [esp+30h] [ebp-20h] BYREF
  unsigned int *v23; // [esp+34h] [ebp-1Ch]
  int v24; // [esp+38h] [ebp-18h]
  void *UniqueThread; // [esp+3Ch] [ebp-14h]
  int v26; // [esp+40h] [ebp-10h]
  signed __int32 v27[3]; // [esp+44h] [ebp-Ch] BYREF

  v1 = a1;
  v20 = 0;
  result = _InterlockedCompareExchange(a1, 17, 0);
  v3 = result;
  v18 = result;
  if ( result )
  {
    while ( 1 )
    {
      v4 = (v3 >> 1) & 1;
      if ( (v3 & 1) == 0 || !v4 && (v3 & 0xFFFFFFF0) != 0 )
        break;
      if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
      {
        ZwTerminateProcess(-1, -1073741749);
        v6 = v18;
      }
      v16 = 0;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      v27[0] = 2;
      v24 = 0;
      if ( v4 )
      {
        v23 = 0;
        v26 = -1;
        v22 = v6 & 0xFFFFFFF0;
        v7 = (char *)((unsigned int)&v22 | v6 & 8 | 7);
        v16 = (v6 & 4) == 0;
      }
      else
      {
        v26 = -2;
        v23 = &v22;
        v7 = (char *)&v22 + 3;
      }
      v8 = _InterlockedCompareExchange(v1, (signed __int32)v7, v6);
      v19 = v8;
      if ( v8 != v6 )
        goto LABEL_15;
      if ( v16 )
        RtlpOptimizeSRWLockList(v7);
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        if ( MEMORY[0x7FFE0297] )
        {
          v12 = __rdtsc();
          v17 = v12 + (unsigned int)SRWLockSpinCycleCount;
          v13 = v12;
          while ( 1 )
          {
            __asm { monitorx eax, ecx, edx }
            if ( (v27[0] & 2) == 0 )
              break;
            v14 = HIDWORD(v13);
            v21 = v13;
            v15 = __rdtsc();
            v13 = v15;
            if ( v15 <= __PAIR64__(v14, v21) || v15 >= v17 )
              break;
            __asm { mwaitx  eax, ecx, ebx }
          }
        }
        else
        {
          v9 = 0;
          v10 = SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6];
          while ( !(unsigned __int8)RtlpIsWaitBlockSpinSatisfied(&v22, 0) && v9 != v10 )
          {
            _mm_pause();
            ++v9;
          }
          v8 = v19;
          v1 = a1;
        }
      }
      if ( _interlockedbittestandreset(v27, 1u) )
      {
        do
          ZwWaitForAlertByThreadId(v1, 0);
        while ( (v27[0] & 4) == 0 );
      }
LABEL_16:
      v3 = v8;
      v18 = v8;
    }
    v5 = v3 | 1;
    if ( !v4 )
      v5 += 16;
    result = _InterlockedCompareExchange(v1, v5, v3);
    if ( result == v3 )
      return result;
LABEL_15:
    RtlBackoff(&v20);
    v8 = *v1;
    goto LABEL_16;
  }
  return result;
}
