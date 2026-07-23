/*
 * XREFs of _RtlRemoveVectoredContinueHandler@4 @ 0x4B3383F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRemoveVectoredHandler@8 @ 0x4B2AB233 (_RtlpRemoveVectoredHandler@8.c)
 */

ULONG __cdecl RtlRemoveVectoredContinueHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler((void **)Handle, 1);
}
