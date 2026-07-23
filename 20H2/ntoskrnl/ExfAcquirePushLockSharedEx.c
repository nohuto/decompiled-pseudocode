/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x140241E40
 * Callers:
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1402204A0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140240880 (ExAcquireAutoExpandPushLockShared.c)
 *     ExfAcquirePushLockShared @ 0x140241E20 (ExfAcquirePushLockShared.c)
 *     InsertEventEntryInLookUpTable @ 0x140375D50 (InsertEventEntryInLookUpTable.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x140390670 (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x1403910FC (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140393EE4 (ExpSaAllocatorFree.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D41C8 (WbGetWarbirdEncryptionSegment.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14065154C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140652D04 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140652FCC (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140653290 (ExpWnfNotifyNameSubscribers.c)
 *     ExpNtUpdateWnfStateData @ 0x14065397C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x140654754 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140654854 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140654E40 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140655034 (ExpWnfSubscribeNameInstance.c)
 *     WbAllocateUserMemory @ 0x14065D5D8 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14065D8C0 (WbAllocateSlots.c)
 *     sub_14065E118 @ 0x14065E118 (sub_14065E118.c)
 *     WbRemoveWarbirdProcess @ 0x14065ED00 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x14065EEB0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x14065F2F4 (WbGetWarbirdProcess.c)
 *     WbGetHeapExecutedBlock @ 0x14065F79C (WbGetHeapExecutedBlock.c)
 *     ExpWnfNotifySubscription @ 0x1406CDA60 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406CDC04 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406DB958 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406E0778 (ExpWnfEnumerateScopeInstances.c)
 *     ExRegisterExtension @ 0x1407A8D60 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095E14C (ExpKdPullRemoteFileForUser.c)
 *     WheaConfigureErrorSource @ 0x1409A2C20 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B6870 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140242080 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x140242104 (ExpOptimizePushLockList.c)
 *     memset @ 0x140411300 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  signed __int64 v8; // rcx
  signed __int64 result; // rax
  bool v10; // cl
  char *v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // ecx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF

  memset(Object, 0, sizeof(Object));
  v21 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  while ( 1 )
  {
    v7 = (v6 >> 1) & 1;
    if ( (v6 & 1) == 0 || !v7 && (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      break;
    if ( a2 )
      KeAbPreWait(a2);
    v10 = 0;
    Object[7] = a2;
    HIDWORD(Object[6]) = 2;
    Object[5] = 0LL;
    if ( v7 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (char *)((unsigned __int64)Object | v6 & 8 | 7);
      v10 = (v6 & 4) == 0;
    }
    else
    {
      LODWORD(Object[6]) = -2;
      Object[4] = Object;
      v11 = (char *)Object + 3;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v11, v6);
    v12 = v6 == v13;
    v6 = v13;
    if ( !v12 )
      goto LABEL_24;
    if ( v10 )
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
        v16 = __rdtsc();
        v17 = v16 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v18 = v16;
          v19 = __rdtsc();
          v16 = v19;
          if ( v19 <= v18 || v19 >= v17 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0;
              (Object[6] & 0x200000000LL) != 0 && i != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
              ++i )
        {
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
  v8 = (v6 | 1) + 16;
  if ( v7 )
    v8 = v6 | 1;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_24:
    RtlBackoff(&v21);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_25;
  }
  return result;
}
