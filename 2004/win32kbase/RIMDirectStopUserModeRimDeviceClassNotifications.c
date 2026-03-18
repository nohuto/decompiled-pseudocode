/*
 * XREFs of RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C004E3E0
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C004E3A0 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1C004E4F0 (RIMSyncWalkRimObjList.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 */

__int64 RIMDirectStopUserModeRimDeviceClassNotifications()
{
  __int64 result; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 117, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  result = RIMSyncWalkRimObjList(0LL, 0LL, lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 119, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  return result;
}
