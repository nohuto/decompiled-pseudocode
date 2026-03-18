/*
 * XREFs of ExpRemoveHandleTable @ 0x1406318A8
 * Callers:
 *     ObInitProcess @ 0x1406301EC (ObInitProcess.c)
 *     ObKillProcess @ 0x140632108 (ObKillProcess.c)
 *     RtlDestroyAtomTable @ 0x14068CEA0 (RtlDestroyAtomTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408C5610 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
  v3 = (_QWORD *)(a1 + 24);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v3[1] = v3;
  *v3 = v3;
  return result;
}
