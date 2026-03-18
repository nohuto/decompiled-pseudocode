/*
 * XREFs of KeCleanupThreadState @ 0x140264CF8
 * Callers:
 *     PspThreadDelete @ 0x140666EA0 (PspThreadDelete.c)
 * Callees:
 *     KiAbCleanupThreadState @ 0x140264D58 (KiAbCleanupThreadState.c)
 *     KeFlushQueuedDpcs @ 0x14030D5C0 (KeFlushQueuedDpcs.c)
 */

void __fastcall KeCleanupThreadState(ULONG_PTR a1)
{
  KiAbCleanupThreadState(a1);
  if ( *(_WORD *)(a1 + 868) )
    KeFlushQueuedDpcs();
}
