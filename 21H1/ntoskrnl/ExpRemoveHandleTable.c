/*
 * XREFs of ExpRemoveHandleTable @ 0x1405D6158
 * Callers:
 *     RtlDestroyAtomTable @ 0x1405D5B30 (RtlDestroyAtomTable.c)
 *     ObKillProcess @ 0x1405D8378 (ObKillProcess.c)
 *     ObInitProcess @ 0x14066F6F0 (ObInitProcess.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408BE510 (AlpcpAllocateMessageFromExtendedTables.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall ExpRemoveHandleTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
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
    ExfTryToWakePushLock(&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  v3[1] = v3;
  *v3 = v3;
  return result;
}
