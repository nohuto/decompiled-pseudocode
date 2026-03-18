/*
 * XREFs of KiReleaseKobjectLock @ 0x1402FB220
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KiReleaseKobjectLock(volatile signed __int32 *a1)
{
  _InterlockedAnd(a1, 0xFFFFFF7F);
}
