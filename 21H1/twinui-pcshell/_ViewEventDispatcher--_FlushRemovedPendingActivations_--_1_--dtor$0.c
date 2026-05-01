/*
 * XREFs of _ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor$0 @ 0x18028A353
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>::~CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>((void **)(a2 + 64));
}
