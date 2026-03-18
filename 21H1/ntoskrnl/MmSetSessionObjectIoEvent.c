/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x140779114
 * Callers:
 *     IopSessionChangeWorker @ 0x1403A3430 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 1024LL), 0, 0);
}
