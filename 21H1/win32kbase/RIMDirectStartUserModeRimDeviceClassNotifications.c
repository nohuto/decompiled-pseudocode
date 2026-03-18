/*
 * XREFs of RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1C00CBCC0
 * Callers:
 *     ?HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z @ 0x1C0050E10 (-HandleTSRequestForUserModeRimDevices@CHidInput@@EEAAXW4InputTSRequest@@@Z.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1C0041AA8 (RIMSyncWalkRimObjList.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 */

void RIMDirectStartUserModeRimDeviceClassNotifications()
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 115, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  RIMSyncWalkRimObjList(
    0,
    0LL,
    (void (__fastcall *)(_QWORD *, __int64))lambda_b66951ac27806062125d6fbb1253c213_::_lambda_invoker_cdecl_);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 116, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
}
