/*
 * XREFs of RtlDllShutdownInProgress @ 0x180063440
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008C1B0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

bool RtlDllShutdownInProgress()
{
  return byte_18016C508 != 0;
}
