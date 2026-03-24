/*
 * XREFs of ExCreateHandleTable @ 0x14062B4B8
 * Callers:
 *     ExDupHandleTable @ 0x140606160 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x140607644 (ObInitProcess.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x14062CF58 (RtlpInitializeHandleTableForAtomTable.c)
 *     AlpcpInitSystem @ 0x1407CE04C (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408C2DD0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A3E538 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140A72054 (PspInitializeJobStructures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAllocateHandleTable @ 0x14062AF9C (ExpAllocateHandleTable.c)
 */

_QWORD *__fastcall ExCreateHandleTable(struct _KPROCESS *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  char v8; // si

  CurrentThread = KeGetCurrentThread();
  result = ExpAllocateHandleTable(a1, 1);
  v5 = result;
  if ( result )
  {
    v6 = result + 3;
    if ( a2 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&HandleTableListLock, 0LL);
      v7 = (_QWORD *)qword_140D2EB48;
      if ( *(__int64 **)qword_140D2EB48 != &HandleTableListHead )
        __fastfail(3u);
      *v6 = &HandleTableListHead;
      v6[1] = v7;
      *v7 = v6;
      qword_140D2EB48 = (__int64)v6;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock(&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return v5;
    }
    else
    {
      result[4] = result + 3;
      *v6 = v6;
    }
  }
  return result;
}
