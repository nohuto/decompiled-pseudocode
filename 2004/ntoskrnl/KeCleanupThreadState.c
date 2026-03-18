/*
 * XREFs of KeCleanupThreadState @ 0x1402D2310
 * Callers:
 *     PspThreadDelete @ 0x14069AB30 (PspThreadDelete.c)
 * Callees:
 *     KiAbCleanupThreadState @ 0x1402D2370 (KiAbCleanupThreadState.c)
 *     KeFlushQueuedDpcs @ 0x1402E16C0 (KeFlushQueuedDpcs.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR a1)
{
  KiAbCleanupThreadState(a1);
  if ( *(_WORD *)(a1 + 868) )
    KeFlushQueuedDpcs();
}
