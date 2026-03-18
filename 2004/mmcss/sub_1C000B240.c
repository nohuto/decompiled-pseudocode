/*
 * XREFs of sub_1C000B240 @ 0x1C000B240
 * Callers:
 *     sub_1C000AA60 @ 0x1C000AA60 (sub_1C000AA60.c)
 *     sub_1C000B820 @ 0x1C000B820 (sub_1C000B820.c)
 * Callees:
 *     <none>
 */

void sub_1C000B240()
{
  if ( Handle )
  {
    if ( !byte_1C0007249 )
    {
      byte_1C0007249 = 1;
      IoQueueWorkItem(IoWorkItem, (PIO_WORKITEM_ROUTINE)WorkerRoutine, NormalWorkQueue, 0LL);
    }
  }
}
