/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ @ 0x180010BC4
 * Callers:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_180012C60 @ 0x180012C60 (sub_180012C60.c)
 *     sub_180012DD0 @ 0x180012DD0 (sub_180012DD0.c)
 *     sub_18002625C @ 0x18002625C (sub_18002625C.c)
 *     sub_180026344 @ 0x180026344 (sub_180026344.c)
 *     sub_180026480 @ 0x180026480 (sub_180026480.c)
 *     sub_180049504 @ 0x180049504 (sub_180049504.c)
 *     sub_180075B70 @ 0x180075B70 (sub_180075B70.c)
 *     sub_180102DF8 @ 0x180102DF8 (sub_180102DF8.c)
 *     sub_18011BCE4 @ 0x18011BCE4 (sub_18011BCE4.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180125246 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xlength_error("string too long");
}
