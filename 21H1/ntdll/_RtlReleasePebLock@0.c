/*
 * XREFs of _RtlReleasePebLock@0 @ 0x4B2E9F50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 */

int __stdcall RtlReleasePebLock()
{
  return RtlLeaveCriticalSection((int)NtCurrentPeb()->FastPebLock);
}
