/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_3 @ 0x1800D66F0
 * Callers:
 *     sub_1800D642C @ 0x1800D642C (sub_1800D642C.c)
 *     sub_1800DA55C @ 0x1800DA55C (sub_1800DA55C.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
