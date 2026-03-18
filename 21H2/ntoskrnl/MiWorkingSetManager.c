/*
 * XREFs of MiWorkingSetManager @ 0x140267320
 * Callers:
 *     KeBalanceSetManager @ 0x1403C81D0 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x14058DE20 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x14023B3C8 (MiEnumerateSlabAllocators.c)
 *     MiPruneProcessLargePageCaches @ 0x140267594 (MiPruneProcessLargePageCaches.c)
 *     MiWakeBadPageSignalThread @ 0x1402676A8 (MiWakeBadPageSignalThread.c)
 *     MiCheckLogPinDriverAddresses @ 0x140267708 (MiCheckLogPinDriverAddresses.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140267820 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiWakePageZeroing @ 0x1402678C8 (MiWakePageZeroing.c)
 *     MiScheduleZeroPageThreads @ 0x140267B58 (MiScheduleZeroPageThreads.c)
 *     MiSignalLargePageRebuild @ 0x140267CA8 (MiSignalLargePageRebuild.c)
 *     MiNumberWsSwapPagefiles @ 0x140268BB0 (MiNumberWsSwapPagefiles.c)
 *     MiScanPagefiles @ 0x140268BEC (MiScanPagefiles.c)
 *     MiAdjustModifiedPageLoad @ 0x140268CA8 (MiAdjustModifiedPageLoad.c)
 *     MiAdjustCachedStacks @ 0x140268E74 (MiAdjustCachedStacks.c)
 *     MiAdjustPteBins @ 0x140269464 (MiAdjustPteBins.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     MiReleaseSystemCacheView @ 0x1402864A0 (MiReleaseSystemCacheView.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExQueueWorkItemToPartition @ 0x1402EF060 (ExQueueWorkItemToPartition.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     MiProcessWorkingSets @ 0x14030BBF0 (MiProcessWorkingSets.c)
 *     MiEmptyDecayClusterTimers @ 0x1403122F0 (MiEmptyDecayClusterTimers.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     MiHandleForceTrimWorkingSets @ 0x140373F80 (MiHandleForceTrimWorkingSets.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiQueueExtentPfnDeletion @ 0x1405A0964 (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  __int64 UnbiasedInterruptTime; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  signed __int32 v16[8]; // [rsp+0h] [rbp-B8h] BYREF
  _BYTE v17[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = *(_QWORD *)(a1 + 16600);
  v5 = 0;
  if ( !*(_QWORD *)(v4 + 88) )
    *(_QWORD *)(v4 + 88) = KeGetCurrentThread();
  MiWakePageZeroing(a1, 0LL, 0LL);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiReclaimUnusedUltraMdlMaps();
    MiCheckLogPinDriverAddresses();
    MiWakeBadPageSignalThread();
  }
  MiEmptyDecayClusterTimers(a1);
  if ( (*(_DWORD *)(a1 + 4) & 0x18) != 0 )
    MiEnumerateSlabAllocators(
      a1,
      (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreeSlabEntries,
      0LL,
      0xFFFFFFFF);
  MiPruneProcessLargePageCaches(a1, 1LL);
  MiReleaseSystemCacheView(a1, 0LL);
  if ( ++*(_DWORD *)(v4 + 32) == *(_DWORD *)(v4 + 36) )
  {
    v13 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    v14 = ((_BYTE)v13 + 1) & 0xF;
    *(_DWORD *)(v4 + 24) = v14;
    v15 = ((_BYTE)v14 - 8) & 0xF;
    if ( *(_QWORD *)(88 * v15 + a1 + 5120) )
      KeSetEvent((PRKEVENT)(a1 + 24 * (v15 + 285)), 0, 0);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&stru_140C53350, 0, 0);
  v17[4] = 1;
  while ( 1 )
  {
    v6 = v17[4];
    while ( (*(_DWORD *)(v4 + 40) & 0x400) != 0 )
      MiHandleForceTrimWorkingSets(a1);
    MiProcessWorkingSets(a1, v17);
    while ( (*(_DWORD *)(v4 + 40) & 0x400) != 0 )
      MiHandleForceTrimWorkingSets(a1);
    if ( v17[4] == 1 )
      break;
    if ( v6 == v17[4] )
    {
      v17[4] = 1;
      ++*(_DWORD *)(v4 + 2576);
    }
    else
    {
      MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(unsigned int *)(v4 + 120));
      ++*(_DWORD *)(v4 + 2572);
      MiScanPagefiles(a1);
      v5 = 1;
    }
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    if ( byte_140C4F2EA )
      MiQueueExtentPfnDeletion(0LL);
  }
  MiAdjustCachedStacks(a1);
  if ( !v5 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(unsigned int *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  if ( (unsigned int)MiNumberWsSwapPagefiles(a1) )
  {
    if ( !*(_QWORD *)(a1 + 1096) )
    {
      _InterlockedOr(v16, 0);
      LOBYTE(v7) = 1;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(v7);
      if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(a1 + 1104)) >= 0x861C46800LL )
      {
        if ( byte_140C529C1 )
        {
          *(_QWORD *)(a1 + 1104) = UnbiasedInterruptTime - 33000000000LL;
        }
        else if ( (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(a1 + 176), 36000000000LL, v9) )
        {
          *(_QWORD *)(a1 + 1072) = 0LL;
          *(_QWORD *)(a1 + 1088) = MiTrimUnusedPageFileRegionsWorker;
          *(_QWORD *)(a1 + 1096) = a1;
          ExQueueWorkItemToPartition(a1 + 1072);
        }
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 17280);
  v11 = *(_QWORD *)(a1 + 17504);
  if ( v10 > v11 && v10 - v11 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 816), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
