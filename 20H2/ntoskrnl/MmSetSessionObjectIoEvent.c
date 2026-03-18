/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x140789B24
 * Callers:
 *     IopSessionChangeWorker @ 0x1403A5F60 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 1024LL), 0, 0);
}
