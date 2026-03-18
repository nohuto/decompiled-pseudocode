/*
 * XREFs of PpmCheckResumePpmEngineFromSx @ 0x14038A218
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 */

LONG PpmCheckResumePpmEngineFromSx()
{
  if ( PpmHeteroHgsEnabled )
  {
    __writemsr(0x17D0u, (*(_QWORD *)(PpmHeteroHgsTableMdl + 48) << 12) | 1LL);
    __writemsr(0x17D1u, 1uLL);
  }
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
