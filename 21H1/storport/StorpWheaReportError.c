/*
 * XREFs of StorpWheaReportError @ 0x1C0041F98
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C003B168 (StorpMarkDeviceFailed.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 */

void __fastcall StorpWheaReportError(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int128 v5; // [rsp+60h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( g_StorpWheaInitialized )
  {
    if ( a2 )
      WheaReportFatalHwErrorDeviceDriverEx(
        (unsigned int)g_StorpWheaErrorSourceId,
        a1,
        &WheaErrorData,
        (unsigned __int16)word_1C00688FA,
        a4,
        a4 != 0 ? 0x24 : 0,
        &v5,
        0,
        0LL,
        &g_StorpSourceGuid,
        a5);
    else
      WheaReportHwErrorDeviceDriverEx(
        (unsigned int)g_StorpWheaErrorSourceId,
        a1,
        &WheaErrorData,
        (unsigned __int16)word_1C00688FA,
        a4,
        a4 != 0 ? 0x24 : 0,
        &v5,
        0,
        1,
        0LL);
  }
}
