/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18006B976
 * Callers:
 *     __imp_load_CoDisconnectContext @ 0x18006B96A (__imp_load_CoDisconnectContext.c)
 *     __imp_load_CoTaskMemFree @ 0x18006BCBE (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x18006BCD0 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoResumeClassObjects @ 0x18006BCE2 (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoCreateInstance @ 0x18006BCF4 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoReleaseServerProcess @ 0x18006BD06 (__imp_load_CoReleaseServerProcess.c)
 *     __imp_load_CoAddRefServerProcess @ 0x18006BD18 (__imp_load_CoAddRefServerProcess.c)
 *     __imp_load_CoRevokeClassObject @ 0x18006BD2A (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_CoRegisterClassObject @ 0x18006BD3C (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoDecrementMTAUsage @ 0x18006BD4E (__imp_load_CoDecrementMTAUsage.c)
 *     __imp_load_CoIncrementMTAUsage @ 0x18006BD60 (__imp_load_CoIncrementMTAUsage.c)
 *     __imp_load_CoGetMalloc @ 0x18006BE69 (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoTaskMemAlloc @ 0x18006BE7B (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateGuid @ 0x18006C021 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoDisconnectObject @ 0x18006C033 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoInitializeEx @ 0x18006C045 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x18006C057 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoTaskMemRealloc @ 0x18006C069 (__imp_load_CoTaskMemRealloc.c)
 *     __imp_load_StringFromGUID2 @ 0x18006C1DE (__imp_load_StringFromGUID2.c)
 *     __imp_load_CLSIDFromString @ 0x18006C1F0 (__imp_load_CLSIDFromString.c)
 *     __imp_load_PropVariantCopy @ 0x18006C3B2 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromCLSID @ 0x18006C3C4 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CoSetProxyBlanket @ 0x18006C430 (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_CoGetPSClsid @ 0x18006C442 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x18006C454 (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_CoRevertToSelf @ 0x18006C4C0 (__imp_load_CoRevertToSelf.c)
 *     __imp_load_CoImpersonateClient @ 0x18006C4D2 (__imp_load_CoImpersonateClient.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x18006C4E4 (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_IIDFromString @ 0x18006C66C (__imp_load_IIDFromString.c)
 *     __imp_load_CoGetApartmentType @ 0x18006D24C (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoDisableCallCancellation @ 0x18006D25E (__imp_load_CoDisableCallCancellation.c)
 *     __imp_load_CoCancelCall @ 0x18006D270 (__imp_load_CoCancelCall.c)
 *     __imp_load_CoEnableCallCancellation @ 0x18006D294 (__imp_load_CoEnableCallCancellation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180046E90 (__delayLoadHelper2.c)
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
