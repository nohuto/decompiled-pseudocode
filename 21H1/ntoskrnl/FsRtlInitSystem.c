/*
 * XREFs of FsRtlInitSystem @ 0x140A67DB0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     FsFilterInit @ 0x1403C4D7C (FsFilterInit.c)
 *     ExInitializePagedLookasideList @ 0x140651E70 (ExInitializePagedLookasideList.c)
 *     FsRtlInitializeTieringHeat @ 0x1407B0CAC (FsRtlInitializeTieringHeat.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     FsRtlInitializeSmssEvent @ 0x140A67EE4 (FsRtlInitializeSmssEvent.c)
 *     FsRtlInitializeWorkerThread @ 0x140A67FDC (FsRtlInitializeWorkerThread.c)
 *     FsRtlGetCompatibilityModeValue @ 0x140A680C0 (FsRtlGetCompatibilityModeValue.c)
 *     FsRtlInitializeLargeMcbs @ 0x140A681E8 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140A68284 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140A6841C (FsRtlInitializeTunnels.c)
 */

char FsRtlInitSystem()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  FsRtlPagingIoResources = (__int64)ExAllocatePoolWithTag((POOL_TYPE)528, 0x680uLL, 0x74725346u);
  v0 = 16LL;
  v1 = 0LL;
  do
  {
    ExInitializeResourceLite((PERESOURCE)(v1 + FsRtlPagingIoResources));
    v1 += 104LL;
    --v0;
  }
  while ( v0 );
  FsRtlInitializeTunnels();
  FsRtlInitializeFileLocks();
  FsRtlInitializeLargeMcbs();
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&FsRtlEcpListLookaside, 0LL, 0LL, 0, 0x18uLL, 0x6C655346u, 0);
  FsRtlpUncSemaphore.Header.Type = 5;
  FsRtlpUncSemaphore.Header.WaitListHead.Blink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.WaitListHead.Flink = &FsRtlpUncSemaphore.Header.WaitListHead;
  FsRtlpUncSemaphore.Header.Size = 8;
  ValueName.Buffer = L"Win95TruncatedExtensions";
  FsRtlpUncSemaphore.Header.SignalState = 1;
  FsRtlpUncSemaphore.Limit = 0x7FFFFFFF;
  *(_DWORD *)&ValueName.Length = 3276848;
  FsRtlGetCompatibilityModeValue(&ValueName);
  if ( (int)FsRtlInitializeWorkerThread() < 0 || (int)FsFilterInit() < 0 || (int)FsRtlInitializeSmssEvent() < 0 )
    return 0;
  FsRtlInitializeTieringHeat();
  return 1;
}
