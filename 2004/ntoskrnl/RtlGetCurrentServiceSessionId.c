/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1403A33F0
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x140631DF4 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 ThreadServerSilo; // rax
  unsigned int **v1; // rax

  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  if ( ThreadServerSilo )
    v1 = *(unsigned int ***)(ThreadServerSilo + 1272);
  else
    v1 = (unsigned int **)&PspHostSiloGlobals;
  return *v1[140];
}
