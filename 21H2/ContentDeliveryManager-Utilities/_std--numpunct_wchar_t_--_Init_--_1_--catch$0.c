/*
 * XREFs of _std::numpunct_wchar_t_::_Init_::_1_::catch$0 @ 0x1800D83AE
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x18003815C (-_Tidy@-$numpunct@_W@std@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1800CFD9C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::numpunct_wchar_t_::_Init_::_1_::catch_0(__int64 a1, __int64 a2)
{
  std::numpunct<wchar_t>::_Tidy(*(void ***)(a2 + 64));
  throw;
}
