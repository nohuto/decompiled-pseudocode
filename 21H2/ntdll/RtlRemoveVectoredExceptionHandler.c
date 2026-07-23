/*
 * XREFs of RtlRemoveVectoredExceptionHandler @ 0x180082890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredExceptionHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler(Handle, 0LL);
}
