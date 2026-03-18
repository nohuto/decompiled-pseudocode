/*
 * XREFs of MiDereferenceSessionFinal @ 0x140693A28
 * Callers:
 *     MiDereferenceSession @ 0x140693F68 (MiDereferenceSession.c)
 * Callees:
 *     MiDeleteSessionAddressSpace @ 0x140216B04 (MiDeleteSessionAddressSpace.c)
 *     MiUnlinkSessionWorkingSet @ 0x140216BC0 (MiUnlinkSessionWorkingSet.c)
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     MiDetachProcessFromSession @ 0x1402180C4 (MiDetachProcessFromSession.c)
 *     MiSessionUnlinkProcess @ 0x140218208 (MiSessionUnlinkProcess.c)
 *     MiMarkSessionDeletePending @ 0x140218288 (MiMarkSessionDeletePending.c)
 *     MiPartitionIdToPointer @ 0x1402182F8 (MiPartitionIdToPointer.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExCleanupSessionHeapManager @ 0x14036DBE4 (ExCleanupSessionHeapManager.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MiCheckSessionPoolAllocations @ 0x1406939A4 (MiCheckSessionPoolAllocations.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     MiSessionUnloadAllImages @ 0x140761DF8 (MiSessionUnloadAllImages.c)
 *     ExpWnfDeleteScopeById @ 0x1407914BC (ExpWnfDeleteScopeById.c)
 */

unsigned __int64 MiDereferenceSessionFinal()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rbp
  __int64 v2; // rdi
  __int64 v3; // r14
  void (__fastcall *v4)(_QWORD); // rax
  struct _KTHREAD *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  bool v8; // zf
  unsigned __int64 result; // rax
  void *v10; // rcx
  _OWORD v11[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+80h] [rbp+8h] BYREF

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v2 = *(_QWORD *)(Process + 1368);
  v3 = MiPartitionIdToPointer(*(_WORD *)(v2 + 366));
  MiMarkSessionDeletePending(v2);
  if ( *(_QWORD *)(v2 + 72) )
  {
    KeSetEvent(*(PRKEVENT *)(v2 + 64), 1, 0);
    ObCloseHandle(*(HANDLE *)(v2 + 72), 0);
  }
  v4 = *(void (__fastcall **)(_QWORD))(v2 + 616);
  if ( (unsigned __int64)v4 > 1 )
    v4(0LL);
  MiSessionUnloadAllImages();
  MiUnlinkSessionWorkingSet(v2);
  v14 = *(_DWORD *)(v2 + 8);
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  ExpWnfDeleteScopeById(1LL, &v14, 4LL);
  KeLeaveCriticalRegion();
  v6 = *(_DWORD *)(v2 + 4);
  if ( (v6 & 1) != 0 )
  {
    ExCleanupSessionHeapManager();
    *(_DWORD *)(v2 + 4) |= 0x100u;
    MiCheckSessionPoolAllocations();
    v6 = *(_DWORD *)(v2 + 4);
  }
  if ( (v6 & 0x180) == 0x80 )
    ExCleanupSessionHeapManager();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
  *(_DWORD *)(v2 + 4) |= 0x20u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50628);
  KeAbPostRelease((ULONG_PTR)&qword_140C50628);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( *(_QWORD *)(Process + 1184) )
  {
    MiSessionUnlinkProcess(v7, Process);
    *(_QWORD *)(Process + 1184) = 0LL;
  }
  MiDeleteSessionAddressSpace(v2, (__int64)v11);
  MiDetachProcessFromSession(0LL);
  MiReturnCommit(v3, v12 - *((_QWORD *)&v11[0] + 1));
  MiReturnResident(v3, *(unsigned __int64 *)&v11[0]);
  result = MiReturnResident(v3, *(_QWORD *)(v2 + 304));
  v10 = *(void **)(v2 + 880);
  if ( v10 )
    result = ObfDereferenceObjectWithTag(v10, 0x73536D4Du);
  *(_QWORD *)(v2 + 880) = 0LL;
  return result;
}
