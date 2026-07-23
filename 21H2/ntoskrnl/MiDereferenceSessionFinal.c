/*
 * XREFs of MiDereferenceSessionFinal @ 0x1407784E0
 * Callers:
 *     MiDereferenceSession @ 0x140613A78 (MiDereferenceSession.c)
 * Callees:
 *     MiDetachProcessFromSession @ 0x140237A78 (MiDetachProcessFromSession.c)
 *     MiPartitionIdToPointer @ 0x14024A6C4 (MiPartitionIdToPointer.c)
 *     MiReturnResident @ 0x140273F7C (MiReturnResident.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     MiDeleteSessionAddressSpace @ 0x14038973C (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x140389860 (MiSessionUnlinkProcess.c)
 *     ExCleanupSessionHeapManager @ 0x140389960 (ExCleanupSessionHeapManager.c)
 *     MiFreeSessionSpaceMap @ 0x140389E60 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x140389E98 (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x140389F00 (MiMarkSessionDeletePending.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExpWnfDeleteScopeById @ 0x14060C48C (ExpWnfDeleteScopeById.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     MiCheckSessionPoolAllocations @ 0x1407786B0 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x14077879C (MiSessionUnloadAllImages.c)
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
  ExpWnfDeleteScopeById(1LL, (__int64)&v17, 4u);
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
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DE08, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DE08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DE08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DE08);
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
