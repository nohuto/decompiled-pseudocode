/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x1402677F0
 * Callers:
 *     NtCreateWorkerFactory @ 0x14060D350 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
