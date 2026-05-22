/*
 * XREFs of ?deallocate@?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@QEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K@Z @ 0x18014E07C
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::catch$213 @ 0x18004F840 (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator__ea_18004F840.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(160 * a3));
}
