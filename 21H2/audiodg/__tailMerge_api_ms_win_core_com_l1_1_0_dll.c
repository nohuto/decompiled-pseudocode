/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x14001E0AF
 * Callers:
 *     __imp_load_CoTaskMemAlloc @ 0x14001E0A3 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x14001E12E (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoTaskMemFree @ 0x14001E140 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoUninitialize @ 0x14001E37E (__imp_load_CoUninitialize.c)
 *     __imp_load_CoRegisterClassObject @ 0x14001E43F (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoResumeClassObjects @ 0x14001E463 (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoInitializeSecurity @ 0x14001E475 (__imp_load_CoInitializeSecurity.c)
 *     __imp_load_CoInitializeEx @ 0x14001E4AB (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoRevokeClassObject @ 0x14001E4BD (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_PropVariantClear @ 0x14001E4CF (__imp_load_PropVariantClear.c)
 *     __imp_load_CoImpersonateClient @ 0x14001E4E1 (__imp_load_CoImpersonateClient.c)
 *     __imp_load_CoRevertToSelf @ 0x14001E4F3 (__imp_load_CoRevertToSelf.c)
 *     __imp_load_StringFromGUID2 @ 0x14001E53B (__imp_load_StringFromGUID2.c)
 *     __imp_load_CLSIDFromString @ 0x14001E54D (__imp_load_CLSIDFromString.c)
 *     __imp_load_CoGetApartmentType @ 0x14001E5AC (__imp_load_CoGetApartmentType.c)
 *     __imp_load_CoReleaseMarshalData @ 0x14001E649 (__imp_load_CoReleaseMarshalData.c)
 *     __imp_load_CoCreateFreeThreadedMarshaler @ 0x14001E65B (__imp_load_CoCreateFreeThreadedMarshaler.c)
 *     __imp_load_CreateStreamOnHGlobal @ 0x14001E66D (__imp_load_CreateStreamOnHGlobal.c)
 *     __imp_load_CoMarshalInterface @ 0x14001E67F (__imp_load_CoMarshalInterface.c)
 *     __imp_load_CoTaskMemRealloc @ 0x14001EA84 (__imp_load_CoTaskMemRealloc.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x14001BBE0 (__delayLoadHelper2.c)
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
