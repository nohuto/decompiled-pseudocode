/*
 * XREFs of ExpRemoveHandleTable @ 0x14065C8E8
 * Callers:
 *     ObInitProcess @ 0x140617FD0 (ObInitProcess.c)
 *     ObKillProcess @ 0x14065E678 (ObKillProcess.c)
 *     RtlDestroyAtomTable @ 0x1406F1B30 (RtlDestroyAtomTable.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408BF860 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
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
