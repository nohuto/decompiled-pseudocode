/*
 * XREFs of RtlReleasePebLock @ 0x180077420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlReleasePebLock(void)
{
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
