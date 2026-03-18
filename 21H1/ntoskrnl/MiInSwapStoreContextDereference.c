/*
 * XREFs of MiInSwapStoreContextDereference @ 0x140656198
 * Callers:
 *     MiInSwapStore @ 0x140656008 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1406560F0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
