/*
 * XREFs of _RemoveInputDevices@0 @ 0xD257E
 * Callers:
 *     _xxxRemoteDisconnect@0 @ 0xD123C (_xxxRemoteDisconnect@0.c)
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     <none>
 */

int __stdcall RemoveInputDevices()
{
  unsigned int i; // esi
  _DWORD *v1; // ecx
  int v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+0h] [ebp-8h]

  for ( i = 0; i <= 2; ++i )
  {
    if ( i )
    {
      v1 = (_DWORD *)_gpHidInput;
      if ( i != 2 )
        v1 = (_DWORD *)_gpKeyboardSensor;
    }
    else
    {
      v1 = (_DWORD *)_gpMouseSensor;
    }
    CBaseInput::HandleTSRequest(*v1, 3, v3);
  }
  CBaseInput::HandleTSRequest(_gpMouseSensor, 1, v3);
  CBaseInput::HandleTSRequest(_gpKeyboardSensor, 1, v4);
  CBaseInput::HandleTSRequest(_gpHidInput, 1, v5);
  return ForceUpdatePointerDeviceSystemMetrics();
}
