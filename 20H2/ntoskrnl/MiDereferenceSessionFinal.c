/*
 * XREFs of MiDereferenceSessionFinal @ 0x140774370
 * Callers:
 *     MiDereferenceSession @ 0x1406D65C8 (MiDereferenceSession.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiReturnResident @ 0x14026307C (MiReturnResident.c)
 *     MiDetachProcessFromSession @ 0x140316258 (MiDetachProcessFromSession.c)
 *     MiPartitionIdToPointer @ 0x14031EF60 (MiPartitionIdToPointer.c)
 *     MiDeleteSessionAddressSpace @ 0x140388E8C (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x140388FB8 (MiSessionUnlinkProcess.c)
 *     ExCleanupSessionHeapManager @ 0x1403890B8 (ExCleanupSessionHeapManager.c)
 *     MiFreeSessionSpaceMap @ 0x1403895B8 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x1403895F0 (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x140389658 (MiMarkSessionDeletePending.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x14064E12C (ExpWnfDeleteScopeById.c)
 *     MiCheckSessionPoolAllocations @ 0x140774540 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x14077462C (MiSessionUnloadAllImages.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Process; // rsi
  unsigned __int64 v2; // rdi
  __int64 v3; // r14
  void (__fastcall *v4)(_QWORD); // rax
  struct _KTHREAD *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  void *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+70h] [rbp+8h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = *(_QWORD *)(Process + 1368);
  v3 = MiPartitionIdToPointer(*(_WORD *)(v2 + 430));
  MiMarkSessionDeletePending(v2);
  if ( *(_QWORD *)(v2 + 80) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 72), 1, 0);
    ObCloseHandle(*(HANDLE *)(v2 + 80), 0);
  }
  v4 = *(void (__fastcall **)(_QWORD))(v2 + 680);
  if ( (unsigned __int64)v4 > 1 )
    v4(0LL);
  MiSessionUnloadAllImages();
  MiUnlinkSessionWorkingSet(v2);
  v17 = *(_DWORD *)(v2 + 8);
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExpWnfDeleteScopeById(1u, (__int64)&v17, 4u);
  KeLeaveCriticalRegion();
  MiFreeSessionSpaceMap();
  v6 = *(_DWORD *)(v2 + 4);
  if ( (v6 & 1) != 0 )
  {
    ExCleanupSessionHeapManager();
    *(_DWORD *)(v2 + 4) |= 0x100u;
    MiCheckSessionPoolAllocations(v8, v7, v9, v10, v14, *((_QWORD *)&v14 + 1));
    v6 = *(_DWORD *)(v2 + 4);
  }
  if ( (v6 & 0x180) == 0x80 )
    ExCleanupSessionHeapManager();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DC48, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC48);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( *(_QWORD *)(Process + 1184) )
  {
    MiSessionUnlinkProcess(v11, Process);
    *(_QWORD *)(Process + 1184) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, &v14);
  MiDetachProcessFromSession(0);
  MiReturnCommit(v3, *((_QWORD *)&v15 + 1) - *((_QWORD *)&v14 + 1));
  MiReturnResident(v3, v14);
  result = MiReturnResident(v3, *(_QWORD *)(v2 + 368));
  v13 = *(void **)(v2 + 1048);
  if ( v13 )
    result = ObfDereferenceObjectWithTag(v13, 0x73536D4Du);
  *(_QWORD *)(v2 + 1048) = 0LL;
  return result;
}
