/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x14035B5F8
 * Callers:
 *     NtCreateWorkerFactory @ 0x1407D5050 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
