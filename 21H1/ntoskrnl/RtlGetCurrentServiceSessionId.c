/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1403A2C60
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x140678680 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14090FED8 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  __int64 ThreadServerSilo; // rax
  _DWORD **v1; // rax

  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  if ( ThreadServerSilo )
    v1 = *(_DWORD ***)(ThreadServerSilo + 1272);
  else
    v1 = (_DWORD **)&PspHostSiloGlobals;
  return *v1[139];
}
