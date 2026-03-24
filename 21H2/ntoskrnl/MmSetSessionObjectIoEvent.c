/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x14078D904
 * Callers:
 *     IopSessionChangeWorker @ 0x1403A6820 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 1024LL), 0, 0);
}
