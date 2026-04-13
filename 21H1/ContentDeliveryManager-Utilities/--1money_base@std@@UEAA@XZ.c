/*
 * XREFs of ??1money_base@std@@UEAA@XZ @ 0x1800B9E8C
 * Callers:
 *     _std::moneypunct_char_0_::_Getcat_::_1_::dtor$3 @ 0x1800D5A01 (_std--moneypunct_char_0_--_Getcat_--_1_--dtor$3.c)
 *     _std::locale::_Locimp::_Makexloc_::_1_::dtor$35 @ 0x1800D5C68 (_std--locale--_Locimp--_Makexloc_--_1_--dtor$35.c)
 * Callees:
 *     <none>
 */

void __fastcall std::money_base::~money_base(std::money_base *this)
{
  *(_QWORD *)this = &std::_Facet_base::`vftable';
}
