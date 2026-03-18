/*
 * XREFs of MmSetSessionObjectIoEvent @ 0x1406A958C
 * Callers:
 *     IopSessionChangeWorker @ 0x140232710 (IopSessionChangeWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall MmSetSessionObjectIoEvent(__int64 a1)
{
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 856LL), 0, 0);
}
