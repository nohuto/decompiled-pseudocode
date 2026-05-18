/*
 * XREFs of ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_2 @ 0x18006BBC8
 * Callers:
 *     sub_18006AA78 @ 0x18006AA78 (sub_18006AA78.c)
 *     sub_18006AB7C @ 0x18006AB7C (sub_18006AB7C.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_180075974 @ 0x180075974 (sub_180075974.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18011F9A0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 */

void __noreturn std::vector<void *>::_Xlen()
{
  std::_Xout_of_range("invalid vector<T> subscript");
  JUMPOUT(0x18006BBD8LL);
}
