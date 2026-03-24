/*
 * XREFs of KeCleanupThreadState @ 0x1402546C8
 * Callers:
 *     PspThreadDelete @ 0x140619920 (PspThreadDelete.c)
 * Callees:
 *     KiAbCleanupThreadState @ 0x140254728 (KiAbCleanupThreadState.c)
 *     KeFlushQueuedDpcs @ 0x1402EC6E0 (KeFlushQueuedDpcs.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR a1)
{
  KiAbCleanupThreadState(a1);
  if ( *(_WORD *)(a1 + 868) )
    KeFlushQueuedDpcs();
}
