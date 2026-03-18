/*
 * XREFs of CiThreadCleanup @ 0x1C000B570
 * Callers:
 *     CiThreadNotification @ 0x1C0001060 (CiThreadNotification.c)
 *     CiThreadCreate @ 0x1C000A800 (CiThreadCreate.c)
 *     CiDispatchCleanup @ 0x1C000B500 (CiDispatchCleanup.c)
 * Callees:
 *     CiDecrementTotalThreadCount @ 0x1C0001B50 (CiDecrementTotalThreadCount.c)
 *     CiTaskIndexDereference @ 0x1C0001B60 (CiTaskIndexDereference.c)
 *     CiSchedulerRemoveThread @ 0x1C0001BF0 (CiSchedulerRemoveThread.c)
 *     CiThreadRemoveFromTree @ 0x1C0001CC0 (CiThreadRemoveFromTree.c)
 *     CiLogThreadLeave @ 0x1C0004254 (CiLogThreadLeave.c)
 *     CiProcessDereference @ 0x1C000B720 (CiProcessDereference.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B820 (CiThreadDecrementScheduledCount.c)
 *     CiProcessRemoveThread @ 0x1C000B890 (CiProcessRemoveThread.c)
 */

void __fastcall CiThreadCleanup(__int64 a1)
{
  bool v2; // zf
  volatile signed __int64 *v3; // rbp
  volatile signed __int32 *v4; // rsi
  struct _KTHREAD *v5; // rdi
  char v6; // al
  __int64 ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(_BYTE *)(a1 + 148) & 2) == 0;
  v3 = 0LL;
  ThreadInformation = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
    *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
    v6 = *(_BYTE *)(a1 + 148);
    if ( (v6 & 2) == 0 )
    {
      v4 = *(volatile signed __int32 **)(a1 + 128);
      v3 = *(volatile signed __int64 **)(a1 + 72);
      *(_BYTE *)(a1 + 148) = v6 | 2;
      CiDecrementTotalThreadCount(v4 + 23);
      v5 = *(struct _KTHREAD **)(a1 + 96);
      if ( v5 )
      {
        CiThreadRemoveFromTree(a1);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 64) + 3LL) & 1) != 0 )
          CiSchedulerRemoveThread(a1);
        CiProcessRemoveThread(a1);
        if ( (*(_BYTE *)(a1 + 148) & 1) == 0 )
          CiThreadDecrementScheduledCount(a1);
        KeSetBasePriorityThread(v5, *(_DWORD *)(a1 + 144));
        KeSetPriorityThread(v5, *(_DWORD *)(a1 + 108));
        ThreadInformation = *(_QWORD *)(a1 + 136);
        if ( v5 == KeGetCurrentThread() )
          ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAffinityMask, &ThreadInformation, 8u);
        if ( byte_1C0007358 )
          CiLogThreadLeave(a1);
      }
      CiDecrementTotalThreadCount(&CiTotalThreads);
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( v4 )
      CiProcessDereference((PVOID)v4);
    if ( v3 )
      CiTaskIndexDereference(v3);
  }
}
