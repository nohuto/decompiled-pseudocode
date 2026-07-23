/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406BEBC8
 * Callers:
 *     MiInSwapStore @ 0x1406BEA2C (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406BEB20 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
