/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x18014B1EC
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::dtor$20 @ 0x18004F760 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator_ContextualPro.c)
 *     _std::_Uninitialized_move_ContextualProcessorBuffer::ContextualProcessorMetadata___ContextualProcessorBuffer::ContextualProcessorMetadata___std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata____::_1_::dtor$0 @ 0x18014AB86 (_std--_Uninitialized_move_ContextualProcessorBuffer--ContextualProcessorMetadata___ContextualPro.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<ContextualProcessorBuffer::ContextualProcessorMetadata *>::~_Uninitialized_backout_al<ContextualProcessorBuffer::ContextualProcessorMetadata *>(
        ContextualProcessorBuffer::ContextualProcessorMetadata **a1)
{
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(*a1, a1[1]);
}
