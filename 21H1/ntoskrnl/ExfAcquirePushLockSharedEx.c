/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x14035A060
 * Callers:
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140260440 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1403597C0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExfAcquirePushLockShared @ 0x14035A040 (ExfAcquirePushLockShared.c)
 *     InsertEventEntryInLookUpTable @ 0x140372880 (InsertEventEntryInLookUpTable.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14038D610 (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14038E09C (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140390EB4 (ExpSaAllocatorFree.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405CC954 (WbGetWarbirdEncryptionSegment.c)
 *     WbAllocateUserMemory @ 0x14065BCCC (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14065BFB4 (WbAllocateSlots.c)
 *     sub_14065C808 @ 0x14065C808 (sub_14065C808.c)
 *     WbRemoveWarbirdProcess @ 0x14065E8CC (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14065EA7C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14065EEC0 (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x14065F368 (WbGetHeapExecutedBlock.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14066602C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140667274 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14066753C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140667800 (ExpWnfNotifyNameSubscribers.c)
 *     ExpNtUpdateWnfStateData @ 0x140667EEC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x140668CC4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140668DC4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140669454 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140669648 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifySubscription @ 0x1406D76DC (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D7884 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406E5568 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EA720 (ExpWnfEnumerateScopeInstances.c)
 *     ExRegisterExtension @ 0x1407A6A00 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x140956CBC (ExpKdPullRemoteFileForUser.c)
 *     WheaConfigureErrorSource @ 0x14099B380 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409AFAA0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     RtlBackoff @ 0x14035A2A0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x14035A324 (ExpOptimizePushLockList.c)
 *     memset @ 0x140408F80 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  signed __int64 result; // rax
  bool v13; // cl
  bool v14; // zf
  signed __int64 v15; // rax
  int i; // ecx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v9 = *a1;
  while ( 1 )
  {
    v10 = (v9 >> 1) & 1;
    if ( (v9 & 1) == 0 || !v10 && (v9 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      break;
    if ( a2 )
      KeAbPreWait(a2);
    v13 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = 2;
    Object[5] = 0LL;
    if ( v10 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v6 = (unsigned __int64)Object | v9 & 8 | 7;
      v13 = (v9 & 4) == 0;
    }
    else
    {
      LODWORD(Object[6]) = -2;
      Object[4] = Object;
      v6 = (unsigned __int64)Object + 3;
    }
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v6, v9);
    v14 = v9 == v15;
    v9 = v15;
    if ( !v14 )
      goto LABEL_24;
    if ( v13 )
      ExpOptimizePushLockList(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v7 = __rdtsc();
        v8 = v7 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          v6 = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v7;
          v19 = __rdtsc();
          v6 = (unsigned __int64)HIDWORD(v19) << 32;
          v7 = v19;
          if ( v19 <= v18 || v19 >= v8 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          v6 = HIDWORD(Object[6]);
          if ( (Object[6] & 0x200000000LL) == 0 || i == ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6] )
            break;
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_25:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2, 0);
  }
  v11 = (v9 | 1) + 16;
  if ( v10 )
    v11 = v9 | 1;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v11, v9);
  if ( v9 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_24:
    RtlBackoff(&v21, v6, v7, v8);
    v9 = *a1;
    _m_prefetchw(a1);
    goto LABEL_25;
  }
  return result;
}
