/*
 * XREFs of MiZeroAllPageFiles @ 0x1409AFF70
 * Callers:
 *     MiShutdownSystem @ 0x1409AFDB8 (MiShutdownSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiZeroPageFile @ 0x14052D750 (MiZeroPageFile.c)
 */

__int64 MiZeroAllPageFiles()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rbp
  ULONG v2; // edi
  ULONG v3; // esi
  __int64 v4; // r15
  struct _KEVENT *v5; // rbp
  struct _WORK_QUEUE_ITEM *Pool; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  memset(Object, 0, 0x80uLL);
  VfZeroAllPagesRunning = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51190, 0LL);
  v1 = qword_140C50E20;
  v2 = Count;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51190, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C51190);
  KeAbPostRelease((ULONG_PTR)&qword_140C51190);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v1 && v2 )
  {
    KeWaitForSingleObject(&unk_140C51078, WrKernel, 0, 0, 0LL);
    v3 = v2;
    do
    {
      v4 = v3 - 1;
      v5 = (struct _KEVENT *)&Object[3 * v4 + 16];
      KeInitializeEvent(v5, NotificationEvent, 0);
      Object[v4] = v5;
      if ( (*(_BYTE *)(*(&MiSystemPartition + v4 + 868) + 204) & 0x40) != 0
        || (Pool = (struct _WORK_QUEUE_ITEM *)MiAllocatePool(64, 0x30uLL, 0x775A6D4Du)) == 0LL )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v4 + 16], 0, 0);
      }
      else
      {
        Pool[1].List.Flink = (struct _LIST_ENTRY *)*(&MiSystemPartition + v4 + 868);
        Pool[1].List.Blink = (struct _LIST_ENTRY *)v5;
        if ( v3 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v4 + 16], 0, 0);
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
      --v3;
    }
    while ( (_DWORD)v4 );
    if ( v2 > 1 )
      KeWaitForMultipleObjects(v2, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  }
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
