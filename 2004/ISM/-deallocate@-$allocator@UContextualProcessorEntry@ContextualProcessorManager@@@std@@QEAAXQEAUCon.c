/*
 * XREFs of ?deallocate@?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@QEAAXQEAUContextualProcessorEntry@ContextualProcessorManager@@_K@Z @ 0x180048EF8
 * Callers:
 *     _std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch$33 @ 0x180048CDF (_std--vector_ContextualProcessorManager--ContextualProcessorEntry_std--allocator_ContextualProce.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<ContextualProcessorManager::ContextualProcessorEntry>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(16 * a3));
}
