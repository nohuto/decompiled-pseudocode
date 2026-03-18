/*
 * XREFs of KeCleanupThreadState @ 0x14023F478
 * Callers:
 *     PspThreadDelete @ 0x1405F1620 (PspThreadDelete.c)
 * Callees:
 *     KiAbCleanupThreadState @ 0x14023F4D8 (KiAbCleanupThreadState.c)
 *     KeFlushQueuedDpcs @ 0x1403267C0 (KeFlushQueuedDpcs.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR a1)
{
  KiAbCleanupThreadState(a1);
  if ( *(_WORD *)(a1 + 868) )
    KeFlushQueuedDpcs();
}
