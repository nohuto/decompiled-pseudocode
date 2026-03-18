/*
 * XREFs of KeAbCrossThreadDeleteDpcRoutine @ 0x14051F860
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAbMarkCrossThreadReleasable @ 0x14038F4E4 (KeAbMarkCrossThreadReleasable.c)
 */

LONG __fastcall KeAbCrossThreadDeleteDpcRoutine(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a2 + 32);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a2 + 40) )
    KeAbMarkCrossThreadReleasable(v3, *(_KLOCK_ENTRY **)(a2 + 32));
  else
    *(_BYTE *)(v3 + 32) |= 1u;
  return KeSetEvent((PRKEVENT)a2, 0, 0);
}
