/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x18003CE5C
 * Callers:
 *     __imp_load_RIMGetDeviceProperties @ 0x18003CE50 (__imp_load_RIMGetDeviceProperties.c)
 *     __imp_load_RIMFreeInputBuffer @ 0x18003CEDB (__imp_load_RIMFreeInputBuffer.c)
 *     __imp_load_RIMUnregisterForInput @ 0x18003CEED (__imp_load_RIMUnregisterForInput.c)
 *     __imp_load_RIMRegisterForInput @ 0x18003CEFF (__imp_load_RIMRegisterForInput.c)
 *     __imp_load_RIMReadInput @ 0x18003CF11 (__imp_load_RIMReadInput.c)
 *     __imp_load_RIMOnPnpNotification @ 0x18003CF23 (__imp_load_RIMOnPnpNotification.c)
 *     __imp_load_RIMGetDevicePreparsedData @ 0x18003CF35 (__imp_load_RIMGetDevicePreparsedData.c)
 *     __imp_load_InitializeInputDeviceInjection @ 0x18003D5DA (__imp_load_InitializeInputDeviceInjection.c)
 *     __imp_load_InjectPointerInput @ 0x18003D5EC (__imp_load_InjectPointerInput.c)
 *     __imp_load_RemoveInjectionDevice @ 0x18003D5FE (__imp_load_RemoveInjectionDevice.c)
 *     __imp_load_InjectDeviceInput @ 0x18003D69B (__imp_load_InjectDeviceInput.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800114E0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_rim_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
