/*
 * XREFs of ExSwapinWorkerThreads @ 0x1407734E4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140999090 (PopUnlockAfterSleepWorker.c)
 *     ExShutdownSystem @ 0x1409B5C58 (ExShutdownSystem.c)
 * Callees:
 *     KeSetKernelStackSwapEnable @ 0x14020AC60 (KeSetKernelStackSwapEnable.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     PsGetNextPartitionUnsafe @ 0x14033B998 (PsGetNextPartitionUnsafe.c)
 *     memset @ 0x140411300 (memset.c)
 *     PsGetNextProcessThread @ 0x14069A900 (PsGetNextProcessThread.c)
 *     PsReferencePartitionSystemProcess @ 0x140773648 (PsReferencePartitionSystemProcess.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *i; // rcx
  _UNKNOWN **NextPartitionUnsafe; // rax
  _QWORD *v4; // rdi
  struct _KTHREAD *j; // rdx
  struct _KTHREAD *NextProcessThread; // rax
  struct _KTHREAD *v7; // rbx
  signed __int32 v8[8]; // [rsp+0h] [rbp-79h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v10[112]; // [rsp+60h] [rbp-19h] BYREF
  BOOLEAN Enable; // [rsp+E0h] [rbp+67h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+E8h] [rbp+6Fh] BYREF

  Enable = a1;
  memset(v10, 0, 0x58uLL);
  DmaAdapter = 0LL;
  memset(&Event, 0, sizeof(Event));
  CurrentThread = KeGetCurrentThread();
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  ExAcquireFastMutex(&ExpWorkerSwapinMutex);
  ExpWorkersCanSwap = Enable;
  _InterlockedOr(v8, 0);
  for ( i = 0LL; ; i = v4 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(i);
    v4 = NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (int)PsReferencePartitionSystemProcess(NextPartitionUnsafe, &DmaAdapter) >= 0 )
    {
      for ( j = 0LL; ; j = v7 )
      {
        NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)DmaAdapter, j);
        v7 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        if ( (*((_DWORD *)&NextProcessThread[1].SwapListEntry + 3) & 1) != 0 )
        {
          if ( NextProcessThread == CurrentThread )
          {
            KeSetKernelStackSwapEnable(Enable);
          }
          else
          {
            KeInitializeApc(
              (__int64)v10,
              (__int64)NextProcessThread,
              0,
              (__int64)ExpSetSwappingKernelApc,
              0LL,
              0LL,
              0,
              (__int64)&Enable);
            if ( KeInsertQueueApc((__int64)v10, (__int64)&Event, 0LL, 3u) )
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          }
        }
      }
      HalPutDmaAdapter(DmaAdapter);
    }
  }
  KeReleaseGuardedMutex(&ExpWorkerSwapinMutex);
}
