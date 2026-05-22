/*
 * XREFs of ?clear@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXXZ @ 0x18014E050
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B760 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@0AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18014A2EC (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

ContextualProcessorBuffer::InputSample *__fastcall std::vector<ContextualProcessorBuffer::InputSample>::clear(
        ContextualProcessorBuffer::InputSample **a1)
{
  ContextualProcessorBuffer::InputSample *result; // rax

  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(*a1, a1[1]);
  result = *a1;
  a1[1] = *a1;
  return result;
}
