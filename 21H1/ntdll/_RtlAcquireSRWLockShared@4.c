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

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  PRTL_SRWLOCK v1; // edi
  unsigned __int32 v2; // ecx
  int v3; // esi
  signed __int32 v4; // edx
  signed __int32 v5; // ecx
  char *v6; // edx
  signed __int32 Value; // esi
  int v8; // edi
  unsigned int v9; // esi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // kr08_8
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  bool v15; // [esp+17h] [ebp-39h]
  unsigned __int64 v16; // [esp+1Ch] [ebp-34h]
  signed __int32 v17; // [esp+24h] [ebp-2Ch]
  signed __int32 v18; // [esp+24h] [ebp-2Ch]
  int v19; // [esp+28h] [ebp-28h] BYREF
  unsigned int v20; // [esp+2Ch] [ebp-24h]
  unsigned int v21; // [esp+30h] [ebp-20h] BYREF
  unsigned int *v22; // [esp+34h] [ebp-1Ch]
  int v23; // [esp+38h] [ebp-18h]
  void *UniqueThread; // [esp+3Ch] [ebp-14h]
  int v25; // [esp+40h] [ebp-10h]
  signed __int32 v26[3]; // [esp+44h] [ebp-Ch] BYREF

  v1 = SRWLock;
  v19 = 0;
  v2 = _InterlockedCompareExchange((volatile signed __int32 *)SRWLock, 17, 0);
  v17 = v2;
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (v2 >> 1) & 1;
      if ( (v2 & 1) == 0 || !v3 && (v2 & 0xFFFFFFF0) != 0 )
        break;
      if ( (unsigned __int8)RtlpWaitCouldDeadlock() )
      {
        ZwTerminateProcess((HANDLE)0xFFFFFFFF, -1073741749);
        v5 = v17;
      }
      v15 = 0;
      UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
      v26[0] = 2;
      v23 = 0;
      if ( v3 )
      {
        v22 = 0;
        v25 = -1;
        v21 = v5 & 0xFFFFFFF0;
        v6 = (char *)((unsigned int)&v21 | v5 & 8 | 7);
        v15 = (v5 & 4) == 0;
      }
      else
      {
        v25 = -2;
        v22 = &v21;
        v6 = (char *)&v21 + 3;
      }
      Value = _InterlockedCompareExchange((volatile signed __int32 *)v1, (signed __int32)v6, v5);
      v18 = Value;
      if ( Value != v5 )
        goto LABEL_15;
      if ( v15 )
        RtlpOptimizeSRWLockList(v6);
      if ( MEMORY[0x7FFE036A] > 1u )
      {
        if ( MEMORY[0x7FFE0297] )
        {
          v11 = __rdtsc();
          v16 = v11 + (unsigned int)SRWLockSpinCycleCount;
          v12 = v11;
          while ( 1 )
          {
            __asm { monitorx eax, ecx, edx }
            if ( (v26[0] & 2) == 0 )
              break;
            v13 = HIDWORD(v12);
            v20 = v12;
            v14 = __rdtsc();
            v12 = v14;
            if ( v14 <= __PAIR64__(v13, v20) || v14 >= v16 )
              break;
            __asm { mwaitx  eax, ecx, ebx }
          }
        }
        else
        {
          v8 = 0;
          v9 = SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6];
          while ( !(unsigned __int8)RtlpIsWaitBlockSpinSatisfied(&v21, 0) && v8 != v9 )
          {
            _mm_pause();
            ++v8;
          }
          Value = v18;
          v1 = SRWLock;
        }
      }
      if ( _interlockedbittestandreset(v26, 1u) )
      {
        do
          ZwWaitForAlertByThreadId(v1, 0);
        while ( (v26[0] & 4) == 0 );
      }
LABEL_16:
      v2 = Value;
      v17 = Value;
    }
    v4 = v2 | 1;
    if ( !v3 )
      v4 += 16;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)v1, v4, v2) == v2 )
      return;
LABEL_15:
    RtlBackoff(&v19);
    Value = v1->Value;
    goto LABEL_16;
  }
}
