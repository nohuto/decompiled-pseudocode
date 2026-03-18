/*
 * XREFs of RIMDirectStopUserModeRimDeviceClassNotifications @ 0x1C00A42B0
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C0050E10 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1C0041AA8 (RIMSyncWalkRimObjList.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 */

void RIMDirectStopUserModeRimDeviceClassNotifications()
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 117, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  RIMSyncWalkRimObjList(
    0,
    0LL,
    (void (__fastcall *)(_QWORD *, __int64))lambda_472f4db53ddf5878963a84144a71a26c_::_lambda_invoker_cdecl_);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 119, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
}
