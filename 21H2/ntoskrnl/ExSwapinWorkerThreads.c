/*
 * XREFs of ExSwapinWorkerThreads @ 0x1407FFFE4
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PopUnlockAfterSleepWorker @ 0x140A4E3A0 (PopUnlockAfterSleepWorker.c)
 *     ExShutdownSystem @ 0x140A6C7A8 (ExShutdownSystem.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x14024EC10 (KeRemoveQueueApc.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     KeSetKernelStackSwapEnable @ 0x1402F8AA0 (KeSetKernelStackSwapEnable.c)
 *     PsGetNextPartitionUnsafe @ 0x140363D98 (PsGetNextPartitionUnsafe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
 *     PsReferencePartitionSystemProcess @ 0x140800160 (PsReferencePartitionSystemProcess.c)
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
  PVOID Object; // [rsp+E8h] [rbp+6Fh] BYREF
  LARGE_INTEGER Timeout; // [rsp+F0h] [rbp+77h] BYREF

  Enable = a1;
  memset(v10, 0, 0x58uLL);
  Object = 0LL;
  Timeout.QuadPart = -100000000LL;
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
    if ( (int)PsReferencePartitionSystemProcess(NextPartitionUnsafe, &Object) >= 0 )
    {
      for ( j = 0LL; ; j = v7 )
      {
        NextProcessThread = (struct _KTHREAD *)PsGetNextProcessThread((__int64)Object, j);
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
            if ( KeInsertQueueApc((__int64)v10, (__int64)&Event, 0LL, 3)
              && KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258
              && !KeRemoveQueueApc((__int64)v10) )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            }
          }
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  KeReleaseGuardedMutex(&ExpWorkerSwapinMutex);
}
