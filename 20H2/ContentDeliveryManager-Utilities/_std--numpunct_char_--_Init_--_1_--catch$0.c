/*
 * XREFs of _std::numpunct_char_::_Init_::_1_::catch$0 @ 0x1800D7CE2
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$numpunct@D@std@@AEAAXXZ @ 0x1800B5A88 (-_Tidy@-$numpunct@D@std@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800CD89C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::numpunct_char_::_Init_::_1_::catch_0(__int64 a1, __int64 a2)
{
  std::numpunct<char>::_Tidy(*(void ***)(a2 + 128));
  throw;
}
