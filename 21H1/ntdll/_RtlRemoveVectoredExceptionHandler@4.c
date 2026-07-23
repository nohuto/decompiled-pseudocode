/*
 * XREFs of _RtlRemoveVectoredExceptionHandler@4 @ 0x4B2AB220
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpRemoveVectoredHandler@8 @ 0x4B2AB233 (_RtlpRemoveVectoredHandler@8.c)
 */

ULONG __cdecl RtlRemoveVectoredExceptionHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler(Handle, 0);
}
