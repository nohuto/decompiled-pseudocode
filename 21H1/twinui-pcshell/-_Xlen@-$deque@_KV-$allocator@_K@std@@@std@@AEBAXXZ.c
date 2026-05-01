/*
 * XREFs of ?_Xlen@?$deque@_KV?$allocator@_K@std@@@std@@AEBAXXZ @ 0x1800BB190
 * Callers:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800BAD14 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ?_Growmap@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1800C022C (-_Growmap@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn std::deque<unsigned __int64>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
