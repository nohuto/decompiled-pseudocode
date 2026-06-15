/*
 * XREFs of __tailMerge_oleaut32_dll @ 0x18006B960
 * Callers:
 *     __imp_load_SysFreeString @ 0x18006B954 (__imp_load_SysFreeString.c)
 *     __imp_load_VariantTimeToSystemTime @ 0x18006C17B (__imp_load_VariantTimeToSystemTime.c)
 *     __imp_load_SystemTimeToVariantTime @ 0x18006C18D (__imp_load_SystemTimeToVariantTime.c)
 *     __imp_load_SafeArrayGetLBound @ 0x18006C22A (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayGetUBound @ 0x18006C23C (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayDestroy @ 0x18006C24E (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x18006C260 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayGetVartype @ 0x18006C272 (__imp_load_SafeArrayGetVartype.c)
 *     __imp_load_SafeArrayCopy @ 0x18006C284 (__imp_load_SafeArrayCopy.c)
 *     __imp_load_SafeArrayUnlock @ 0x18006C296 (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayLock @ 0x18006C2A8 (__imp_load_SafeArrayLock.c)
 *     __imp_load_SysAllocString @ 0x18006C2CC (__imp_load_SysAllocString.c)
 *     __imp_load_SafeArrayGetDim @ 0x18006C4D6 (__imp_load_SafeArrayGetDim.c)
 *     __imp_load_SafeArrayGetElemsize @ 0x18006C4E8 (__imp_load_SafeArrayGetElemsize.c)
 *     __imp_load_SafeArrayGetElement @ 0x18006C4FA (__imp_load_SafeArrayGetElement.c)
 *     __imp_load_BSTR_UserSize @ 0x18006D13C (__imp_load_BSTR_UserSize.c)
 *     __imp_load_BSTR_UserFree @ 0x18006D15C (__imp_load_BSTR_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserSize @ 0x18006D17C (__imp_load_LPSAFEARRAY_UserSize.c)
 *     __imp_load_BSTR_UserUnmarshal64 @ 0x18006D19C (__imp_load_BSTR_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserFree @ 0x18006D1BC (__imp_load_LPSAFEARRAY_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal @ 0x18006D1DC (__imp_load_LPSAFEARRAY_UserUnmarshal.c)
 *     __imp_load_LPSAFEARRAY_UserFree64 @ 0x18006D1FC (__imp_load_LPSAFEARRAY_UserFree64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal64 @ 0x18006D21C (__imp_load_LPSAFEARRAY_UserMarshal64.c)
 *     __imp_load_BSTR_UserUnmarshal @ 0x18006D23C (__imp_load_BSTR_UserUnmarshal.c)
 *     __imp_load_BSTR_UserMarshal @ 0x18006D25C (__imp_load_BSTR_UserMarshal.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal64 @ 0x18006D27C (__imp_load_LPSAFEARRAY_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal @ 0x18006D29C (__imp_load_LPSAFEARRAY_UserMarshal.c)
 *     __imp_load_BSTR_UserFree64 @ 0x18006D2BC (__imp_load_BSTR_UserFree64.c)
 *     __imp_load_BSTR_UserSize64 @ 0x18006D2DC (__imp_load_BSTR_UserSize64.c)
 *     __imp_load_LPSAFEARRAY_UserSize64 @ 0x18006D2FC (__imp_load_LPSAFEARRAY_UserSize64.c)
 *     __imp_load_BSTR_UserMarshal64 @ 0x18006D31C (__imp_load_BSTR_UserMarshal64.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180046E80 (__delayLoadHelper2.c)
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
