/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18014AD40
 * Callers:
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::InputSample___ContextualProcessorBuffer::InputSample___std::allocator_ContextualProcessorBuffer::InputSample____::_1_::dtor$0 @ 0x18014A79D (_std--_Uninitialized_move_ContextualProcessorBuffer--InputSample___ContextualProcessorBuffer--In.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<ContextualProcessorBuffer::InputSample *>::~_Uninitialized_backout_al<ContextualProcessorBuffer::InputSample *>(
        ContextualProcessorBuffer::InputSample **a1)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(*a1, a1[1]);
}
