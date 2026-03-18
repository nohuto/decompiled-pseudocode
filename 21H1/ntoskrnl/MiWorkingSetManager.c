/*
 * XREFs of MiWorkingSetManager @ 0x140240450
 * Callers:
 *     KeBalanceSetManager @ 0x1403B4E10 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x14052FC20 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiDeleteStaleCacheMaps @ 0x1402032E0 (MiDeleteStaleCacheMaps.c)
 *     MiAdjustPteBins @ 0x140203570 (MiAdjustPteBins.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14023EFB4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiEmptyDecayClusterTimers @ 0x14023F05C (MiEmptyDecayClusterTimers.c)
 *     MiAdjustCachedStacks @ 0x14023FF30 (MiAdjustCachedStacks.c)
 *     MiAdjustModifiedPageLoad @ 0x14024012C (MiAdjustModifiedPageLoad.c)
 *     MiScanPagefiles @ 0x1402402B8 (MiScanPagefiles.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x140240374 (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScheduleZeroPageThreads @ 0x140240674 (MiScheduleZeroPageThreads.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiProcessWorkingSets @ 0x14025C5F0 (MiProcessWorkingSets.c)
 *     KePulseEvent @ 0x1402F6B10 (KePulseEvent.c)
 *     MiCheckLogPinDriverAddresses @ 0x1402F76B4 (MiCheckLogPinDriverAddresses.c)
 *     MiEnumerateSlabAllocators @ 0x140306AE0 (MiEnumerateSlabAllocators.c)
 *     MiWakePageZeroing @ 0x140346598 (MiWakePageZeroing.c)
 *     MiSignalLargePageRebuild @ 0x140350180 (MiSignalLargePageRebuild.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiQueueExtentPfnDeletion @ 0x14053C44C (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  char v9; // al
  char v10; // si
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _BYTE v14[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v14, 0, sizeof(v14));
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
    KePulseEvent(&Event, 0, 0);
  v14[4] = 1;
  MiProcessWorkingSets(a1, v14);
  v9 = v14[4];
  if ( v14[4] != 1 )
  {
    v10 = 1;
    do
    {
      if ( v10 == v9 )
      {
        v14[4] = 1;
        ++*(_DWORD *)(v4 + 2576);
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
        ++*(_DWORD *)(v4 + 2572);
        MiScanPagefiles(a1);
        v5 = 1;
      }
      v10 = v14[4];
      MiProcessWorkingSets(a1, v14);
      v9 = v14[4];
    }
    while ( v14[4] != 1 );
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    MiAdjustCachedStacks();
    if ( byte_140C4CA72 == 1 )
      MiQueueExtentPfnDeletion(0LL);
  }
  if ( !v5 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  MiCheckTrimUnusedPageFileRegions();
  v11 = *(_QWORD *)(a1 + 7488);
  v12 = *(_QWORD *)(a1 + 7600);
  if ( v11 > v12 && v11 - v12 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 792), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
