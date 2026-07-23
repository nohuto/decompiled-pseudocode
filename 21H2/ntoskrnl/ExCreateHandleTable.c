/*
 * XREFs of ExCreateHandleTable @ 0x140622DE8
 * Callers:
 *     RtlpInitializeHandleTableForAtomTable @ 0x140622DBC (RtlpInitializeHandleTableForAtomTable.c)
 *     ExDupHandleTable @ 0x140695BF0 (ExDupHandleTable.c)
 *     ObInitProcess @ 0x1406970D4 (ObInitProcess.c)
 *     AlpcpInitSystem @ 0x1407CE1BC (AlpcpInitSystem.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1408C2F30 (AlpcpAllocateMessageFromExtendedTables.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     ObInitSystem @ 0x140A3F538 (ObInitSystem.c)
 *     PspInitializeJobStructures @ 0x140A73054 (PspInitializeJobStructures.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAllocateHandleTable @ 0x14069577C (ExpAllocateHandleTable.c)
 */

__int64 __fastcall ExCreateHandleTable(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  char v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  LOBYTE(a2) = 1;
  result = ExpAllocateHandleTable(a1, a2);
  v5 = result;
  if ( result )
  {
    v6 = (_QWORD *)(result + 24);
    if ( v3 )
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
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v9, v10, v11);
      return v5;
    }
    else
    {
      *(_QWORD *)(result + 32) = result + 24;
      *v6 = v6;
    }
  }
  return result;
}
