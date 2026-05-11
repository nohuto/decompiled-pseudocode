/*
 * XREFs of ?staticIoQueueThread@CSidebandDevice@@SAXPEAX@Z @ 0x1C000E0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x1C000DD14 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 */

void __fastcall CSidebandDevice::staticIoQueueThread(struct _LIST_ENTRY *StartContext, __int64 a2)
{
  CSidebandDevice::IoQueueThread(StartContext, a2);
}
