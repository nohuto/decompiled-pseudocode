/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18006B116
 * Callers:
 *     __imp_load_CoDisconnectContext @ 0x18006B10A (__imp_load_CoDisconnectContext.c)
 *     __imp_load_CoTaskMemFree @ 0x18006B45E (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x18006B470 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoResumeClassObjects @ 0x18006B482 (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoCreateInstance @ 0x18006B494 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoReleaseServerProcess @ 0x18006B4A6 (__imp_load_CoReleaseServerProcess.c)
 *     __imp_load_CoAddRefServerProcess @ 0x18006B4B8 (__imp_load_CoAddRefServerProcess.c)
 *     __imp_load_CoRevokeClassObject @ 0x18006B4CA (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_CoRegisterClassObject @ 0x18006B4DC (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoDecrementMTAUsage @ 0x18006B4EE (__imp_load_CoDecrementMTAUsage.c)
 *     __imp_load_CoIncrementMTAUsage @ 0x18006B500 (__imp_load_CoIncrementMTAUsage.c)
 *     __imp_load_CoGetMalloc @ 0x18006B609 (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoTaskMemAlloc @ 0x18006B61B (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateGuid @ 0x18006B7C1 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoDisconnectObject @ 0x18006B7D3 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoInitializeEx @ 0x18006B7E5 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x18006B7F7 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoTaskMemRealloc @ 0x18006B809 (__imp_load_CoTaskMemRealloc.c)
 *     __imp_load_StringFromGUID2 @ 0x18006B97E (__imp_load_StringFromGUID2.c)
 *     __imp_load_CLSIDFromString @ 0x18006B990 (__imp_load_CLSIDFromString.c)
 *     __imp_load_PropVariantCopy @ 0x18006BB52 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromCLSID @ 0x18006BB64 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CoSetProxyBlanket @ 0x18006BBD0 (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_CoGetPSClsid @ 0x18006BBE2 (__imp_load_CoGetPSClsid.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x18006BBF4 (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_CoRevertToSelf @ 0x18006BC60 (__imp_load_CoRevertToSelf.c)
 *     __imp_load_CoImpersonateClient @ 0x18006BC72 (__imp_load_CoImpersonateClient.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x18006BC84 (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_IIDFromString @ 0x18006BE0C (__imp_load_IIDFromString.c)
 *     __imp_load_CoGetApartmentType @ 0x18006C9EC (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoDisableCallCancellation @ 0x18006C9FE (__imp_load_CoDisableCallCancellation.c)
 *     __imp_load_CoCancelCall @ 0x18006CA10 (__imp_load_CoCancelCall.c)
 *     __imp_load_CoEnableCallCancellation @ 0x18006CA34 (__imp_load_CoEnableCallCancellation.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800466C0 (__delayLoadHelper2.c)
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
