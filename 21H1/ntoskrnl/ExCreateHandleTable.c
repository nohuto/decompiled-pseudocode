/*
 * XREFs of ExCreateHandleTable @ 0x14069F7F8
 * Callers:
 *     ObInitProcess @ 0x14066F6F0 (ObInitProcess.c)
 *     ExDupHandleTable @ 0x140671090 (ExDupHandleTable.c)
 *     RtlpInitializeHandleTableForAtomTable @ 0x14069F7CC (RtlpInitializeHandleTableForAtomTable.c)
 *     AlpcpInitSystem @ 0x1407B838C (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408BE510 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A3AAB4 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140A6E1FC (PspInitializeJobStructures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTable @ 0x140671618 (ExpAllocateHandleTable.c)
 */

_QWORD *__fastcall ExCreateHandleTable(ULONG_PTR a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

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
      v7 = (_QWORD *)qword_140D2DB80;
      if ( *(__int64 **)qword_140D2DB80 != &HandleTableListHead )
        __fastfail(3u);
      *v6 = &HandleTableListHead;
      v6[1] = v7;
      *v7 = v6;
      qword_140D2DB80 = (__int64)v6;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&HandleTableListLock, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock(&HandleTableListLock);
      KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
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
