/*
 * XREFs of _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&__::_1_::catch$213 @ 0x18004FE30
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18014A250 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 *     ?deallocate@?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@QEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K@Z @ 0x18014E01C (-deallocate@-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@QEAAXQEAUC.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const____::_1_::catch_213(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(*(ContextualProcessorBuffer::ContextualProcessorMetadata **)(a2 + 264));
  std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>::deallocate(
    v3,
    *(_QWORD *)(a2 + 280),
    *(_QWORD *)(a2 + 256));
  throw;
}
