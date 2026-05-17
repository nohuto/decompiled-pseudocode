/*
 * XREFs of RtlReleasePebLock @ 0x180077420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlReleasePebLock(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock, a2, a3);
}
