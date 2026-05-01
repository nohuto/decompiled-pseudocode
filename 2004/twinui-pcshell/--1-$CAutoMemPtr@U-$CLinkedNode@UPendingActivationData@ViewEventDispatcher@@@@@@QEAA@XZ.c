/*
 * XREFs of ??1?$CAutoMemPtr@U?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@@QEAA@XZ @ 0x1802A0754
 * Callers:
 *     _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$0 @ 0x1802A5329 (_ViewEventDispatcher--QueuePendingActivation_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor$0 @ 0x1802ABF93 (_ViewEventDispatcher--_FlushRemovedPendingActivations_--_1_--dtor$0.c)
 * Callees:
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x1802A1AD8 (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 */

void *__fastcall CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>::~CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (void *)CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(result);
  return result;
}
