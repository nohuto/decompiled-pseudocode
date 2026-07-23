/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1402FDC10
 * Callers:
 *     ExAcquireAutoExpandPushLockShared @ 0x14020C3D0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExfAcquirePushLockShared @ 0x1402FDBF0 (ExfAcquirePushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140355140 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140375AB0 (InsertEventEntryInLookUpTable.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x140390C90 (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14039171C (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x1403944A4 (ExpSaAllocatorFree.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 *     WbAllocateUserMemory @ 0x1405E6754 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1405E6A3C (WbAllocateSlots.c)
 *     sub_1406069DC @ 0x1406069DC (sub_1406069DC.c)
 *     ExpWnfNotifySubscription @ 0x140609C14 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140609DB4 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x14061A4F8 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14061FA28 (ExpWnfEnumerateScopeInstances.c)
 *     WbGetHeapExecutedBlock @ 0x1406427A4 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1406438F0 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140643E64 (WbGetWarbirdProcess.c)
 *     WbRemoveWarbirdProcess @ 0x14067BEB0 (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14069DAC4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14069DD8C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14069E08C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x14069EE64 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x14069F5F4 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14069F7E8 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1406A114C (ExpWnfAcquireSubscriptionByName.c)
 *     ExRegisterExtension @ 0x14079DA00 (ExRegisterExtension.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095BB9C (ExpKdPullRemoteFileForUser.c)
 *     WheaConfigureErrorSource @ 0x1409A1370 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B46A0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402FDE50 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402FDED4 (ExpOptimizePushLockList.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     memset @ 0x140414300 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, _RTL_BALANCED_NODE *a2, ULONG_PTR a3)
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
      a2 = (_RTL_BALANCED_NODE *)KeAbPreAcquire(a3, a2);
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
