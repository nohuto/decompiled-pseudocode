/*
 * XREFs of MiZeroAllPageFiles @ 0x1409AC2A0
 * Callers:
 *     MiShutdownSystem @ 0x1409AC0E8 (MiShutdownSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiZeroPageFile @ 0x140527C30 (MiZeroPageFile.c)
 */

__int64 MiZeroAllPageFiles()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rbp
  ULONG v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG v6; // esi
  __int64 v7; // r15
  struct _KEVENT *v8; // rbp
  struct _WORK_QUEUE_ITEM *Pool; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  memset(Object, 0, 0x80uLL);
  VfZeroAllPagesRunning = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51090, 0LL);
  v1 = qword_140C50D20;
  v2 = Count;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51090, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C51090);
  KeAbPostRelease((ULONG_PTR)&qword_140C51090);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
  if ( v1 && v2 )
  {
    KeWaitForSingleObject(&unk_140C50F78, WrKernel, 0, 0, 0LL);
    v6 = v2;
    do
    {
      v7 = v6 - 1;
      v8 = (struct _KEVENT *)&Object[3 * v7 + 16];
      KeInitializeEvent(v8, NotificationEvent, 0);
      Object[v7] = v8;
      if ( (*(_BYTE *)(*(&MiSystemPartition + v7 + 868) + 204) & 0x40) != 0
        || (Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x30uLL, 0x775A6D4Du)) == 0LL )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v7 + 16], 0, 0);
      }
      else
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)*(&MiSystemPartition + v7 + 868);
        Pool[1].List.Blink = (struct _LIST_ENTRY *)v8;
        if ( v6 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v7 + 16], 0, 0);
          MiZeroPageFile(Pool);
        }
        else
        {
          Pool->List.Flink = 0LL;
          Pool->WorkerRoutine = (void (__fastcall *)(void *))MiZeroPageFile;
          Pool->Parameter = Pool;
          ExQueueWorkItem(Pool, CriticalWorkQueue);
        }
      }
      --v6;
    }
    while ( (_DWORD)v7 );
    if ( v2 > 1 )
      KeWaitForMultipleObjects(v2, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  }
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
