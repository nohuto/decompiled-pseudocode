/*
 * XREFs of RtlRemoveVectoredContinueHandler @ 0x1800D99E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlRemoveVectoredContinueHandler(PVOID Handle)
{
  return RtlpRemoveVectoredHandler((void **)Handle, 1u);
}
