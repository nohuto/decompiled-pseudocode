/*
 * XREFs of KiReleaseKobjectLock @ 0x140212970
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseKobjectLock(volatile signed __int32 *a1)
{
  _InterlockedAnd(a1, 0xFFFFFF7F);
}
