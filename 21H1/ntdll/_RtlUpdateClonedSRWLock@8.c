/*
 * XREFs of _RtlUpdateClonedSRWLock@8 @ 0x4B34A490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlUpdateClonedSRWLock(PRTL_SRWLOCK SRWLock, LOGICAL Shared)
{
  SRWLock->Value = Shared != 0 ? 17 : 1;
}
