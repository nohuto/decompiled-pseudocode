/*
 * XREFs of _RtlAcquirePebLock@0 @ 0x4B2EA840
 * Callers:
 *     <none>
 * Callees:
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 */

int __stdcall RtlAcquirePebLock()
{
  return RtlEnterCriticalSection((int)NtCurrentPeb()->FastPebLock);
}
