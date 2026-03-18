/*
 * XREFs of MiWorkingSetManager @ 0x1402662A0
 * Callers:
 *     KeBalanceSetManager @ 0x1403B86E0 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x140533C40 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiDeleteStaleCacheMaps @ 0x14023DBCC (MiDeleteStaleCacheMaps.c)
 *     MiAdjustPteBins @ 0x14023E040 (MiAdjustPteBins.c)
 *     MiEmptyDecayClusterTimers @ 0x140265568 (MiEmptyDecayClusterTimers.c)
 *     MiAdjustCachedStacks @ 0x140265838 (MiAdjustCachedStacks.c)
 *     MiAdjustModifiedPageLoad @ 0x140265DCC (MiAdjustModifiedPageLoad.c)
 *     MiScanPagefiles @ 0x140265F58 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x140266014 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiSignalLargePageRebuild @ 0x1402660EC (MiSignalLargePageRebuild.c)
 *     MiScheduleZeroPageThreads @ 0x1402664C4 (MiScheduleZeroPageThreads.c)
 *     MiProcessWorkingSets @ 0x140268EC0 (MiProcessWorkingSets.c)
 *     MiWakePageZeroing @ 0x1402F2498 (MiWakePageZeroing.c)
 *     KePulseEvent @ 0x14030A3F0 (KePulseEvent.c)
 *     MiCheckLogPinDriverAddresses @ 0x14030AB3C (MiCheckLogPinDriverAddresses.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140313058 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiEnumerateSlabAllocators @ 0x140315944 (MiEnumerateSlabAllocators.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiQueueExtentPfnDeletion @ 0x14054046C (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // al
  char v13; // si
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _BYTE v17[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = *(_QWORD *)(a1 + 6848);
  v5 = 0;
  if ( !*(_QWORD *)(v4 + 88) )
    *(_QWORD *)(v4 + 88) = KeGetCurrentThread();
  MiWakePageZeroing(a1, 0LL);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiDeleteStaleCacheMaps();
    MiReclaimUnusedUltraMdlMaps();
    MiCheckLogPinDriverAddresses();
  }
  MiEmptyDecayClusterTimers(a1);
  if ( (*(_DWORD *)(a1 + 4) & 0x18) != 0 )
    MiEnumerateSlabAllocators(a1, MiFreeSlabEntries, 0LL);
  if ( ++*(_DWORD *)(v4 + 32) == *(_DWORD *)(v4 + 36) )
  {
    v6 = *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 32) = 0;
    v7 = ((_BYTE)v6 + 1) & 0xF;
    *(_DWORD *)(v4 + 24) = v7;
    v8 = ((_BYTE)v7 - 8) & 0xF;
    if ( *(_QWORD *)(a1 + 40 * v8 + 3456) )
      KeSetEvent((PRKEVENT)(a1 + 8 * (v8 + 2 * v8 + 551)), 0, 0);
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && !a2 )
    KePulseEvent(&stru_140C4ECD0, 0, 0);
  v17[4] = 1;
  MiProcessWorkingSets(a1, v17);
  v12 = v17[4];
  if ( v17[4] != 1 )
  {
    v13 = 1;
    do
    {
      if ( v13 == v12 )
      {
        v17[4] = 1;
        ++*(_DWORD *)(v4 + 2576);
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
        ++*(_DWORD *)(v4 + 2572);
        MiScanPagefiles(a1);
        v5 = 1;
      }
      v13 = v17[4];
      MiProcessWorkingSets(a1, v17);
      v12 = v17[4];
    }
    while ( v17[4] != 1 );
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins(v10, v9, v11);
    MiAdjustCachedStacks();
    if ( byte_140C4C9B2 == 1 )
      MiQueueExtentPfnDeletion(0LL);
  }
  if ( !v5 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  MiCheckTrimUnusedPageFileRegions();
  v14 = *(_QWORD *)(a1 + 7488);
  v15 = *(_QWORD *)(a1 + 7600);
  if ( v14 > v15 && v14 - v15 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 792), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
