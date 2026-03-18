/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14077B524
 * Callers:
 *     IopSessionChangeWorker @ 0x1403A3B90 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 1024LL), 0, 0);
}
