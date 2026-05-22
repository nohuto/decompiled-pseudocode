/*
 * XREFs of ?_Destroy@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAXPEAUContextualProcessorEntry@ContextualProcessorManager@@0@Z @ 0x180048E94
 * Callers:
 *     _std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch$33 @ 0x180048C8F (_std--vector_ContextualProcessorManager--ContextualProcessorEntry_std--allocator_ContextualProce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Destroy(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  return std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(a2, a3);
}
