/*
 * XREFs of RemoveInputDevices @ 0x1C011E7D0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C011E080 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01541B0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 RemoveInputDevices()
{
  unsigned int i; // ebx
  _QWORD *v1; // rcx

  for ( i = 0; i <= 2; ++i )
  {
    if ( i )
    {
      v1 = (_QWORD *)gpHidInput;
      if ( i != 2 )
        v1 = (_QWORD *)gpKeyboardSensor;
    }
    else
    {
      v1 = (_QWORD *)gpMouseSensor;
    }
    CBaseInput::HandleTSRequest(*v1, 3LL);
  }
  CBaseInput::HandleTSRequest(gpMouseSensor, 1LL);
  CBaseInput::HandleTSRequest(gpKeyboardSensor, 1LL);
  CBaseInput::HandleTSRequest(gpHidInput, 1LL);
  return ForceUpdatePointerDeviceSystemMetrics();
}
