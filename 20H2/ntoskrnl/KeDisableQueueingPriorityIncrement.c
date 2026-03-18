/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x140356960
 * Callers:
 *     NtCreateWorkerFactory @ 0x140709330 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
