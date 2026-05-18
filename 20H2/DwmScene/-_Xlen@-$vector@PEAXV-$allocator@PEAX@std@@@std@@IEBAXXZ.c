/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180010AE4
 * Callers:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_180012B80 @ 0x180012B80 (sub_180012B80.c)
 *     sub_180012CF0 @ 0x180012CF0 (sub_180012CF0.c)
 *     sub_18002098C @ 0x18002098C (sub_18002098C.c)
 *     sub_180020A74 @ 0x180020A74 (sub_180020A74.c)
 *     sub_180020BB0 @ 0x180020BB0 (sub_180020BB0.c)
 *     sub_180043C34 @ 0x180043C34 (sub_180043C34.c)
 *     sub_1800702A0 @ 0x1800702A0 (sub_1800702A0.c)
 *     sub_1800FD528 @ 0x1800FD528 (sub_1800FD528.c)
 *     sub_180116414 @ 0x180116414 (sub_180116414.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xlength_error("string too long");
}
