/*
 * XREFs of KeCleanupThreadState @ 0x140275C38
 * Callers:
 *     PspThreadDelete @ 0x140683580 (PspThreadDelete.c)
 * Callees:
 *     KiAbCleanupThreadState @ 0x140275C98 (KiAbCleanupThreadState.c)
 *     KeFlushQueuedDpcs @ 0x14029DA30 (KeFlushQueuedDpcs.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR a1)
{
  KiAbCleanupThreadState(a1);
  if ( *(_WORD *)(a1 + 868) )
    KeFlushQueuedDpcs();
}
