/*
 * XREFs of __tailMerge_winsta_dll @ 0x180054118
 * Callers:
 *     __imp_load_WinStationQueryInformationW @ 0x18005410C (__imp_load_WinStationQueryInformationW.c)
 *     __imp_load_WinStationGetConnectionProperty @ 0x180054197 (__imp_load_WinStationGetConnectionProperty.c)
 *     __imp_load_WinStationFreePropertyValue @ 0x1800541A9 (__imp_load_WinStationFreePropertyValue.c)
 *     __imp_load_WinStationIsSessionRemoteable @ 0x1800541BB (__imp_load_WinStationIsSessionRemoteable.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800525D0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_winsta_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_WINSTA_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
