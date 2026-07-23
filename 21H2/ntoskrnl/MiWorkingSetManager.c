/*
 * XREFs of MiWorkingSetManager @ 0x140260C00
 * Callers:
 *     KeBalanceSetManager @ 0x1403B9250 (KeBalanceSetManager.c)
 *     MiPartitionWorkingSetManager @ 0x140535980 (MiPartitionWorkingSetManager.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x140236EDC (MiEnumerateSlabAllocators.c)
 *     KePulseEvent @ 0x14025FA60 (KePulseEvent.c)
 *     MiDeleteStaleCacheMaps @ 0x14025FB70 (MiDeleteStaleCacheMaps.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14025FBE0 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiCheckLogPinDriverAddresses @ 0x14025FC88 (MiCheckLogPinDriverAddresses.c)
 *     MiEmptyDecayClusterTimers @ 0x14025FDA0 (MiEmptyDecayClusterTimers.c)
 *     MiAdjustPteBins @ 0x140260278 (MiAdjustPteBins.c)
 *     MiAdjustCachedStacks @ 0x1402604D8 (MiAdjustCachedStacks.c)
 *     MiAdjustModifiedPageLoad @ 0x140260A6C (MiAdjustModifiedPageLoad.c)
 *     MiScheduleZeroPageThreads @ 0x140260E24 (MiScheduleZeroPageThreads.c)
 *     MiSignalLargePageRebuild @ 0x140260F80 (MiSignalLargePageRebuild.c)
 *     MiCheckTrimUnusedPageFileRegions @ 0x14026112C (MiCheckTrimUnusedPageFileRegions.c)
 *     MiScanPagefiles @ 0x14026128C (MiScanPagefiles.c)
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 *     MiWakePageZeroing @ 0x140309E78 (MiWakePageZeroing.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiQueueExtentPfnDeletion @ 0x1405421AC (MiQueueExtentPfnDeletion.c)
 */

__int64 __fastcall MiWorkingSetManager(__int64 a1, int a2)
{
  __int64 v4; // rdi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  char v14; // si
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  _BYTE v18[112]; // [rsp+20h] [rbp-98h] BYREF

  memset(v18, 0, sizeof(v18));
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
    MiEnumerateSlabAllocators(
      a1,
      (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiFreeSlabEntries,
      0LL);
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
    KePulseEvent(&stru_140C4EE90, 0, 0);
  v18[4] = 1;
  MiProcessWorkingSets(a1, v18);
  v13 = v18[4];
  if ( v18[4] != 1 )
  {
    v14 = 1;
    do
    {
      if ( v14 == v13 )
      {
        v18[4] = 1;
        ++*(_DWORD *)(v4 + 2576);
      }
      else
      {
        MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
        ++*(_DWORD *)(v4 + 2572);
        MiScanPagefiles(a1);
        v5 = 1;
      }
      v14 = v18[4];
      MiProcessWorkingSets(a1, v18);
      v13 = v18[4];
    }
    while ( v18[4] != 1 );
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    MiAdjustPteBins(v10, v9, v11, v12);
    MiAdjustCachedStacks();
    if ( byte_140C4CB72 == 1 )
      MiQueueExtentPfnDeletion(0LL);
  }
  if ( !v5 )
  {
    MiAdjustModifiedPageLoad(a1, *(_QWORD *)(v4 + 2336), *(_DWORD *)(v4 + 120));
    MiScanPagefiles(a1);
  }
  MiCheckTrimUnusedPageFileRegions(a1);
  v15 = *(_QWORD *)(a1 + 7488);
  v16 = *(_QWORD *)(a1 + 7600);
  if ( v15 > v16 && v15 - v16 >= 0x320 )
    KeSetEvent((PRKEVENT)(a1 + 792), 0, 0);
  MiSignalLargePageRebuild(a1);
  return MiScheduleZeroPageThreads(a1);
}
