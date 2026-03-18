/*
 * XREFs of ?Delete@CInputQueueProp@@UAEXXZ @ 0xD0840
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateInputQueues@CInputQueueProp@@IAEXXZ @ 0xD0854 (-InvalidateInputQueues@CInputQueueProp@@IAEXXZ.c)
 */

void __thiscall CInputQueueProp::Delete(CInputQueueProp *this)
{
  CInputQueueProp::InvalidateInputQueues(this);
  Win32FreePool(this);
}
