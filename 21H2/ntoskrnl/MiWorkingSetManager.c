/*
 * XREFs of MiWorkingSetManager @ 0x140272C60
 * Callers:
 *     KeBalanceSetManager @ 0x1403B90E0 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x140535740 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiProcessWorkingSets @ 0x140207BA0 (MiProcessWorkingSets.c)
 *     KePulseEvent @ 0x140271AC0 (KePulseEvent.c)
 *     MiDeleteStaleCacheMaps @ 0x140271BD0 (MiDeleteStaleCacheMaps.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140271C40 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiCheckLogPinDriverAddresses @ 0x140271CE8 (MiCheckLogPinDriverAddresses.c)
 *     MiEmptyDecayClusterTimers @ 0x140271E00 (MiEmptyDecayClusterTimers.c)
 *     MiAdjustPteBins @ 0x1402722D8 (MiAdjustPteBins.c)
 *     MiAdjustCachedStacks @ 0x140272538 (MiAdjustCachedStacks.c)
 *     MiAdjustModifiedPageLoad @ 0x140272ACC (MiAdjustModifiedPageLoad.c)
 *     MiScheduleZeroPageThreads @ 0x140272E84 (MiScheduleZeroPageThreads.c)
 *     MiSignalLargePageRebuild @ 0x140272FE0 (MiSignalLargePageRebuild.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14027318C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x1402732EC (MiScanPagefiles.c)
 *     MiEnumerateSlabAllocators @ 0x1402B8CCC (MiEnumerateSlabAllocators.c)
 *     MiWakePageZeroing @ 0x1402FF128 (MiWakePageZeroing.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiQueueExtentPfnDeletion @ 0x140541F6C (MiQueueExtentPfnDeletion.c)
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
    KePulseEvent(&stru_140C4EE50, 0, 0);
  v14[4] = 1;
  MiProcessWorkingSets(a1, (__int64)v14);
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
      MiProcessWorkingSets(a1, (__int64)v14);
      v9 = v14[4];
    }
    while ( v14[4] != 1 );
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins();
    MiAdjustCachedStacks();
    if ( byte_140C4CB32 == 1 )
      MiQueueExtentPfnDeletion(0LL);
  }
  if ( !v5 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  MiCheckTrimUnusedPageFileRegions(a1);
  v11 = *(_QWORD *)(a1 + 7488);
  v12 = *(_QWORD *)(a1 + 7600);
  if ( v11 > v12 && v11 - v12 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 792), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
