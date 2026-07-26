/*
 * XREFs of NdisInterlockedAddUlong @ 0x1C00BE130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __fastcall NdisInterlockedAddUlong(ULONG *a1, ULONG a2, KSPIN_LOCK *a3)
{
  return ExInterlockedAddUlong(a1, a2, a3);
}
