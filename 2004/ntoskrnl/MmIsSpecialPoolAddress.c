/*
 * XREFs of MmIsSpecialPoolAddress @ 0x140532020
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404FE02C (IopAddBugcheckTriageDataFromParameters.c)
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 */

__int64 __fastcall MmIsSpecialPoolAddress(unsigned __int64 a1)
{
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    MmIsAddressValidEx(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return 0LL;
}
