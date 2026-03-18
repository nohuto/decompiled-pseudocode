/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x1402C0820
 * Callers:
 *     NtCreateWorkerFactory @ 0x1406424A0 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
