/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406F0E58
 * Callers:
 *     MiInSwapStore @ 0x1406F0CBC (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406F0DB0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
