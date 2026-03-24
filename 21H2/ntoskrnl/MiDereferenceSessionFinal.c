/*
 * XREFs of MiDereferenceSessionFinal @ 0x140778320
 * Callers:
 *     MiDereferenceSession @ 0x1406B48A8 (MiDereferenceSession.c)
 * Callees:
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     MiDetachProcessFromSession @ 0x1402B9868 (MiDetachProcessFromSession.c)
 *     MiPartitionIdToPointer @ 0x1402CBF58 (MiPartitionIdToPointer.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     MiDeleteSessionAddressSpace @ 0x1403895EC (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x140389710 (MiSessionUnlinkProcess.c)
 *     ExCleanupSessionHeapManager @ 0x140389810 (ExCleanupSessionHeapManager.c)
 *     MiFreeSessionSpaceMap @ 0x140389D10 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x140389D48 (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x140389DB0 (MiMarkSessionDeletePending.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExpWnfDeleteScopeById @ 0x1406135B8 (ExpWnfDeleteScopeById.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     MiCheckSessionPoolAllocations @ 0x1407784F0 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x1407785DC (MiSessionUnloadAllImages.c)
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
  ExpWnfDeleteScopeById(1LL, &v17, 4u);
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDC8, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DDC8);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DDC8);
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
