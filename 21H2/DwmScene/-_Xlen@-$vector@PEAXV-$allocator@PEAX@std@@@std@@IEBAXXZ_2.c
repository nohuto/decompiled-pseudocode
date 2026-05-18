/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x180071498
 * Callers:
 *     sub_180070348 @ 0x180070348 (sub_180070348.c)
 *     sub_18007044C @ 0x18007044C (sub_18007044C.c)
 *     sub_18007AC9C @ 0x18007AC9C (sub_18007AC9C.c)
 *     sub_18007B244 @ 0x18007B244 (sub_18007B244.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180125270 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xout_of_range("invalid vector<T> subscript");
  JUMPOUT(0x1800714A8LL);
}
