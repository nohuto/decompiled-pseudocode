/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14078DAC4
 * Callers:
 *     IopSessionChangeWorker @ 0x1403A6970 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 1024LL), 0, 0);
}
