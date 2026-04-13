/*
 * XREFs of ?_Tidy@?$numpunct@_W@std@@AEAAXXZ @ 0x1800374BC
 * Callers:
 *     _std::numpunct_unsigned_short_::_Init_::_1_::catch$0 @ 0x1800D0547 (_std--numpunct_unsigned_short_--_Init_--_1_--catch$0.c)
 *     _std::numpunct_wchar_t_::_Init_::_1_::catch$0 @ 0x1800D5E54 (_std--numpunct_wchar_t_--_Init_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::numpunct<wchar_t>::_Tidy(void **a1)
{
  operator delete[](a1[2]);
  operator delete[](a1[4]);
  operator delete[](a1[5]);
}
