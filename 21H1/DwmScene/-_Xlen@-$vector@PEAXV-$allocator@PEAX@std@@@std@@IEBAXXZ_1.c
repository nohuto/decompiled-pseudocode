/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_1 @ 0x180026D38
 * Callers:
 *     sub_180026E44 @ 0x180026E44 (sub_180026E44.c)
 *     sub_180054FC4 @ 0x180054FC4 (sub_180054FC4.c)
 *     sub_1800B3E3C @ 0x1800B3E3C (sub_1800B3E3C.c)
 *     sub_18011C120 @ 0x18011C120 (sub_18011C120.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18011F9A0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xout_of_range("invalid string position");
  JUMPOUT(0x180026D48LL);
}
