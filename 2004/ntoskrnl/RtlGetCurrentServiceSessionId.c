/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x1403A33F0
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x140631DF4 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
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
  return *v1[140];
}
