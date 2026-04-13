/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x1800CDEA2
 * Callers:
 *     __imp_load_VariantClear @ 0x1800CDE96 (__imp_load_VariantClear.c)
 *     __imp_load_VariantChangeType @ 0x1800CDF21 (__imp_load_VariantChangeType.c)
 *     __imp_load_VariantInit @ 0x1800CE05B (__imp_load_VariantInit.c)
 *     __imp_load_SysFreeString @ 0x1800CE459 (__imp_load_SysFreeString.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800AAD30 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_oleaut32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_OLEAUT32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
