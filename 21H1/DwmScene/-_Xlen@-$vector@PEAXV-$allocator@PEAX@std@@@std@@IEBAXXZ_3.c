/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_3 @ 0x1800D0E20
 * Callers:
 *     sub_1800D0B5C @ 0x1800D0B5C (sub_1800D0B5C.c)
 *     sub_1800D4C8C @ 0x1800D4C8C (sub_1800D4C8C.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
