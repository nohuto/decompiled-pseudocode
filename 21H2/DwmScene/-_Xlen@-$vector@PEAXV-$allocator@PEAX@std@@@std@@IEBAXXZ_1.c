/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x18002C608
 * Callers:
 *     sub_18002C714 @ 0x18002C714 (sub_18002C714.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_1800B970C @ 0x1800B970C (sub_1800B970C.c)
 *     sub_1801219F0 @ 0x1801219F0 (sub_1801219F0.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180125270 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xout_of_range("invalid string position");
  JUMPOUT(0x18002C618LL);
}
