/*
 * XREFs of _RtlInitializeSRWLock@4 @ 0x4B2E4D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeSRWLock(PRTL_SRWLOCK SRWLock)
{
  SRWLock->Value = 0;
}
