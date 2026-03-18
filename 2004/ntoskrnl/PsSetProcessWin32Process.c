/*
 * XREFs of PsSetProcessWin32Process @ 0x1406F9CB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsSetProcessWin32Process(_QWORD *Object, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v4; // edi
  volatile signed __int64 *v8; // rbp
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v11; // r14

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = Object + 135;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 135), 0LL);
  if ( a2 )
  {
    if ( (*((_DWORD *)Object + 281) & 8) != 0 || Object[161] )
    {
      v4 = -1073741558;
    }
    else
    {
      Object[161] = a2;
      if ( ((Object[302] | (Object[302] >> 30)) & 0x3FFFFFFFLL) != 0 )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x65446954u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          ObfReferenceObjectWithTag(Object, 0x624A7350u);
          v11[1].List.Flink = (struct _LIST_ENTRY *)Object;
          v11->WorkerRoutine = (void (__fastcall *)(void *))PspTimerDelayWorkerRoutine;
          v11->Parameter = v11;
          v11->List.Flink = 0LL;
          ExQueueWorkItem(v11, NormalWorkQueue);
        }
      }
    }
  }
  else if ( Object[161] == a3 )
  {
    Object[161] = 0LL;
  }
  else
  {
    v4 = -1073741823;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
