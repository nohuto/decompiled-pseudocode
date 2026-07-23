/*
 * XREFs of ExAllocatePrivateWorkerPool @ 0x1407C2784
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 * Callees:
 *     ExpPartitionCreatePool @ 0x1407C27A8 (ExpPartitionCreatePool.c)
 */

__int64 __fastcall ExAllocatePrivateWorkerPool(__int64 a1, __int64 a2, __int64 a3)
{
  return ExpPartitionCreatePool(*((_QWORD *)PspSystemPartition + 2), a2, a3, a1);
}
