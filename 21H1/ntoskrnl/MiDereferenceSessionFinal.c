/*
 * XREFs of MiDereferenceSessionFinal @ 0x140763920
 * Callers:
 *     MiDereferenceSession @ 0x1406E07E8 (MiDereferenceSession.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiReturnResident @ 0x1402D4EFC (MiReturnResident.c)
 *     MiDetachProcessFromSession @ 0x140307618 (MiDetachProcessFromSession.c)
 *     MiPartitionIdToPointer @ 0x140323828 (MiPartitionIdToPointer.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiDeleteSessionAddressSpace @ 0x140385D7C (MiDeleteSessionAddressSpace.c)
 *     MiSessionUnlinkProcess @ 0x140385E88 (MiSessionUnlinkProcess.c)
 *     ExCleanupSessionHeapManager @ 0x140385F88 (ExCleanupSessionHeapManager.c)
 *     MiFreeSessionSpaceMap @ 0x140386488 (MiFreeSessionSpaceMap.c)
 *     MiUnlinkSessionWorkingSet @ 0x1403864C0 (MiUnlinkSessionWorkingSet.c)
 *     MiMarkSessionDeletePending @ 0x140386528 (MiMarkSessionDeletePending.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ExpWnfDeleteScopeById @ 0x140662C0C (ExpWnfDeleteScopeById.c)
 *     MiCheckSessionPoolAllocations @ 0x140763AF0 (MiCheckSessionPoolAllocations.c)
 *     MiSessionUnloadAllImages @ 0x140763BDC (MiSessionUnloadAllImages.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  void *v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+30h] [rbp-38h]
  __int128 v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+70h] [rbp+8h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
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
  v20 = *(_DWORD *)(v2 + 8);
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExpWnfDeleteScopeById(1u, (__int64)&v20, 4u);
  KeLeaveCriticalRegion();
  MiFreeSessionSpaceMap();
  v6 = *(_DWORD *)(v2 + 4);
  if ( (v6 & 1) != 0 )
  {
    ExCleanupSessionHeapManager();
    *(_DWORD *)(v2 + 4) |= 0x100u;
    MiCheckSessionPoolAllocations(v8, v7, v9, v10, v17, *((_QWORD *)&v17 + 1));
    v6 = *(_DWORD *)(v2 + 4);
  }
  if ( (v6 & 0x180) == 0x80 )
    ExCleanupSessionHeapManager();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DD08, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DD08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4DD08);
  KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
  if ( *(_QWORD *)(Process + 1184) )
  {
    MiSessionUnlinkProcess(v14, Process);
    *(_QWORD *)(Process + 1184) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, &v17);
  MiDetachProcessFromSession(0);
  MiReturnCommit(v3, *((_QWORD *)&v18 + 1) - *((_QWORD *)&v17 + 1));
  MiReturnResident(v3, v17);
  result = MiReturnResident(v3, *(_QWORD *)(v2 + 368));
  v16 = *(void **)(v2 + 1048);
  if ( v16 )
    result = ObfDereferenceObjectWithTag(v16, 0x73536D4Du);
  *(_QWORD *)(v2 + 1048) = 0LL;
  return result;
}
