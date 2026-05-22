/*
 * XREFs of _std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch$33 @ 0x180048CDF
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAXPEAUContextualProcessorEntry@ContextualProcessorManager@@0@Z @ 0x180048EE4 (-_Destroy@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UContextua.c)
 *     ?deallocate@?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@QEAAXQEAUContextualProcessorEntry@ContextualProcessorManager@@_K@Z @ 0x180048EF8 (-deallocate@-$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@QEAAXQEAUCon.c)
 */

void __fastcall __noreturn std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch_33(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<ContextualProcessorManager::ContextualProcessorEntry>::_Destroy(a1, a2[15], a2[14]);
  std::allocator<ContextualProcessorManager::ContextualProcessorEntry>::deallocate(v3, a2[4], a2[17]);
  throw;
}
