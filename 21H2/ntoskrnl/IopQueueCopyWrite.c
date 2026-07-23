/*
 * XREFs of IopQueueCopyWrite @ 0x1403F1B60
 * Callers:
 *     <none>
 * Callees:
 *     IopSynchronousServiceTail @ 0x140716160 (IopSynchronousServiceTail.c)
 */

__int64 __fastcall IopQueueCopyWrite(__int64 a1)
{
  return IopSynchronousServiceTail(*(PDEVICE_OBJECT *)(a1 + 8), *(PIRP *)a1, 0, 0, 1);
}
