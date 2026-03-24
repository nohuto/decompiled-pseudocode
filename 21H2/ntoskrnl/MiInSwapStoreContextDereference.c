/*
 * XREFs of MiInSwapStoreContextDereference @ 0x140710578
 * Callers:
 *     MiInSwapStore @ 0x1407103DC (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1407104D0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
