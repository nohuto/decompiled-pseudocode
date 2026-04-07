/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18005391A
 * Callers:
 *     __imp_load_CoCreateInstance @ 0x18005390E (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoInitializeEx @ 0x180053AD3 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x180053AE5 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoCreateGuid @ 0x180053AF7 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoTaskMemAlloc @ 0x1800549DA (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoGetApartmentType @ 0x1800549FC (__imp_load_CoGetApartmentType.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180052B60 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
