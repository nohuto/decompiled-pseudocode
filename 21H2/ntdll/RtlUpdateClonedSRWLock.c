/*
 * XREFs of RtlUpdateClonedSRWLock @ 0x18009CD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlUpdateClonedSRWLock(PRTL_SRWLOCK SRWLock, LOGICAL Shared)
{
  SRWLock->Value = Shared != 0 ? 17LL : 1LL;
}
