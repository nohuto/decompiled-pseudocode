/*
 * XREFs of RtlDllShutdownInProgress @ 0x180063330
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008C0B0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

bool RtlDllShutdownInProgress()
{
  return byte_18016A508 != 0;
}
