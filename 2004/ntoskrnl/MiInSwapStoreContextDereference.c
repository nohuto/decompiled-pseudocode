/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1406D07F8
 * Callers:
 *     MiInSwapStore @ 0x1406D0668 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406D0750 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
