/*
 * XREFs of RtlDllShutdownInProgress @ 0x180064930
 * Callers:
 *     RtlResetNtUserPfn @ 0x18008C7B0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_18016C508 != 0;
}
